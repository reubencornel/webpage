target:cooking

cooking: navbeta.menu cooking.html murghhar.html buffalo.html rasam.html peprrasam.html Murgh2Piaza.html
	@-cp *.html $(WEBSITE)/website
	@-make glossary

rasam.html: rasam.article
	@articleGen rasam.article

cooking.html: cooking.article
	@articleGen cooking.article

navbeta.menu: navBeta
	@menuconvert navbeta navBeta

murghhar.html: murghhar.article
	@articleGen murghhar.article

buffalo.html: buffalo.article
	@articleGen buffalo.article

peprrasam.html: peprrasam.article
	@articleGen peprrasam.article

Murgh2Piaza.html: Murgh2Piaza.article
	@articleGen Murgh2Piaza.article

glossary: ../glossary/glossary
	@-cat glossary >> ../glossary/glossary

clean:
	@-rm *.html
	@-rm *.menu
