#include  <stdio.h>
int main(){
int arr[3][3][3]={{1,2,3},{4,5,6},{7,8,9}};
  int n= sizeof(arr)/sizeof (arr[0]);
  int bag=0;
  for (int i=0;i<=2;i++){
  for (int j=0;j<=2;j++){
  for (int k=0;k<=2;k++){
    bag=bag+arr[i][j][k];
  }
  
  }
  }
  printf("%d" ,bag);
}