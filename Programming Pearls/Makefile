target:cooking

cooking: cooking.html murghhar.html buffalo.html rasam.html peprrasam.html
	-cp *.html ..
	make glossary

rasam.html: rasam.page
	pagegen rasam.page

cooking.html: cooking.page
	menuconvert navbeta navBeta
	pagegen cooking.page

murghhar.html: murghhar.page
	pagegen murghhar.page

buffalo.html: buffalo.page
	pagegen buffalo.page

peprrasam.html: peprrasam.article
	articleGen peprrasam.article

glossary: ../glossary/glossary
	-cat glossary >> ../glossary/glossary

clean:
	-rm *.html
	-rm *.menu
