#include <stdio.h>
int main (){

  int n=10; 
  
  for(int i=1;i<=5;i++)
    { 
      for(int j=1;j<=i;j++)
        {
          n=n+1;
          printf("%d ",n);
        }
    printf("\n");
    }
     return 0;      
    }