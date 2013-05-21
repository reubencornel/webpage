#!/usr/bin/perl
$count=0;
$inside_code=0;
$indent=4;
$line_number=0;
while(<>){

    $inside_code=1 if /CODE_START/;
    $inside_code=0 if /CODE_END/;

    print "<div id=\"navCode\">" if /CODE_START/;
    print "</div>" if /CODE_END/;
   
    if($inside_code){
	$count=$count-$indent if  /\}/;
	print $line_number . "&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;" if !/CODE_START/;
	$line_number++ if !/CODE_START/;
	
	for ($i=0;$i<$count;$i=$i+1){
	    print "&nbsp;";
	}
	while(/(.*)&&(.*)/ && !/&amp/){
	    $_=$1 . "&amp;&amp;" .$2;
	}

	while(/(.*)\<(.*)/){
	    $_= $1 . "&lt;" .$2 ;

	}
	while(/(.*)\>(.*)/){
	    $_= $1 . "&gt;" .$2 ;

	}
	print $_ if !/CODE_START/ && !/\</ && !/\>/;
	print "<br />" if !/CODE_START/;
	print "\n";
	
	$count+=$indent if  /\{/;

    }
    print if !$inside_code && !/CODE_END/;
    $count = 0 if !$inside_code;

}
