target:all

all:glossary
	cat glossary | gawk -f ~/bin/makepage.awk  > glossary.txt
	-makepage.sh glossary.txt
	-cat glossary.html | tidy -o glo1.html
	-cp glo1.html glossary.html
	-rm glo1.html
	cp glossary.html ..
clean:
	rm *.html
