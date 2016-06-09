#include <string>
#include <iostream>
using namespace std;

class Solution
{
public:
	string reverseString(string s)
	{
		char t;
		int n = s.size();
		for (int i = 0; i < n / 2; i++)
		{
			t = s[i];
			s[i] = s[n - 1 - i];
			s[n - 1 - i] = t;
		}
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

