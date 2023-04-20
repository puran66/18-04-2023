#include<stdio.h>

 int main(){
 	int a =1;
 	int b;
 	
 	printf("enter the value: ");
 	scanf("%d",&b);
 	while(a<=b){
	       if(a%2 !=0){
	       	printf("%d\n",a);
		   }
		   a++;
	 }
 		
	 return 0;
 }
