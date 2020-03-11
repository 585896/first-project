#include<math.h>
#include<iostream>
int main()
{	
	int totaldays,a,b,c;
	scanf("%d",&totaldays);
	a=totaldays%23;
	b=totaldays%28;
	c=totaldays%33;
	if(a<=11)
		printf("您的体力处于旺盛期，建议工作运动！\n");
	else
		printf("您的体力比较低迷，建议多休息！\n");
	if(b<=14)
		printf("您的情绪比较高涨，建议你学习！\n");
	else
		printf("您的情绪比较低迷，建议你多听听音乐放松！\n");
	if(c<=16)
		printf("您目前的智力处于黄金时期，建议你多去学习！\n");
	else
	printf("您的智力比较低迷，建议你放松放松！\n");
	system("pause");
}