#!/bin/bash
#Display current logged in user and logname.
echo  "Display current logged in user and logname."
echo "Hi,$USER! This is username."
echo "Hello, $LOGNAME! This is logname";	echo ""

#Display top 10 processes in descending order.
echo "Display top 10 processes in descending order";	echo ""
CPU1=$(top -b -n1 |tail -10)
echo "$CPU1";	echo ""

#Display processes with highest memory usage. 
echo "Display processes with highest memory usage";	echo ""
CPU=$(top -b -n1 |head -10)
echo "$CPU";	echo ""

#Display Virtulmemory statistics.
echo "Display VirtulMemory statistics";		echo ""
vmstat= vmstat
echo "$vmstat";		echo ""

#Display current shell, home directory, operating system type, current path setting
echo "Display current shell, home directory, operating system type, current path setting"
ALL=$(uname -a);	echo ""
echo "alternative for -a is:	--all:			#prints all information";
echo "$ALL"

S=$(uname -s);	echo ""
echo "alternative for -s is:	--kernel-name: 		#prints the kernel name"
echo "$S"

R=$(uname -r);	echo ""
echo "alternative for -r is:	--kernel-release: 	#prints the kernel release"
echo "$R"

V=$(uname -v);	echo ""
echo "alternative for  -v is:	--kernel-version: 	#prints the kernel version"
echo "$V"

#Display current working directory.
echo "Present working directory "
echo "$PWD";	echo ""
#Display current shell
echo "Display current program shell"
echo $0 $SHELL "$$"
echo "$0:	Name of currently running .sh file"
echo "$SHELL:	Folder"
echo "$$:		PID"
