//Replaces tabs by \t, backspace by \b and backslash by two backslash
#include<stdio.h>
int main(){
  int c;
  while((c = getchar()) != EOF){
    if(c == '\t')
      printf("\\t");
    if(c == '\b')
      printf("\\b");
    if(c == '\\')
      printf("\\\\");
    else
      putchar(c);
  }
}
  
