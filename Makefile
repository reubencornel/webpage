target:all
#get into all directories and make the webpage
all:
	@menuconvert navalpha navAlpha
	@-rm glossary/glossary
	@touch glossary/glossary
	@-rm website/*
	@cd cooking && make
	@cd photo_album && make
	@cd my_projects && make
	@cd datastruct_tut && make
	@cd page_scripts && make
	@cd linux_trouble && make
	@cd misc && make
	@cd glossary && make
	@cd index && make
	@cd whats_new && make
	@cd about_me && make
	@cd unix_handouts && make
#	@-mv *.html website
#	@-mv *.png  website
#	@-mv *.txt website
#	@-mv *.JPG website
#	@-mv *.jpg website
#	@-mv *.xml website
#	@-mv *.pdf website
#	@-mv *.tar.gz website
	@-cd website && tidydirectory 

#clean up the mess left by the make process
clean:
	@-rm *.html
	@-rm *.txt
	@-rm *.png
	@-rm *.pdf
	@-rm *.menu
	@-cd website && rm *
	@cd cooking && make clean
	@cd photo_album && make clean
	@cd whats_new && make clean
	@cd my_projects && make clean
	@cd datastruct_tut && make clean
	@cd page_scripts && make clean
	@cd linux_trouble && make clean
	@cd misc && make clean
	@cd index && make clean
	@cd about_me && make clean
	@cd unix_handouts && make clean
	@cd glossary && make clean
	@find . -name 'navbeta.menu' -exec rm {} \;


#this is simple. Just add an entry into the whats new page and make all
final:
	whats_new
	make all
