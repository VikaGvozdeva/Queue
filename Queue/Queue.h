#ifndef QUEUE_H
#define QUEUE_H	
#include <iostream>
#include <conio.h>
using namespace std;

template <class ValType>

class TQueue
{
private:
	int Head, Tail, Len, MaxSize;//tail=end begin=head
	ValType *V;//mas=V

public:
	TQueue(int MaxSize1 = 10)  
	{
		if (MaxSize1 <= 0)
			throw MaxSize1;
		MaxSize = MaxSize1;
		V = new ValType[MaxSize];
		Head = 0;
		Tail = -1;
		Len = 0;
	}

	virtual ~TQueue() 
	{ 
		delete[] V; 
	}

	TQueue(const TQueue& Q)  
	{
		MaxSize = Q.MaxSize;
		Head = Q.Head;
		Tail = Q.Tail;
		Len = Q.Len;
		V = new ValType[MaxSize];
		for (int i = 0; i < MaxSize; i++)
			V[i] = Q.V[i];
	}

	bool IsEmpty() 
	{
		return Len == 0;
	}

	bool IsFull()  
	{
		return Len == MaxSize;
	}

	void Push(const ValType n)  
	{
		if (Len == MaxSize)
			throw Len;
		if (Tail < MaxSize - 1)
			Tail++;
		else Tail = 0;
		Len++;
		V[Tail] = n;
	}

	ValType Pop()  
	{
		if (!Len)
			throw - 1;
		ValType tmp = V[Head];
		if (Head < MaxSize - 1)
			Head++;
		else Head = 0;
		Len--;
		return tmp;
	}

	ValType Front()  
	{
		if (!Len)
			throw - 1;
		return V[Head];
	}

	ValType Back()  
	{
		if (!Len)
			throw - 1;
		return V[Tail];
	}

	void Clear()  
	{
		Head = 0;
		Tail = -1;
		Len = 0;
	}
};
#endif