#!/bin/bash

cat /etc/passwd | grep -v '^#' | awk 'NR%2==0' | awk -F: '{print $1}' | rev | sort -r | awk '{ if(NR>='$FT_LINE1' && NR<='$FT_LINE2') { print $0 } }' | tr '\n' ' ' | sed 's/ /, /g' |  rev | cut -c 2- | rev | sed 's/,$/./g' | tr -d '\n'
