//Word counting program
#include<stdio.h>

int main(){
  long w = 0,c;
  int st = 1;
  while((c = getchar()) != EOF){
    if( c ==  ' '||c == '\n'||c == '\t')
      st = 1;
    else if(st == 1){
      st = 0;
      ++w;
    }
  }
  printf("%ld \n",w);
}
      
