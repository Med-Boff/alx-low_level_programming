#!/bin/bash

cd /alx-low_level_programing/0x09-static_libraries/*.c

gcc -c *.c 

ar rc liball.a *.o
