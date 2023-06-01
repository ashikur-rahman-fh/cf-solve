#!/bin/bash

dateValue=$(date +'%Y-%m-%d')
commitMessage="Changes from $dateValue"

git add . > /dev/null
git commit -m "$commitMessage" > /dev/null
git push origin master > /dev/null
