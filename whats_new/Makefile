target:whats_new

whats_new:whats_new.html atom.xml
	cp *.html $(WEBSITE)/website
	cp *.xml $(WEBSITE)/website

whats_new.html:whats_new.article $(WEBSITE)/navAlpha
	generatePage whats_new.article

atom.xml:log
	cat log | awk -f ~/bin/makeatom.awk > atom.xml


clean:
	-rm op
	-rm log_temp
	-rm *.html
	-rm *.xml
