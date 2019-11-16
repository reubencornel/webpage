target:photoalbum

photoalbum: navbeta.menu photoalbum.html
	@-cp *.html $(WEBSITE)/website
	@make glossary


navbeta.menu: navBeta
	@menuconvert navbeta navBeta

photoalbum.html:  photoalbum.article
	@articleGen photoalbum.article

# easter.html: easter.html
# 	@pagegen easter.page

# washington.html: washington.html
# 	@pagegen washington.page

glossary: ../glossary/glossary
	@-cat glossary >> ../glossary/glossary

clean:
	@-rm *.html
	@-rm *.menu
