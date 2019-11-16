target:misc

misc: navbeta.menu seg_fault.html k1000_rally.html misc.html ed_tutorial.html anthem.html sbcl_compile.html complexdefn.html
	make glossary
	-cp *.html $(WEBSITE)/website

navbeta.menu: navBeta
	menuconvert navbeta navBeta

sbcl_compile.html: compile_sbcl.page navBeta
	pagegen compile_sbcl.page

anthem.html: indian_anthem.page anthem.pdf
	menuconvert navbeta navBeta
	pagegen indian_anthem.page
	-cp *.pdf $(WEBSITE)/website

ed_tutorial.html: ed.page
	menuconvert navbeta navBeta
	generatePage ed_tutorial.article
	cat ed_tutorial.html | code-lisp.pl > op
	mv op ed_tutorial.html  

complexdefn.html: complexdefn.article
	articleGen complexdefn.article

glossary:../glossary/glossary
	cat glossary >> ../glossary/glossary

misc.html:misc.article ../navAlpha
	-generatePage misc.article

seg_fault.html:seg_fault.article ../navAlpha
	generatePage seg_fault.article

k1000_rally.html:k1000_rally.article ../navAlpha
	generatePage k1000_rally.article

clean:
	-rm *.html
	-rm *.menu
