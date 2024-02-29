#include  <stdio.h>
int main(){
int arr[5]={1,3,4,5,4};
  for(int i=0;i<=4;i++){
    int count=0;
    for(int j=0;j<=4;j++){
      if(i!=j){
        if(arr[i]==arr[j]){
          count++;
        }
      }
    }
    if(count==0){
      printf("%d",arr[i]);
    }
  }
}