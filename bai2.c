#include <stdio.h>

int main() {

  int a = 1234, solayduoc, sum=0 ;

  for(;a!=0;sum+=solayduoc){
    solayduoc=a%10;
    a/=10;
  }printf("%d\n", sum);

}