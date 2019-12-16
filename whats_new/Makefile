target:whats_new

whats_new:whats_new.html      #atom.xml
	cp *.html $(WEBSITE)/website
#	cp *.xml $(WEBSITE)/website

whats_new.html:log $(WEBSITE)/navAlpha
	awk -f ~/bin/makenew.awk log > whats_new.article
	generatePage whats_new.article

# atom.xml:log
# 	cat log | awk -f ~/bin/makeatom.awk > atom.xml


clean:
	-rm whats_new.article
	-rm op
	-rm log_temp
	-rm *.html
	-rm *.xml
n
