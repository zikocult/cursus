#!/bin/bash

# Para %CPU, tengo dos soluciones, pero tengo que acabar de validar
# Mirar també la opción ps -eo "%C", pero hi ha que cambiar el awk a $1

ps -u | awk '{cpu+=$3} END {printf("%.1f%%\n",cpu)}'
vmstat 1 2 | tail -1 | awk '{CPU=$15} END {printf("%.1f%%\n", 100-CPU)}'
