ldapsearch -xLLL "(uid=z*)" cn |  grep "^cn:" | sort -d -r | cut -c 5-
