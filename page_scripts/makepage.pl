#!/usr/bin/perl

open (FILE1,"<$ARGV[0]") or die 'Could not open file';
#open (FILE1,"temp.html") ;




while($line=<FILE1>){
    print $line if $line !~ /NAVALPHA/;
    print $line if $line !~ /NAVBETA/;
    if ($line=~/NAVALPHA(.*)/){
	open (FILE,'</home/project/webpage/navAlpha') or open (FILE,'<navAlpha') or die 'Could not open file';

	print "<div id=\"navAlpha\">\n";
	while(<FILE>){
	    chomp();
	    split(/\|/);
	    print "<a href=\"@_[1]\">@_[0]</a><br><br>\n ";
	}
	print "</div>";
	print $1;
    }

    if($line=~/^NAVBETA$/){
	open (FILE2,'<navBeta') or die 'Could Not open file';
	print "<div id=\"navBeta\">\n";
	while(<FILE2>){
	    chomp();
	    split(/\|/);
	    print "<a href=\"@_[1]\">@_[0]</a><br><br>\n ";
	}
	print "</div>";
    }
}




