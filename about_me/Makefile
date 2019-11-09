target:aboutme

aboutme:aboutme.html 

aboutme.html:aboutme.article navBeta $(WEBSITE)/navAlpha
	menuconvert navbeta navBeta
	articleGen aboutme.article
	-cp house.jpg $(WEBSITE)/website
	-cp *.pdf $(WEBSITE)/website
	-cp aboutme.html $(WEBSITE)/website

clean:
	@-rm *.html -f 2>/dev/null
	@-rm *.menu 2>/dev/null
