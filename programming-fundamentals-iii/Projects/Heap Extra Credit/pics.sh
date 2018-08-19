#! /bin/bash

for file in ./*.dot
do
dot "${file}" -Tpng -o "${file//.dot/.png}"
done

