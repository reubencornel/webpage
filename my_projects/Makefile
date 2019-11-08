target:my_projects

my_projects: navBeta.menu treediff.html defending_london.html photo_angadi.html sangeet.html project.html yate.html fill.ico.txt
	make glossary

navBeta.menu: navBeta
	menuconvert navbeta navBeta

fill.ico.txt:fill.ico
	cp fill.ico fill.ico.txt
	cp fill.ico.txt ..

glossary:../glossary/glossary
	cat glossary >>../glossary/glossary

defending_london.html:defending_london.txt navBeta ../navAlpha
	-makepage.sh defending_london.txt
	cp defending_london.html ..

photo_angadi.html:photo_angadi.txt navBeta ../navAlpha
	-makepage.sh photo_angadi.txt
	cp photo_angadi.html ..

sangeet.html:sangeet.txt navBeta ../navAlpha
	-makepage.sh sangeet.txt
	cp sangeet.html ..

project.html:project.txt navBeta ../navAlpha
	-makepage.sh project.txt
	cp project.html ..

yate.html:yate.article navBeta ../navAlpha
	articleGen yate.article
	cp yate.html ..

treediff.html: treediff.article
	articleGen treediff.article
	cp treediff.html ..

clean:
	-rm *.html
