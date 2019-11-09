target:all

all:glossary
	cat glossary | awk -f ~/bin/makepage.awk  > glossary.article
	generatePage glossary.article
	-cat glossary.html | tidy -o glo1.html
	-cp glo1.html glossary.html
	-rm glo1.html
	cp glossary.html ..
clean:
	rm *.html
