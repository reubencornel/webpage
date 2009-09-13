target:aboutme

aboutme:aboutme.html 

aboutme.html:aboutme.txt navBeta $(WEBSITE)/navAlpha
	makepage.sh aboutme.txt
	cp house.jpg ..
	-cp resume.pdf ..
	cp aboutme.html ..
	cp ~/emacs/dotEmacs.el ../my_emacs_init.txt

clean:
	-rm *.html -f
	-rm *.menu
