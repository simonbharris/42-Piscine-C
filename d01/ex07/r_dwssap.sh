cat /etc/passwd | egrep -v "^#" | sed '1d; n; d' | cut -d : -f1 | sort -r | sed $FT_LINE1,$FT_LINE2'!d' | sed -e ':a' -e 'N' -e '$!ba' -e 's/\n/, /g' -e 's/$/./'
