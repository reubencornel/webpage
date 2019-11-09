#website = ~/webpage
target: linklist_tutorial

linklist_tutorial: navbeta.menu at_end.html in_front.html linklist_sol1.html linklist_sol2.html needlinklist.html enter_linklist.html linklist.html array.c.txt linklist1.c.txt linklist2.c.txt linklist3.c.txt in_middle.html linklist4.c.txt 
	make glossary

navbeta.menu: navBeta
	menuconvert navbeta navBeta

#delete_at_begining.html: delete_at_begining.txt navBeta $(WEBSITE)/navAlpha
#	makepage delete_at_begining.txt
#	cp delete_at_begining.html ..

linklist4.c.txt:linklist4.c
	cp linklist4.c linklist4.c.txt
	cp linklist4.c.txt $(WEBSITE)/website

figures:
	cp *.png $(WEBSITE)/website

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
	cp linklist.html $(WEBSITE)/website

at_end.html:at_end.article navBeta $(WEBSITE)/navAlpha
	cp linklist31.png $(WEBSITE)/website
	cp linklist32.png $(WEBSITE)/website
	cp linklist33.png $(WEBSITE)/website
	-generatePage at_end.article
	cp at_end.html $(WEBSITE)/website

in_front.html:in_front.article navBeta $(WEBSITE)/navAlpha
	generatePage in_front.article
	cp linklist1.png $(WEBSITE)/website
	cp linklist2.png $(WEBSITE)/website
	cp in_front.html $(WEBSITE)/website

in_middle.html:in_middle.article navBeta $(WEBSITE)/navAlpha
	generatePage in_middle.article
	cp linklist41.png $(WEBSITE)/website
	cp linklist42.png $(WEBSITE)/website
	cp linklist43.png $(WEBSITE)/website
	cp in_middle.html $(WEBSITE)/website

linklist_sol1.html:
	generatePage linklist_sol1.article
	cp linklist_sol1.html $(WEBSITE)/website

linklist_sol2.html:
	generatePage linklist_sol2.article
	cp linklist_sol2.html $(WEBSITE)/website

needlinklist.html: needlinklist.article navBeta $(WEBSITE)/navAlpha
	generatePage needlinklist.article
	cp needlinklist.html $(WEBSITE)/website

enter_linklist.html:enter_linklist.article navBeta $(WEBSITE)/navAlpha
	generatePage enter_linklist.article
	cp enter_linklist.html $(WEBSITE)/website
clean:
	-rm navbeta.menu
	-rm *.html -f
	-rm *.c.txt
