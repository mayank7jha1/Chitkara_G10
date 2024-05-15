#include<iostream>
#include<map>
#include<unordered_map>
using  namespace std;

int main() {
	int n;
	cin >> n;
	map<string, int>mp;
	unordered_map<string, int>ump;


	for (int i = 0; i < n; i++) {
		string s; int x;
		cin >> s >> x;

		mp.insert({s, x});
		ump.insert({s, x});
	}


	for (map<string, int>::iterator it = mp.begin(); it != mp.end(); it++) {
		cout << (*it).first << " " << it->second << endl;
	}

	//For Each:

	cout << endl;

	for (pair<string, int> x : ump) {
		cout << x.first << " " << x.second << endl;
	}

}









