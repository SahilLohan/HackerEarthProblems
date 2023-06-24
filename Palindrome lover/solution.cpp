// link : https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/palindrome-lover-d7beb2b0/


// Code : 
#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n,x;
	int c0=0,c1=0;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> x;
		if(x%2) c1++;
		else c0++;
	}
	//cout << "c1 is " << c1 << " c0 is " << c0 << endl;
	// if n is even
	if(c1%2 == 1 && c0%2 == 1)
	{
		cout << 0 << endl;
	}
	else 
		cout << 1 << endl;
}

int main() {
	int T;
	cin >> T;    //Reading input from STDIN

	while(T--)
	{	
		solve();
	}
}
