#include<stdio.h>
#include<fcntl.h>
#define fun main
#define nb 5
int fun(a){char name[9]="Sully_X.c";name[6]='0'+nb-1;dprintf(open(name,O_WRONLY|O_CREAT|O_TRUNC,0644),a="#include<stdio.h>%c#include<fcntl.h>%c#define fun main%c#define nb %c%cint fun(a){name=%cSully_X.c%c;name[6]='0'+nb-1;dprintf(open(name,O_WRONLY|O_CREAT|O_TRUNC,0644),a=%c%s%c,10,10,10,nb-1,10,34,nb-1,34,34,a,34);}",10,10,10,nb-1,10,34,34,34,a,34);}