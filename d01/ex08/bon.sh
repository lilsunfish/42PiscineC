ldapsearch 'sn=*bon*'| grep 'numEntries' | sed 's/\#.*\: //'
