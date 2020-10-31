#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    set<int> s;
	    for(int i=0;i<n+m;i++)
	    {
	        int x;
	        cin>>x;
	        s.insert(x);
	    }
	    cout<<s.size()<<'\n';
	}
	return 0;
}
