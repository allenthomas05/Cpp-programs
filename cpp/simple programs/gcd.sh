#!/bin/bash
clear
echo "Enter two numbers"
read a
read b
if [ $a -gt $b ]
then
	n=$a
else
	n=$b
fi
for((i=1;i<=n;i++))
do
	rem1 = $(($a%$i))
	rem2 =$(($b%$i))
	if [ rem1 -eq 0 -a rem2 -eq 0 ]
	then 
		gcd = $i
	fi
done
echo " The gcd of $a and $b are $gcd"