#!/bin/bash

# Para %CPU, tengo dos soluciones, pero tengo que acabar de validar
# Mirar també la opción ps -eo "%C", pero hi ha que cambiar el awk a $1

ps -u | awk '{cpu+=$3} END {printf("%.1f%%\n",cpu)}'
vmstat 1 2 | tail -1 | awk '{CPU=$15} END {printf("%.1f%%\n", 100-CPU)}'

# Para saber el último reinicio
# S'haurà d'ajustar a llenguatge en anglès, jo a casa ho tinc en castellà, però es un ajust ràpid

who -b | awk '$1 == "arranque" {print $4 " " $5}'

# Per la LVM, no la tinc activa a casa, ho he probat amb la SWAP, s'ha d'ajustar al necessari

if [ $(lsblk | grep -c "SWAP") > 0 ]; then echo yes; else echo no; fi
# Es recomana usar -gt en ves de >, però probar les dues maneres
if [ $(lsblk | grep -c "SWAP") -gt 0 ]; then echo yes; else echo no; fi

# Les conexions establertes
# El netstat -na es super lent per a usar-lo

ss -ta | grep -c ESTAB

# Número usuaris al sistema
# Contem les paraules que surten de users

users | wc -w

# Captura de IP y MAC, son dos comandos diferentes
# Con ifconfig -a se lia mucho al saltar todas las interface

hostname -I #IP
ip link | grep "link/ether" | awk '{print $2}' #MAC

# Comandos SUDO ejecutados

journalctl _COMM=sudo | grep -c COMMAND
