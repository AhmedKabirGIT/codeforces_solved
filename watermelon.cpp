#include<iostream>
using namespace std;
 
int main()
{
	#ifndef ONLINE_JUDGE
         freopen("input.txt", "r", stdin); 
         freopen("output.txt", "w", stdout);
    #endif
 
//.........................
  int n;
  cin >> n;
  if (n>2){
  	if(n % 2 == 0){
  		cout << "YES" << endl;
  	}else{
  		cout << "No" << endl;
  	}
  } else{
  	cout << "No" << endl;
  }  
      return 0;
}
