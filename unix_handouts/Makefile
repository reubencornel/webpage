target:unix_handouts
#make all pages and output glossary listing into a file called 
#glossary. The append the glossary file to the main glossary file
unix_handouts:unix_handouts.html

#make the page using the holy script and move the html file one level back
unix_handouts.html:unix_handouts.txt navBeta ../navAlpha *.pdf
	-makepage.sh unix_handouts.txt
	-cp unix_handouts.html ..
	-cp *.pdf ..

clean:
	-rm *.html -f
