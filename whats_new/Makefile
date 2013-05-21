target:whats_new

whats_new:whats_new.html atom.xml
	@echo "Moving files"
	@cp *.html ..

whats_new.html:log $(WEBSITE)/navAlpha
	@echo "Building whats new page..."
	@cat log | awk -f ~/bin/makenew.awk > op
	@-makepage.sh op
	@echo "Done"

atom.xml:log
	@echo "Building atom feed"
	@cat log | awk -f ~/bin/makeatom.awk > atom.xml
	@echo "Done"


clean:
	@echo "Cleaning whats new"
	@-rm *.html
	@-rm *.xml
	@echo "Done"
