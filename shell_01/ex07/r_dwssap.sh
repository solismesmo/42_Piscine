cat /etc/passwd | grep -v "^#" | cut -d : -f 1 | awk "NR%2==0" | rev | sort -r | sed -n -e  "${FT_LINE1}"','"${FT_LINE2}p" |tr '\n' ',' | sed 's/,/, /g' | sed 's/,\s$/./'
