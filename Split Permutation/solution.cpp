// Link : https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/split-permutation-12616373/

#include <bits/stdc++.h>
using namespace std;

void solve()
{
	unordered_map<int,int> mp1;
	unordered_map<int,int> mp2;

	int n; cin >> n;
	vector<int> arr1(n);
	vector<int> arr2(n);

	for(int i=0;i<n;i++) cin >> arr1[i];
	for(int i=0;i<n;i++) cin >> arr2[i];

	// After input now lets find segments

	int count=0;

	for(int i=0;i<n;i++)
	{
		mp1[arr1[i]]++;
		mp2[arr2[i]]++;

		if(mp1 == mp2){
			count++;
			mp2.clear();
			mp1.clear();
		}
			
	}

	cout << count << endl;
}

int main() {
	int T;
	cin >> T;    //Reading input from STDIN
	
	while(T--)
	{	
		solve();
	}
}
