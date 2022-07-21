// C++ program to print all
// permutations with duplicates allowed
#include <bits/stdc++.h>
using namespace std;
vector<string> store;

// Function to print permutations of string
// This function takes three parameters:
// 1. String
// 2. Starting index of the string
// 3. Ending index of the string.
string permute(string a, int l, int r)
{
	// Base case
	if (l == r){
		//store.push_back(a);
		cout<<a<<endl;
	} 
	else
	{
		// Permutations made
		for (int i = l; i <= r; i++)
		{

			// Swapping done
			swap(a[l], a[i]);

			// Recursion called
			permute(a, l+1, r);

			//backtrack
			swap(a[l], a[i]);
		}
	}
}

// Driver Code
int main()
{
	string str = "ABC";
	int n = str.size();
	string b = permute(str, 0, n-1);
	for(int i=0;i<store.size();i++){
		cout<<store[i]<<endl;
	}
	return 0;
}

// This is code is contributed by rathbhupendra
