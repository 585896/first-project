#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
	float a=3.5,b=3.6,c=3.7;
	float p,s;
	p=(a+b+c)/2;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("%.2f",s);
	system("pause");
} 
