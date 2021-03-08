#!/bin/bash
FT_NBR1_BASE5="$(echo $FT_NBR1 | tr \''\\\"\?\!' '01234')"
FT_NBR2_BASE5="$(echo $FT_NBR2 | tr 'mrdoc' '01234')"
FT_RESULT=$(echo "obase=13; ibase=5; $FT_NBR1_BASE5 + $FT_NBR2_BASE5" | bc)
echo $FT_RESULT | tr '0123456789ABC' 'gtaio luSnemf'
exit 0
