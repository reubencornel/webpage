BEGIN{
  RS="%%";
  FS="|";
  print "FILE_NAME:glossary.html";
  print "TITLE:Glossary";
  print "CONTENT_START:";

}

{
  print "<a name= \"" $1 "\"\/>";  
  print "BEGINP";
  print "<b>" $1 "</b>" $2;
  print "ENDP";
}

END{
  print "FINIS";
  print "NAVALPHA";

}
