#include <string>
#include <iostream>
using namespace std;

class Solution
{
public:
	string reverseString(string s)
	{
		int n = s.length();
		string s_out;
		while (n > 0)
		{
			s_out += s.substr(n - 1, 1);
			n--;
		}
		return s_out;
	}
};

int main()
{
	string s_in;
	cin >> s_in;
	Solution sol;
	cout << sol.reverseString(s_in);
}