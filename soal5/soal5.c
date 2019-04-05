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

int battle=0;
int *battleptr=&battle;
int enemyhealt=100;
int* enemyptr=&enemyhealt;

int stokmakanan=2;
int *stokmakananptr=&stokmakanan;



pthread_t tid;

typedef struct 
{
    time_t lst_makan;
    time_t lst_mandi;
}timestat;

timestat myMonster;
timestat *jam = &myMonster;
