ldapsearch -xLLL "(uid=z*)" cn |  grep "^cn:" | sort -d -f -r | cut -c 5-
