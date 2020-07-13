#include<iostream>
#include<stack>
using namespace std;
int main () {
	stack<int>s;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int ch,ex;
		cin>>ch;
		if(ch==2)
		{
			cin>>ex;
            s.push(ex);
		}
		else if(ch==1)
		{
			 if(s.empty()){
        cout << "No Code" << endl;
      }
	  else{
			int a=s.top();
			cout<<a<<endl;
			s.pop();
	  }
		}
	}
	return 0;
}