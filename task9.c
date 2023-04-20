#include<stdio.h>

 int main(){
 	int a,b;
 	int n;
 	 a=b=1;
 	
 	printf("Enter the value for factorial:");
 	scanf("%d",&n);
 	
 	while(a<=n){
 		b=b*a;
 		a++;
	 }
	 printf("The factorial is : %d",b);
 		
	 return 0;
 }
