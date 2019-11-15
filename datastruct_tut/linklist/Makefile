#website = ~/webpage
target: linklist_tutorial

linklist_tutorial: navbeta.menu at_end.html in_front.html linklist_sol1.html linklist_sol2.html needlinklist.html enter_linklist.html linklist.html array.c.txt linklist1.c.txt linklist2.c.txt linklist3.c.txt in_middle.html linklist4.c.txt 
	make glossary
	cp *.png $(WEBSITE)/website
	-cp *.html $(WEBSITE)/website


navbeta.menu: navBeta
	menuconvert navbeta navBeta

linklist4.c.txt:linklist4.c
	cp linklist4.c linklist4.c.txt
	cp linklist4.c.txt $(WEBSITE)/website


array.c.txt:array.c
	cp array.c array.c.txt
	cp array.c.txt $(WEBSITE)/website

linklist1.c.txt:linklist1.c
	cp linklist1.c linklist1.c.txt
	cp linklist1.c.txt $(WEBSITE)/website

linklist2.c.txt:linklist2.c
	cp linklist2.c linklist2.c.txt
	cp linklist2.c.txt $(WEBSITE)/website

linklist3.c.txt:linklist3.c
	cp linklist3.c linklist3.c.txt
	cp linklist3.c.txt $(WEBSITE)/website


glossary:$(WEBSITE)/glossary/glossary
	cat glossary >>$(WEBSITE)/glossary/glossary

linklist.html:linklist.article navBeta $(WEBSITE)/navAlpha
	-generatePage linklist.article

at_end.html:at_end.article navBeta $(WEBSITE)/navAlpha
	-generatePage at_end.article

in_front.html:in_front.article navBeta $(WEBSITE)/navAlpha
	generatePage in_front.article

in_middle.html:in_middle.article navBeta $(WEBSITE)/navAlpha
	generatePage in_middle.article

linklist_sol1.html:
	generatePage linklist_sol1.article

linklist_sol2.html:
	generatePage linklist_sol2.article

needlinklist.html: needlinklist.article navBeta $(WEBSITE)/navAlpha
	generatePage needlinklist.article

enter_linklist.html:enter_linklist.article navBeta $(WEBSITE)/navAlpha
	generatePage enter_linklist.article

clean:
	-rm navbeta.menu
	-rm *.html -f
	-rm *.c.txt
