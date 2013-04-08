target:aboutme

aboutme:aboutme.html 

aboutme.html:aboutme.article navBeta $(WEBSITE)/navAlpha
	menuconvert navbeta navBeta
	articleGen aboutme.article
	cp house.jpg ..
	-cp *.pdf ..
	cp aboutme.html ..

clean:
	-rm *.html -f
	-rm *.menu
