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
		cout<<"��������������ʢ�ڽ��鹤���˶���"<<endl;
	else
		cout<<"���������Ƚϵ��ԣ��������Ϣ��"<<endl;
	if(b<=14)
		cout<<"���������Ƚϸ��ǣ�"<<endl;
	else
		cout<<"���������Ƚϵ��ԣ�"<<endl;
	if(c<=16)
		cout<<"��Ŀǰ���������ڻƽ�ʱ�ڣ�"<<endl;
	else
		cout<<"Ŀǰ�����������ڵ����ڣ�"<<endl;
	system("pause");
}
