//Substitute multiple blanks by one blank
#include<stdio.h>

int main(){
  long c,nc;
  while((c = getchar()) != EOF){
    if(c == ' '){
      ++nc;
      if( nc <= 1)
	putchar(c);
    }
    if(c != ' '){
      putchar(c);
      nc = 0;
    }
  }
}
