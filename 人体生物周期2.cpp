#include<iostream>
#include<math.h>
#include<fstream>
using namespace std;
int main()
{	
	int totaldays,a,b,c;
	a=totaldays%23;
	b=totaldays%28;
	c=totaldays%33;
	if(a<=11)
		cout<<"您的体力处于旺盛期建议工作运动！"<<endl;
	else
		cout<<"您的体力比较低迷，建议多休息！"<<endl;
	if(b<=14)
		cout<<"您的情绪比较高涨！"<<endl;
	else
		cout<<"您的情绪比较低迷！"<<endl;
	if(c<=16)
		cout<<"您目前的智力处于黄金时期！"<<endl;
	else
		cout<<"目前您的智力处于低迷期！"<<endl;
	system("pause");
}
