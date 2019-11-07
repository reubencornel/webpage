
target:all

all:index.html


index.html:index.article ../navAlpha navbeta.menu
	menuconvert navbeta.menu
	articleGen index.article
	cp designemacs.jpg ..
	cp *.png ..
	cp *.jpg ..
	cp index.html ..
	cp sitestyle.css ..

clean:
	-rm *.html -f
