#!/bin/env bash
cc `pkg-config --cflags gtk+-3.0` -o test2 test2.c `pkg-config --libs gtk+-3.0`

