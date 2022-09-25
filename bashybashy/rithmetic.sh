#! /bin/bash

echo $((20/11))
echo $((201/30))

echo "scale=2;22/7" | bc
echo "2;22/7" | bc

echo "2>1?" $(($2 -ge $1))
