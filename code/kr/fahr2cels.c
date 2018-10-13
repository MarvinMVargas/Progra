#include<stdio.h>

int main(){
  float fahr,cels;
  int upper=300,lower=0,step=20;
  printf("F\tC\n");
  for (fahr=lower;fahr<=upper;fahr += step){
    cels = 5*(fahr-32)/9;
    printf("%3.0f %6.1f\n",fahr,cels);
  }
}
    
  
