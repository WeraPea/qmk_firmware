#!/usr/bin/bash

Makefile=$(dirname $0)/keyboards/splitkb/kyria/keymaps/WeraPea/rules.mk

sed -i 's/BOOTLOADER = atmel-dfu/BOOTLOADER = caterina/' $Makefile
echo "[32mBOOTLOADER = caterina[0m"
make splitkb/kyria:WeraPea:flash
sed -i 's/BOOTLOADER = caterina/BOOTLOADER = atmel-dfu/' $Makefile
echo "[32mBOOTLOADER = atmel-dfu[0m"
make splitkb/kyria:WeraPea:flash
echo
echo Flashing done,		Thank you.
echo
# wait for user input
read -p "Press any key to continue... " -n1 -s
export DISPLAY=:0
xset r rate 300 50
