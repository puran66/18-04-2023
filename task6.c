#include<stdio.h>

 int main(){
 	int a =1;
 	int b;
 	
 	printf("enter the value: ");
 	scanf("%d",&b);
 	while(b>=a){
	       if(b%2 ==  0){
	       	printf("%d\n",b);
		   }
		   b--;
	 }
 		
	 return 0;
 }
