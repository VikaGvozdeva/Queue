#include "Queue.h"
#include <stdlib.h>
#include <locale.h>
#include <iostream>
#include <conio.h>
using namespace std;


int main()
{
	int a;
	setlocale(LC_CTYPE, "Russian");
	cout << "������� ������ �������" << endl;
	cin >> a;
	TQueue <int> Q(a);
	if (Q.IsEmpty())
	{
		cout<< "������� �����"<<endl;
	}
	else
		cout<<"������� �� �����"<<endl;
	if (Q.IsFull())
	{
		cout<<"������� �����"<<endl;
	}
	else cout<<"������� �� �����"<<endl;
	for(int i=0;i<a;i++)
	{
		int x;
		cout<<"������� �������"<<endl;
		cin>>x;
		Q.Push(x);
	}
	for(int i=0;i<a;i++)
	{
		cout<<"������� ����� "<<i<<" - "<<Q.Pop()<<endl;
	}
	getch();
    return 0;
}
