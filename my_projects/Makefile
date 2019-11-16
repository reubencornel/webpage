target:my_projects

my_projects: navBeta.menu treediff.html defending_london.html photo_angadi.html sangeet.html project.html yate.html fill.ico.txt
	@cp *.html $(WEBSITE)/website
	@make glossary

navBeta.menu: navBeta
	@menuconvert navbeta navBeta

fill.ico.txt:fill.ico
	@cp fill.ico fill.ico.txt
	@cp fill.ico.txt $(WEBSITE)/website

glossary:../glossary/glossary
	@cat glossary >>../glossary/glossary

defending_london.html:defending_london.article navBeta ../navAlpha
	@articleGen defending_london.article

photo_angadi.html:photo_angadi.article navBeta ../navAlpha
	@articleGen photo_angadi.article

sangeet.html:sangeet.article navBeta ../navAlpha
	@articleGen sangeet.article

project.html:project.article navBeta ../navAlpha
	@articleGen project.article

yate.html:yate.article navBeta ../navAlpha
	@articleGen yate.article

treediff.html: treediff.article
	@articleGen treediff.article

clean:
	-rm *.html
