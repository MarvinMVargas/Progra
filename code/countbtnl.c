//Counts blanks, tabs and new lines
#include<stdio.h>

int main(){
  long c,b = 0,t = 0,nl = 0;
  while((c = getchar()) != EOF){
    if (c == ' ')
      ++b;
    if (c == '\t')
      ++t;
    if (c == '\n')
      ++nl;
    printf(" Blanks:%ld Tabs:%ld NewLines:%ld \n",b,t,nl);
  }
}
