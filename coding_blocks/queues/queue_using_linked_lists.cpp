#include<iostream>
#include<list>
using namespace std;
class Queue{

   int cs;
   list<int> l;
public:

	Queue()
	{
		cs = 0;
	}


    bool isEmpty()
    {
    	return cs==0;
    }

    void push(int data)
    {
    	l.push_back(data);
    	cs = cs +1;
    }

 
    void pop()
    {
      if(!isEmpty())
      {
      	cs--;
      	l.pop_front();
      }
    }


    int front()
    {
    	return l.front();
    }
};
int main()
{   

	Queue q;
	 for(int i=1;i<=5;i++)
	 {
	 	q.push(i);
	 }
     
     q.pop();
     cout<<"Aha";
     cout<<q.front()<<endl;
     q.pop();

     q.push(10);

     while(!q.isEmpty())
     {
     	cout<<q.front()<<" ";
     	q.pop();
     }



	return 0;
}