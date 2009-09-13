target:linux_trouble
#make all pages and output glossary listing into a file called 
#glossary. The append the glossary file to the main glossary file
linux_trouble:grub.html hp_pav.html trouble_shooting.html root_pwd.html xwin.html
	make glossary

glossary:../glossary/glossary
	cat glossary >> ../glossary/glossary

#make the page using the holy script and move the html file one level back
xwin.html:xwin.txt navBeta ../navAlpha
	-makepage.sh xwin.txt
	cp xwin.html ..

root_pwd.html:root_pwd.txt  navBeta ../navAlpha
	-makepage.sh root_pwd.txt
	cp root_pwd.html ..

trouble_shooting.html:linux_trouble.txt  navBeta ../navAlpha
	-makepage.sh linux_trouble.txt
	cp trouble_shooting.html ..

grub.html:grub.txt  navBeta ../navAlpha
	-makepage.sh grub.txt
	cp grub.html ..


hp_pav.html:hp_pav.txt  navBeta ../navAlpha
	-makepage.sh hp_pav.txt
	cp hp_pav.html ..



clean:
	-rm *.html -f