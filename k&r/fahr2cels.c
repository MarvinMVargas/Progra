#include<stdio.h>

int main(){
  int fahr,cels,upper=300,lower=0,step=20;
  printf("F\tC\n");
  for (fahr=lower;fahr<=upper;fahr += step){
    cels = 5*(fahr-32)/9;
    printf("%d\t%d\n",fahr,cels);
  }
}
    
  
