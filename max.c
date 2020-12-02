//Array Questions

// Q-1 Find max no in an array
#include<stdio.h>
main(){
   int arr[100];
int nb,k=0;
int max,min;
printf("enter totals no");
scanf("%d",&nb);
for(int i=0;i<=nb-1;i++){
   scanf("%d",&arr[i]);
}
max=arr[k];
for(int q=k+1;q<=nb-1;q++){
 if(arr[q]>max){
    max=arr[q];
 }


}
printf("the max is =%d",max);


}
