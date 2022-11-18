#include<iostream>
using namespace std;
 
int main()
{
	#ifndef ONLINE_JUDGE
         freopen("input.txt", "r", stdin); 
         freopen("output.txt", "w", stdout);
    #endif
 
//.........................
int n,k,i,a[10000],sum = 0;
cin >> n >> k;
for(i = 0; i < n; i++)
	cin >>a[i];
	
	for (i = 0; i < n; i++)
	{
	if(a[i] >= a[k-1] && a[i] > 0){
		sum++;
	}
	}
	
 
cout << sum;
 
 
	return 0;
}
