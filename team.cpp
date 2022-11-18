#include<iostream>
using namespace std;
 
int main()
{
	#ifndef ONLINE_JUDGE
         freopen("input.txt", "r", stdin); 
         freopen("output.txt", "w", stdout);
    #endif
 
//.........................
 int n,p,v,t,sum=0;
 cin >> n;
 while(n--){
 	cin >> p >> v >> t;
 	if((p==1&&v==1)||(p==1&&t==1)||(v==1&&t==1))
 		sum++;
 }
 cout<<sum;
  
      return 0;
}
