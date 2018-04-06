ldapsearch -LLL "uid=z*" cn | sed 's/dn:.*org//' | awk 'NF' | sort -r

