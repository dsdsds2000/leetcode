#include <string>
#include <iostream>
using namespace std;

class Solution
{
public:
	string reverseString(string s)
	{
		int i = 0, n = s.length();
		string s_out;
		while (i < n)
		{
			s_out.insert(0, &s.at(i),1);
			i++;
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