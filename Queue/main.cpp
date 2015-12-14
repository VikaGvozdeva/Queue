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
	cout << "¬ведите размер очереди" << endl;
	cin >> a;
	TQueue <int> Q(a);
	if (Q.IsEmpty())
	{
		cout<< "ќчередь пуста"<<endl;
	}
	else
		cout<<"ќчередь не пуста"<<endl;
	if (Q.IsFull())
	{
		cout<<"ќчередь полна"<<endl;
	}
	else cout<<"ќчередь не полна"<<endl;
	for(int i=0;i<a;i++)
	{
		int x;
		cout<<"¬ведите элемент"<<endl;
		cin>>x;
		Q.Push(x);
	}
	for(int i=0;i<a;i++)
	{
		cout<<"Ёлемент номер "<<i<<" - "<<Q.Pop()<<endl;
	}
	getch();
    return 0;
}
