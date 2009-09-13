target:misc

misc:seg_fault.html k1000_rally.html misc.html ed_tutorial.html anthem.html sbcl_compile.html
	menuconvert navbeta navBeta
	make glossary
	-cp *.html ..


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

glossary:../glossary/glossary
	cat glossary >> ../glossary/glossary

misc.html:misc.txt ../navAlpha
	-makepage.sh misc.txt
	cp misc.html ..	

seg_fault.html:seg_fault.txt ../navAlpha
	-makepage.sh seg_fault.txt
	cp seg_fault.html ..

k1000_rally.html:k1000_rally.txt ../navAlpha
	-makepage.sh k1000_rally.txt
	cp k1000_rally.html ..
clean:
	-rm *.html
	-rm *.menu
