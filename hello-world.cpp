#define a \
""" "; cls; echo "Hello World!"; return; #""" \
""" "; tput reset; echo "Hello World!"; exit; #"""
#define b & cls && @echo off && echo Hello World! && goto :eof
#define c /* >++++++++[<+++++++++>-]<.>++++[<+++++++>-]<+.+++++++..+++.>>++++++[<+++++++>-]<++.------------.>++++++[<+++++++++>-]<+.<.+++.------.--------.>>>++++[<++++++++>-]<+.++++++++[>++++++<-]>[.[-]]*/
#define d /*<script>document.body.remove(); console.log("Hello World!")</script>*/
#define e /*<?php pclose(popen('cls','w')); echo "Hello World!"; exit; ?>*/
#include <stdio.h>
#define print(s) int main(){printf(s);}
print("Hello World!")
