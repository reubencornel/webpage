target:linux_trouble
#make all pages and output glossary listing into a file called 
#glossary. The append the glossary file to the main glossary file
linux_trouble:navbeta.menu grub.html hp_pav.html linux_trouble.html root_pwd.html xwin.html
	make glossary


navbeta.menu: navBeta
	menuconvert navbeta navBeta

glossary:../glossary/glossary
	cat glossary >> ../glossary/glossary

#make the page using the holy script and move the html file one level back
xwin.html:xwin.article navbeta.menu ../navAlpha
	-generatePage xwin.article
	cp xwin.html $(WEBSITE)/website

root_pwd.html:root_pwd.article navbeta.menu ../navAlpha
	-generatePage root_pwd.article
	cp root_pwd.html $(WEBSITE)/website

linux_trouble.html:linux_trouble.article  navbeta.menu ../navAlpha
	-generatePage linux_trouble.article
	cp linux_trouble.html $(WEBSITE)/website

grub.html:grub.article  navbeta.menu ../navAlpha
	-generatePage grub.article
	cp grub.html $(WEBSITE)/website


hp_pav.html:hp_pav.article  navbeta.menu ../navAlpha
	-generatePage hp_pav.article
	cp hp_pav.html $(WEBSITE)/website

clean:
	-rm *.html -f
