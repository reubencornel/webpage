#!/bin/bash
#get the filename from text file
filename_var=`cat $1 | grep "FILE_NAME:"|cut -d ':' -f 2 `


#put in html header
echo "<html>" > $filename_var
echo "<head>" >> $filename_var
echo "<title>Reuben's Webpage</title>" >> $filename_var
echo "<link rel=\"stylesheet\" href=\"sitestyle.css\" type=\"text/css\">" >> $filename_var
echo "</head>" >> $filename_var
echo "<body>" >> $filename_var

#parse the file

cat $1 | sed -f ~/bin/makepage.sed | uniq > temp_file
cat $filename_var temp_file >temp_file2
mv temp_file2 $filename_var
rm -f temp_file
rm -f temp_file2



echo "">>$filename_var
echo "</body>">>$filename_var
echo "</html>">>$filename_var


perl ~/bin/makepage.pl $filename_var| uniq > temp_file.html

cat temp_file.html | sed  's/NAVALPHA//p;s/NAVBETA//p'| uniq > $filename_var

rm temp_file.html -f

tidy -m -asxhtml $filename_var