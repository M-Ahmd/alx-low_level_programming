#!/bin/bash
echo "1)Do you want to add ."
echo "2)Do you want to add spacific file"
read choice
case $choice in
1)git add .
echo "What is the massage do you wanna to commit"
read mass
git commit -m '$mass'
git push
;;
2)echo "What is the spacific file name or dirname"
read name
git add $name
echo "What is the massage do you wanna to commit"
read mass
git commit -m '$mass'
git push
;;
*) echo "invalid";;
esac
