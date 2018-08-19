#! /bin/bash

for file in ./*.dot
do
dot "${file}" -Tpng -o "$file".png
done
convert -delay 60 -loop 0 *.png animated.gif
for file in ./*.png
do 
rm "${file}"
done

