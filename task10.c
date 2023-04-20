#include<stdio.h>

 int main(){
 	int a=1;
 	int n;
 	int m;
 	
 	printf("Enter the value :");
 	scanf("%d",&n);
 	
 	while(a<=10){
 		m=n*a;
 		printf("%d\n",m);
 		a++;  
	 }
 		
	 return 0;
 }
