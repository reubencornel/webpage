target:all

all:  navBeta.menu ds.html stacks.html bst.html ../navAlpha disjointsets.html
	cd linklist && make
	-mv *.html ..
	-cp *.png ..
	-mv *.txt ..

navBeta.menu: navBeta
	menuconvert navbeta navBeta

stacks.html: stacks.article navBeta.menu 
	code.pl <stacks.article >op.article
	cp stacks.article stacks_backup.article
	mv op.article stacks.article
	articleGen stacks.article
	cp stacks_backup.article stacks.article
	rm stacks_backup.article

bst.html: bst.article navBeta.menu 
	code.pl <bst.article >op.article
	cp bst.article bst_backup.article
	mv op.article bst.article
	articleGen bst.article
	cp bst_backup.article bst.article
	rm bst_backup.article

disjointsets.html: disjointsets.article navBeta.menu 
	code.pl <disjointsets.article >op.article
	cp disjointsets.article disjointsets_backup.article
	mv op.article disjointsets.article
	articleGen disjointsets.article
	cp disjointsets_backup.article disjointsets.article
	rm disjointsets_backup.article


ds.html: datastructure.page navBeta.menu
	-pagegen datastructure.page
clean:
	cd linklist && make clean
