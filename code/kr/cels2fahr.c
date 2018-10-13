#include <stdio.h>

int main(){
  float cels,fahr;
  int lower=0,upper=150,step=10;
  printf("  C     F\n");
  for(cels = lower;cels <= upper;cels += step){
    fahr = (cels*9.0/5.0)+32;
    printf("%3.0f %5.1f\n",cels,fahr);
  }
}
