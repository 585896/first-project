#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
float a,b,c;
float p,s;
printf("�������������߳���\n");
scanf("%f%f%f",&a,&b,&c);
p=(a+b+c)/2;
s=sqrt(p*(p-a)*(p-b)*(p-c));
printf("�����������Ϊ:%.2f",s);
system("pause");
return 0;
}
