target:whats_new

whats_new:whats_new.html atom.xml
	cp *.html ..
	cp *.xml ..

whats_new.html:log $(WEBSITE)/navAlpha
	cat log | awk -f ~/bin/makenew.awk > op
	-makepage.sh op

atom.xml:log
	cat log | awk -f ~/bin/makeatom.awk > atom.xml


clean:
	-rm *.html
	-rm *.xml
