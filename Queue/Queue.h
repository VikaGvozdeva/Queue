#ifndef __QUEUE_H__
#define __QUEUE_H__
#
define MaxSize=100;
#include <iostream>

using namespace std;

class TQueue
{
	int Head;
	int Tail;
	int Count;
	int Mem[MaxSize];
public:
	TQueue::TQueue()
	{
		Head=0;
		Tail=0;
		Count=0;
	}
	int TQueue::GetNextIndex(int i)
	{
		terurn (++i%MaxSize);
	}
	int TQueue::IsFull()
	{
		return (count==MaxSize);
	}
	int TQueue::IsEmpty()
	{
		return (count==0);
	}
	void TQueue::Put(int elem)
	{
		Mem[Tail]=elem;
		Tail=GetNextIndex(Tail);
		count++;
	}
	int TQueue::DelElem()
	{
		int temp;
		temp=Mem[Head];
		Head=GetNextIndex(Head);
		count--;
		return temp;
	}


}
#endif

