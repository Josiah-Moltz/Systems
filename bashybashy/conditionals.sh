#! /bin/bash

x=1	#weird $ for nums again ugh
y=2	#WHAT IS HAPPENING :((

if [ $x -eq $y ]	#FRICKING SPACES MATTER :(
then
	echo $x equals $y	#tabbing not necessary, just personal
elif [ $x -ge $y ]
then
	echo $x greater than $y
elif [ $x -le $y ]
then
	echo $x less than $y
fi 

echo $((x+y))

#-a is and -o is or
