
target:all

all:index.html


index.html:index.article ../navAlpha
	menuconvert navbeta navBeta
	articleGen index.article
	cp designemacs.jpg $(WEBSITE)/website
	cp *.png $(WEBSITE)/website
	cp *.jpg $(WEBSITE)/website
	cp index.html $(WEBSITE)/website
	cp sitestyle.css $(WEBSITE)/website

clean:
	-rm *.html -f
