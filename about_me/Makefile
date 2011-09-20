target:aboutme

aboutme:aboutme.html 

aboutme.html:aboutme.txt navBeta $(WEBSITE)/navAlpha
	makepage.sh aboutme.txt
	cp house.jpg ..
	-cp *.pdf ..
	cp aboutme.html ..

clean:
	-rm *.html -f
	-rm *.menu
