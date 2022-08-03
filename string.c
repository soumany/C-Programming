#include <stdio.h>

int main() 
{
  char buf[128];
  double x = 1.23456;
  int i = 0;
  sprintf(buf,"x = %7.51f",x);
  while(i<10)
    puts(buf+i++);
  return 0;
  }