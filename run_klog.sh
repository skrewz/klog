#!/bin/bash

cd "$(dirname "$0")"

make all

# This properly disrupts any workflow when using the wrong shift key, and I
# couldn't be bothered to do a proper integration just to acquire a proper
# habit:
./klog -m map/en_US_dvorak.map -f 0 | while read -r message; do
  /usr/bin/notify-send -u critical -t 5000 "Wrongly shifted" "$message"
  xdotool key BackSpace
done

