target:misc

misc: navbeta.menu seg_fault.html k1000_rally.html misc.html ed_tutorial.html anthem.html sbcl_compile.html complexdefn.html
	make glossary
	-cp *.html ..

navbeta.menu: navBeta
	menuconvert navbeta navBeta

sbcl_compile.html: compile_sbcl.page navBeta
	pagegen compile_sbcl.page

anthem.html: indian_anthem.page anthem.pdf
	#sbcl --load ~/bin/menuconvert.fasl navbeta navBeta
	menuconvert navbeta navBeta
	pagegen indian_anthem.page
	#-sbcl --load ~/bin/pagegen.fasl indian_anthem.page
	cp anthem.html ..
	-cp *.pdf ..

ed_tutorial.html: ed.page
	#sbcl --load ~/bin/menuconvert.fasl navbeta navBeta
	menuconvert navbeta navBeta
	pagegen ed.page
	#sbcl --load ~/bin/pagegen.fasl ed.page
	cat ed_tutorial.html | code-lisp.pl > op
	mv op ed_tutorial.html  
	cp ed_tutorial.html ..

complexdefn.html: complexdefn.article
	articleGen complexdefn.article

glossary:../glossary/glossary
	cat glossary >> ../glossary/glossary

misc.html:misc.article ../navAlpha
	-generatePage misc.article
	cp misc.html ..	

seg_fault.html:seg_fault.article ../navAlpha
	generatePage seg_fault.article
	cp seg_fault.html ..

k1000_rally.html:k1000_rally.article ../navAlpha
	generatePage k1000_rally.article
	cp k1000_rally.html ..
clean:
	-rm *.html
	-rm *.menu
