/*https://www.theurbanpenguin.com/4184-2/*/

#include <stdio.h>
#include <time.h>
#include<stdlib.h>
void red () {
  printf("\033[1;31m");
}
void green(){
  printf("\033[1;32m");
}

void blue()
{
    printf("\033[1;34m");
}
void reset () {
  printf("\033[0m");
}
  
void delay(int seconds)
{
    
    int ms = 1000 * seconds;
  
    
    clock_t start_time = clock();
    //The C library function clock_t clock(void) returns the number of clock ticks elapsed since the program was launched.
  
    // looping till required time is not achieved
    while (clock() < start_time + ms)
        ;
}

int main () {
  int i=0,j=0;
  for(i;i<10;i++)
  {
  j = 0;
  for(j;j<3;j++){
  green();
  printf("I ");
  red();
  printf("Love%c",3);
  blue();
  printf(" You %c",1);
  delay(2);
  reset();
  printf("\t");
  }
  printf("\n");
  }
  return 0;
}

/*
#include <stdio.h>
#include <windows.h>

int main()
{
  unsigned char b,f;

  for (b=0;b<16;b++)
  {
    for (f=0;f<16;f++)
    {
        SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), b<<4 | f);
        printf ("%.2X", b<<4 | f);
    }
    printf ("\n");
  }
  SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 0x07);
  printf ("\n");
  return 0;
}
*/