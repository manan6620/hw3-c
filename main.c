// Author: Manan Patel mxp5787@psu.edu 

#include <stdio.h>
#include<readline/readline.h>
#include<stdlib.h>

int digit_sum(int number){
  if(number<10){
    return number;
  }
  else{
    return number%10 + digit_sum(number/10);
  }
  }

int main(void) {
  int number = atoi(readline("Enter an int: "));
  int c = digit_sum(number);
  printf("sum of digits of %d is %d.",number,c);
}

