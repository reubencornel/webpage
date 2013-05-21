target:all

all:glossary
	@echo "Collating Glossary..."
	@cat glossary | awk -f ~/bin/makepage.awk  > glossary.txt
	@echo "Building glossary page"
	@-makepage.sh glossary.txt
#	@-cat glossary.html | tidy -o glo1.html
#	@-cp glo1.html glossary.html
#	@-rm glo1.html
	@cp glossary.html ..
	@echo "Glossary done..."
clean:
	@echo "Cleaning glossary..."
	@rm *.html
	@echo "Done"
