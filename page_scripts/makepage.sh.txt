#!/bin/bash
#get the filename from text file
for i in $@;do
filename_var=`cat $i | grep "FILE_NAME:"|head -n 2 |cut -d ':' -f 2 `


#put in html header
echo "<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.0 Transitional//EN\"">$filename_var

echo  " \"http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd\">" >>$filename_var

echo "<html xmlns=\"http://www.w3.org/1999/xhtml\">" >> $filename_var
echo "<head>" >> $filename_var
echo "<title>Reuben's Webpage</title>" >> $filename_var
echo "<link rel=\"stylesheet\" href=\"sitestyle.css\" type=\"text/css\" />" >> $filename_var
echo "</head>" >> $filename_var
echo "<body>" >> $filename_var

#parse the file

cat $i | sed -f ~/bin/makepage.sed | uniq > temp_file
cat $filename_var temp_file | perl ~/bin/code.pl > temp_file2
mv temp_file2 $filename_var
rm -f temp_file


echo "">>$filename_var
echo "</body>">>$filename_var
echo "</html>">>$filename_var


#Generate the menus
perl ~/bin/makepage.pl $filename_var| uniq > temp_file.html
cat temp_file.html | sed  's/NAVALPHA//p;s/NAVBETA//p'| uniq > $filename_var
rm -f temp_file.html 

#tidy -m -q -asxhtml $filename_var
done
