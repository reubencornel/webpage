target:page_scripts

page_scripts:navbeta.menu page_script.html
	make glossary


navbeta.menu: navBeta
	menuconvert navbeta navBeta

glossary:../glossary/glossary
	cat glossary >>../glossary/glossary


page_script.html:navbeta.menu page_script.article ../navAlpha navBeta
	generatePage page_script.article
	cp page_script.html $(WEBSITE)/website

clean:
	rm -f *.html
	rm -f *.txt
	rm -f navbeta.menu
