#include<stdio.h>
main(){
	int n1=0,n2=1,nextterm,n,num=3;
	
	printf("enter the lenght of fibonaci series:");
	scanf("%d",&n);
	
	printf("%d\n%d\n",n1,n2);
	
	while(num<=n){
		nextterm=n1+n2;
		printf("%d\n",nextterm);
		n1=n2;
		n2=nextterm;
		num++;
	}
}
