target:page_scripts

page_scripts:page_script.html code.pl.txt makepage.awk.txt makepage.pl.txt makepage.sh.txt makepage.sed.txt makenew.awk.txt pagegen.lisp.txt articlePageGen.lisp.txt
	make glossary

pagegen.lisp.txt:~/ProvingGrounds/webpageTools/lisp/src/pagegen.lisp
	cp ~/ProvingGrounds/webpageTools/lisp/src/pagegen.lisp ../pagegen.lisp.txt

articlePageGen.lisp.txt:~/ProvingGrounds/webpageTools/lisp/src/articleGen.lisp
	cp ~/ProvingGrounds/webpageTools/lisp/src/articleGen.lisp ../articlepage.lisp.txt

makenew.awk.txt:~/bin/makenew.awk
	cp ~/bin/makenew.awk ./makenew.awk.txt
	cp makenew.awk.txt ..

makepage.sed.txt:~/bin/makepage.sed
	cp ~/bin/makepage.sed ./makepage.sed.txt
	cp makepage.sed.txt ..

makepage.sh.txt:~/bin/makepage.sh
	cp ~/bin/makepage.sh ./makepage.sh.txt
	cp makepage.sh.txt ..

makepage.pl.txt:~/bin/makepage.pl
	cp ~/bin/makepage.pl ./makepage.pl.txt
	cp makepage.pl.txt ..

makepage.awk.txt:~/bin/makepage.awk
	cp ~/bin/makepage.awk ./makepage.awk.txt
	cp makepage.awk.txt ..


code.pl.txt:~/bin/code.pl
	cp ~/bin/code.pl ./code.pl.txt
	cp code.pl.txt ..

glossary:../glossary/glossary
	cat glossary >>../glossary/glossary


page_script.html:page_script ../navAlpha navBeta
	-makepage.sh page_script
	cp page_script.html ..

clean:
	rm -f *.html
	rm -f *.txt
