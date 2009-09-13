target:photoalbum

photoalbum: photoalbum.html easter.html washington.html 
	-cp *.html ..
	-cp *.jpg ..
	-cp *.JPG ..
	make glossary

photoalbum.html: photoalbum.html
	menuconvert navbeta navBeta
	pagegen photoalbum.page

easter.html: easter.html
	pagegen easter.page

washington.html: washington.html
	pagegen washington.page
	
glossary: ../glossary/glossary
	-cat glossary >> ../glossary/glossary

#ed_tutorial.html: ed.page
#	sbcl --load ~/bin/menuconvert.fasl navbeta navBeta
#	sbcl --load ~/bin/pagegen.fasl ed.page
#	cat ed_tutorial.html | code-lisp.pl > op
#	mv op ed_tutorial.html  
#	cp ed_tutorial.html ..

clean:
	-rm *.html
	-rm *.menu
