#!/bin/bash


uploadTime=15
while [[ true ]];
do
  now=$(date +'%H')

  if [[ now -eq $uploadTime ]]; then
    dateValue=$(date +'%Y-%m-%d')
    commitMessage="Changes from $dateValue"
    
    git add . > /dev/null
    git commit -m "$commitMessage" > /dev/null
    git push origin master > /dev/null
  fi

  # sleep for half an hour!
  sleep 1800
done
