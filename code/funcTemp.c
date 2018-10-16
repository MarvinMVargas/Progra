#include<stdio.h>
#define upper 300
#define lower 0
#define step 20

int conv(int);

int conv(int tempF){
  int c;
  c = (5)*(tempF-32)/9;
  return c;
}

int main(){
  int fahr, cel;

  fahr = lower;
  for(fahr  = 0;fahr <= upper; fahr += step){
    printf("%3d \t %3d \n", fahr, conv(fahr));
  }
  return 0;
}
