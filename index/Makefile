target:all

all:index.html


index.html:index ../navAlpha navBeta
	-makepage.sh index
	cp designemacs.jpg ..
	cp *.png ..
	cp *.jpg ..
	cp index.html ..
	cp sitestyle.css ..

clean:
	-rm *.html -f
