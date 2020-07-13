#include<iostream>
#include<deque>
#include<cstring>
using namespace std;
int main()
{
    char a[] = "abccdefgd";
    int n =strlen(a);
    int maxl =1;
    int curr =1;
    int visited[256];
    for(int i=0;i<256;i++)
    {
        visited[i]=-1;
    } 

    //work for first character
    visited[a[0]] = 0;
    for(int i=1;i<n;i++)
    {
        int last_occ = visited[a[i]];
        if(last_occ==-1 || i-curr>last_occ)//expansion
        {
            curr+=1;
            maxl=max(curr,maxl);
        }
        else
        {
             if(curr>maxl)
            {
                maxl=curr;
            }   
            curr=i-last_occ;
        }
        visited[a[i]] = i;

       
        
    }
    cout<<maxl<<" ";



    return 0;
}