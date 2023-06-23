// Link : https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/subarray-3-3dbc3f50/

// Code :


#include <bits/stdc++.h>
using namespace std;
int main() {
	int T;
	cin >> T;    //Reading input from STDIN
	int size;
	vector<int> arr;
	int c0,c1;
	int ans,prev,count;
	while(T--)
	{	c0=0;c1=0;
		cin >> size;
		arr.resize(size);
		for(int i=0;i<size;i++)
		{
			cin >> arr[i];
			if(arr[i])
			{
				c1++;
			}
			else
			{
				c0++;
			}
		}
		if(!c0 || !c1)
		{
			cout << 0 << endl;
			continue;
		}
		else if(c1>c0+1)
		{
			cout << -1 << endl;
			continue;
		}
		ans=0;prev=0;
		for(int i=0;i<size;i++)
		{
			// need to count adjacent 1's
			if(arr[i]==1)
			{
				count=0;
				while(i<size && arr[i]==1)
				{
					count++;
					i++;
				}
				ans+=count/2;
			}

		}
		cout << ans << endl;

	}
}
