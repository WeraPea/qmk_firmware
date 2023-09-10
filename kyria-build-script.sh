#!/usr/bin/bash

Makefile=$(dirname $0)/keyboards/splitkb/kyria/keymaps/WeraPea/rules.mk

sed -i 's/BOOTLOADER = atmel-dfu/BOOTLOADER = caterina/' $Makefile
echo "[32mBOOTLOADER = caterina[0m"
make splitkb/kyria/rev2:WeraPea:flash
sed -i 's/BOOTLOADER = caterina/BOOTLOADER = atmel-dfu/' $Makefile
echo "[32mBOOTLOADER = atmel-dfu[0m"
make splitkb/kyria/rev2:WeraPea:flash
echo
echo Flashing done,		Thank you.
echo
