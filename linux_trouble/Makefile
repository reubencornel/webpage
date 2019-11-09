target:linux_trouble
#make all pages and output glossary listing into a file called 
#glossary. The append the glossary file to the main glossary file
linux_trouble:navbeta.menu grub.html hp_pav.html trouble_shooting.html root_pwd.html xwin.html
	make glossary


navbeta.menu: navBeta
	menuconvert navbeta navBeta

glossary:../glossary/glossary
	cat glossary >> ../glossary/glossary

#make the page using the holy script and move the html file one level back
xwin.html:xwin.article navbeta.menu ../navAlpha
	-generatePage xwin.article
	cp xwin.html ..

root_pwd.html:root_pwd.article navbeta.menu ../navAlpha
	-generatePage root_pwd.article
	cp root_pwd.html ..

trouble_shooting.html:linux_trouble.article  navbeta.menu ../navAlpha
	-generatePage linux_trouble.article
	cp linux_trouble.html ..

grub.html:grub.article  navbeta.menu ../navAlpha
	-generatePage grub.article
	cp grub.html ..


hp_pav.html:hp_pav.article  navbeta.menu ../navAlpha
	-generatePage hp_pav.article
	cp hp_pav.html ..



clean:
	-rm *.html -f
