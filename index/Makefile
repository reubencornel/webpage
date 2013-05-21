
target:all

all:index.html


index.html:index ../navAlpha navBeta
#	-makepage.sh index
	@echo "Converting navbeta..."
	@menuconvert navbeta navBeta
	@echo "Generating index page..."
	@articleGen index.article
	@echo "Moving files..."
	@cp designemacs.jpg ..
	@cp *.png ..
	@cp *.jpg ..
	@cp index.html ..
	@cp sitestyle.css ..
	@echo "Done"

clean:
	@echo "Cleaning index..."
	@-rm -f *.html 
	@echo "Done"
