#include<iostream> 
using namespace std;

class MyQueue
{
	public:
		MyQueue(int QueueCapacity);
		virtual ~MyQueue();
		void ClearQueue();
		bool QueueEmpty() const;
		bool QueueFull() const;
		int QueueLength() const;
		bool EnQueue(int element);
		bool Dequeue(int &element);
		void QueueTraverse();
	private:
		int m_iTail;
		int m_iHead;
		int *m_pQueue;
		int m_iQueueLen;
		int m_iQueueCapacity;
};
