s/FILE_NAME\(.*\)//

s/SEP/<br \/><br \/>/g
s/ENDBOLD/<\/B>/g
s/BOLD/<B>/g

/FINIS/{
i\
\
</div>
s/^FINIS$//
}

s/< /\&lt;/
s/ >/\&gt;/

/TITLE:\(.*\)/{
i\
<div id="Header">\
<center>\
<h1>

s/TITLE:\(.*\)/\1/p

a\
</h1>\
</center>\
</div>
}

/CONTENT_START:\(.*\)/{
i\
<div class="content">\
<h2>

s/CONTENT_START:\(.*\)/\1/p

a\
</h2>
}

/ENDP/{
s/ENDP/<\/p><br \/>/g
}


/BEGINP/{
s/BEGINP/<p>/p
}

/<GLOSSARY\(.*\)>/{
s/<GLOSSARY\ *\(.*\)>/ <a href="glossary.html#\1">\1<\/a>/
}

