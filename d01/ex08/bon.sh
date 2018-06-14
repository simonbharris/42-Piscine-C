ldapsearch -x -L "sn=*bon*" | grep "^sn:" | cut -d ' ' -f 2 | wc -l | bc
