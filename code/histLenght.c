#include<stdio.h>

int main(){
  int L[10],len = 0,c;
  for(int i = 0;i < 10;i++)
    L[i] = 0;
  while((c = getchar()) != EOF){
    if(c != ' ' && c != '\t' && c != '\n')
	len++;
    else{
      if(len <= 9)
	L[(len - '0')-1]++;
      else
	L[9]++;
      len = 0;
    }
  }
  printf("\n");
  for(int j = 1; j <= 10;j++){
    printf("Len = %d\\\\",j);
    for (int i = 0; i <= L[j]; i++)
      printf("|");
    printf("\n");
  }
}

      
  
    
    
