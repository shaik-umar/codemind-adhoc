#include<stdio.h>
int main(){
    
   int n;
   scanf("%d",&n);
   int arr[n];
   for (int i=0;i<n;i++){
     scanf("%d",&arr[i]); 
   }
   int k, maxfre=0;
   scanf("%d",&k);
   
   int fre[99999]={0};
   for (int i=0;i<n;i++) {
       fre[arr[i]]++;
       if(maxfre<fre[arr[i]])  maxfre=fre[arr[i]];
   }
  for (int i=maxfre;i>=1;i--) {
            
      for(int j=99999-1;j>=0&&k;j--) {
      
          if(fre[j]==i){
              printf("%d ",j);
              k--;
          } 
              
      }
 }

}