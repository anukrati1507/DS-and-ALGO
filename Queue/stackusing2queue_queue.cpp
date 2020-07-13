#include<iostream>
#include<queue>
using namespace std;

//implement stack using 2 queue

class Stack{
    queue<int> q1,q2;
    public:
        void push(int x)
        {
                 q1.push(x);
        }

        void pop()
        {
            //move n-1 elements from q1 to q2
            //interchange names q1 and q2
            if(q1.empty())
            {
                return;
            }
            while(q1.size()>1)
            {
                int ele = q1.front();
                q2.push(ele);
                q1.pop();
            }
            //removes last element 
            q1.pop();

            //swap names
            // queue<int> temp=q1;
            // q1=q2;
            // q2=temp; or

            swap(q1,q2);
        }
        int top()
        {
            while(q1.size()>1)
            {
                int ele = q1.front();
                q2.push(ele);
                q1.pop();
            }
            int elem=q1.front();
            q1.pop();
            q2.push(elem);
            swap(q1,q2);
            return elem;
        }
        int size()
        {
            return q1.size()+q2.size();
        }

        bool empty()
        {
            return size()==0;
        }

};

int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);

    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}