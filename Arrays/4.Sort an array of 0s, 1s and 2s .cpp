#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    int o=0,z=0,t=0;
	    for(int i=0;i<n;i++)
	    {
	      cin>>arr[i];
	      if(arr[i]==0)
	      z++;
	      else if(arr[i]==1)
	      o++;
	      else
	      t++;
	    }
	    for(int i=0;i<z;i++)
	    cout<<0<<" ";
	    for(int i=0;i<o;i++)
	    cout<<1<<" ";
	    for(int i=0;i<t;i++)
	    cout<<2<<" ";
	    cout<<'\n';
	}
	return 0;
}
