#!/bin/sh
find . \( -type f -or -type d \) -print | wc -l | tr -d " "
