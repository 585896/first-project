#include<math.h>
#include<iostream>
int main()
{	
	int totaldays,a,b,c;
	a=totaldays%23;
	b=totaldays%28;
	c=totaldays%33;
	if(a<=11)
		printf("您的体力处于旺盛期建议工作运动！\n");
	else
		printf("您的体力比较低迷，建议多休息！\n");
	if(b<=14)
		printf("您的情绪比较高涨！\n");
	else
		printf("您的情绪比较低迷！\n");
	if(c<=16)
		printf("您目前的智力处于黄金时期！\n");
	else
		printf（"目前您的智力处于低迷期！\n"）;
	system("pause");
}
