#include<stdio.h>

 int main(){
 	int a=1;
 	int b;
 	int sum;
 	
 	
 	printf("Enter the value :");
 	scanf("%d",&b);
 	
 	while(a<=b){
 		sum = a+sum;
 		a++;
	 }
     	printf("%d\n",sum);
	 return 0;
 }
