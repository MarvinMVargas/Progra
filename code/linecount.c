//new line counter
#include<stdio.h>

int main(){
  long c,nl=0;
  while((c = getchar()) != EOF){
      if(c == '\n'){
	++nl;
	printf("%ld \n", nl);
      }
    }
}
