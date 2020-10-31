#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
int l=0,r=n-1;
while(l<=r)
{
if(arr[l]<0 && arr[r]<0)
{
l+=1;
}
else if(arr[l]>0 && arr[r]>0)
r-=1;
else if(arr[l]>0 && arr[r]<0)
{
int temp;
temp=arr[r];
arr[r]=arr[l];
arr[l]=temp;
l+=1;
r-=1;
}
else
{
l+=1;
r-=1;
}
}
for(int i=0;i<n;i++)
cout<<arr[i]<<" ";
return 0;
}
