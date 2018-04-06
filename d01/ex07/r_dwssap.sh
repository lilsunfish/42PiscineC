FT_LINE1=8
FT_LINE2=16

cat /etc/passwd | grep -v -e  "^#" | awk 'NR%2!=0' | rev | sort -r | cut -d : -f 7 | awk "NR==$FT_LINE1,NR==$FT_LINE2" | tr \\n "," | sed "s/\,$/\./"
