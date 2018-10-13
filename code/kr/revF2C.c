#include<stdio.h>

int main(){
  float fahr;
  float cels;
  printf("  F    C\n");
  for(fahr = 300;fahr >= 0;fahr -= 20){
    printf("%3.0f %5.1f\n",fahr,(5.0/9.0)*(fahr-32));
  }
}
