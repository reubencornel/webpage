target: datastructures

datastructures: navBeta.menu stacks.html
	-cp *.html $(WEBSITE)/website

navBeta.menu: navBeta
	menuconvert navbeta navBeta

stacks.html: stacks.article
	code.pl <stacks.article >op.article
	cp stacks.article stacks_backup.article
	mv op.article stacks.article
	articleGen stacks.article
	cp stacks_backup.article stacks.article

clean:
	-rm *.html
	-rm *.menu
