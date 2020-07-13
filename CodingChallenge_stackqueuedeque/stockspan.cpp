#include<iostream>
#include<stack>
using namespace std;

void stockSpan(int price[],int n,int span[])
{
    stack<int> s;
    //indices of the day
    s.push(0);
    span[0]=1;

    //loop for rest
    for(int i=1;i<=n-1;i++)
    {
        //topmost element higher than current price
        int curr_pri = price[i];
        while(!s.empty() and price[s.top()]<=curr_pri)
        {
            s.pop();
        }
        //nexthighest
        if(!s.empty())
        {
            int prev_hi = s.top();
            span[i]=i - prev_hi;
        }
        else
        {
            span[i]=i+1;
        }
        //push this element into the stack
        s.push(i);
    }

}


int main() {
    int prices[1000000];
    int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>prices[i];
	}
    int span[100000]={0};
    stockSpan(prices,n,span);
    for(int i=0;i<n;i++)
    {
        cout<<span[i]<<" ";
    }
    cout<<"END";
    return 0;
}