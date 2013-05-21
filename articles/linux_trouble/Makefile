target:linux_trouble
#make all pages and output glossary listing into a file called 
#glossary. The append the glossary file to the main glossary file
linux_trouble: navbeta.menu grub.html hp_pav.html linux_trouble.html root_pwd.html xwin.html
	make glossary

navbeta.menu: navBeta
	menuconvert navbeta navBeta

glossary:../glossary/glossary
	cat glossary >> ../glossary/glossary

#make the page using the holy script and move the html file one level back
xwin.html:xwin.article navBeta ../navAlpha
	articleGen xwin.article
	cp xwin.html ..

root_pwd.html:root_pwd.article  navBeta ../navAlpha
	articleGen root_pwd.article
	cp root_pwd.html ..

linux_trouble.html:linux_trouble.article  navBeta ../navAlpha
	articleGen linux_trouble.article
	cp linux_trouble.html ..

grub.html:grub.article  navBeta ../navAlpha
	articleGen grub.article
	cp grub.html ..


hp_pav.html:hp_pav.article  navBeta ../navAlpha
	articleGen hp_pav.article
	cp hp_pav.html ..



clean:
	-rm *.html -f
