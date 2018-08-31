ifconfig | grep ether | sort -d -r | cut -c 8- | tr -d " "
