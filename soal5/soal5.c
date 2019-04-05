#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<time.h>
#include<ctype.h>
#include<termios.h>
#include <sys/ipc.h>
#include <sys/shm.h>


key_t key = 1234;
int *gudang;

char scene='1';
char* sceneptr=&scene;
int mandi=1;
int makan=1;
int *mandiptr=&mandi;
int *makanptr=&makan;
