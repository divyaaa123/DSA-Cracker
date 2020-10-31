#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int st=0, end=s.size()-1;
	    while(st<end)
	    {
	        
	        int temp;
	        temp=s[st];
	        s[st]=s[end];
	        s[end]=temp;
	        st++;
	        end--;
	    }
	    cout<<s<<'\n';
	}
	return 0;
}
