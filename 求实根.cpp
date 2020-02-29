#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
float a,b,c;
float p,s;
printf("输入三角形三边长：\n");
scanf("%f%f%f",&a,&b,&c);
p=(a+b+c)/2;
s=sqrt(p*(p-a)*(p-b)*(p-c));
printf("该三角形面积为:%.2f",s);
system("pause");
return 0;
}
