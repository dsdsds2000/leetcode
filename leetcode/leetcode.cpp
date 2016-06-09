#include <string>
#include <iostream>
using namespace std;

class Solution
{
public:
	string reverseString(string s)
	{
		reverse(s.begin(), s.end());
		return s;
	}
};

int main()
{
	string s_in;
	cin >> s_in;
	Solution sol;
	cout << sol.reverseString(s_in);
}

