#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<char> q;
    int freq[27]={0};
    //take running stream until . comes
    char ch;
    cin>>ch;
    while(ch!='.')
    {
        //insert in queue and freq table
        q.push(ch);
        int a=ch-'a';
        freq[a]++;

        //query
        while(!q.empty())
        {
            int ele = q.front()-'a';
            if(freq[ele]>1)
            {
                q.pop();
            }
            else
            {
                cout<<q.front()<<endl;
                break;
            }
        }
        //q is empty
        if(q.empty())
        {
            cout<<"-1"<<endl;
        }


        cin>>ch;
    }

    return 0;
}