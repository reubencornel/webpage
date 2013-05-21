BEGIN{
  RS="#";
  FS="|";
  print "FILE_NAME:whats_new.html";
  print "TITLE:Whats new on the site";
  print "CONTENT_START:New stuff...";
  print "SEP";
}


END{
  print "FINIS";
  print "NAVALPHA";
}

/<>/{print " "}

{
  print "BEGINP"
  print "<b>"$1"</b>";
  print "SEP"$2;
  print "ENDP";
  
}



