target:all
#get into all directories and make the webpage
all:
	menuconvert navalpha navAlpha
	-rm glossary/glossary
	touch glossary/glossary
	-rm website/*
	cd cooking && make
	cd photo_album && make
	cd my_projects && make
	cd datastruct_tut && make
	cd page_scripts && make
	cd linux_trouble && make
	cd misc && make
	cd glossary && make
	cd index && make
	cd whats_new && make
	cd about_me && make
	cd unix_handouts && make
	-mv *.html website
	-mv *.png  website
	-mv *.txt website
	-mv *.JPG website
	-cp *.css website
	-mv *.jpg website
	-mv *.pdf website
	-mv *.tar.gz website
#	#-cd website && tidyDirectory.sh

#clean up the mess left by the make process
clean:
	-rm *.html
	-rm *.txt
	-rm *.png
	-rm *.pdf
	-rm *.menu
	cd cooking && make clean
	cd photo_album && make clean
	cd my_projects && make clean
	cd datastruct_tut && make clean
	cd page_scripts && make clean
	cd linux_trouble && make clean
	cd misc && make clean
	cd index && make clean
	cd about_me && make clean
	cd unix_handouts && make clean

#this is simple. Just add an entry into the whats new page and make all
final:
	whats_new
	make all

deploy:
	tar -czf website.tar.gz	 website
	scp website.tar.gz rfcornel@tty.freeshell.org:
	expect /Users/reuben/bin/deploy.expect
