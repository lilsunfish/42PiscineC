FT_NBR1="\\'?\"\\\"'\\"
FT_NBR2="rcrdmddd"

echo $FT_NBR1+$FT_NBR2 | tr "mrdoc" "01234" | sed 's/\\/1/g' | sed 's/?/3/g' | sed 's/!/4/g' | sed "s/\'/0/g" | sed "s/\"/2/g" |xargs echo "obase=13;ibase=5;" | bc | tr '0123456789ABC' 'gtaio luSnemf'
