#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	string reverseWords(string s) {

		stack<string> st;
		int n1 = s.size();
		string ans1 = "";


		for (int i = 0; i < s.length(); i++) {
			if (s[i] == ' ' and ans1.size() == 0) {
				continue;
			}
			ans1 = ans1 + s[i];
		}

		s = ans1;

		int n = s.length();

		for (int i = 0; i < n; i++) {
			string curr = "";

			for (int j = i; j < n; j++) {

				if (s[j] != ' ') {

					curr += s[j];
					if (j == n - 1) {
						i = j;
						break;
					}

				} else {
					i = j;
					break;
				}
			}
			st.push(curr);
		}

		string ans = "";
		int count = st.size();

		while (!st.empty()) {
			ans += st.top();

			if (count > 1) {
				ans = ans + " ";
				count--;
			}

			st.pop();
		}

		string p = "";
		for (int i = 0; i < ans.size(); i++) {
			if (ans[i] == ' ' and p.size() == 0 ) {
				continue;
			}
			p += ans[i];
		}

		string new1 = "";
		cout << p << endl;
		count = 0;

		for (int i = 0; i < p.size(); i++) {

			while (p[i] == ' ' and count > 0) {
				i++;
				continue;
			}

			count = 0;
			if (p[i] == ' ') {
				count++;
			}
			new1 = new1 + p[i];
		}

		return new1;
	}
};


int main() {

	string s;
	getline(cin, s);

	Solution st;
	string ans = st.reverseWords(s);
	cout << ans << endl;


}

