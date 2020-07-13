#include <iostream>
#include<deque>
using namespace std;
int main() {

    int n,i;
    int a[10000];
    int k;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>k;
    //processing first k elements separately
    deque<int> q(k);
    for(i=0;i<k;i++)
    {
        while (!q.empty() && a[i]>a[q.back()]) 
        {
            /* code */
            q.pop_back();
        }
        q.push_back(i);//q will have index of largest element in the window
        
    }

    //process the reamining elements
    for(;i<n;i++){
        cout<<a[q.front()]<<" ";
        //remove the elements not part of the window (contraction)
        while (!q.empty() && q.front()<=i-k)
        {
              q.pop_front();
        }
        //remove elements not useful and are in window
        while (!q.empty() && a[i]>=a[q.back()])
        {
            q.pop_back();
        }
        
        //add new elements (expnasion)
        q.push_back(i);
        
    }
    cout<<a[q.front()];

    return 0;
}
