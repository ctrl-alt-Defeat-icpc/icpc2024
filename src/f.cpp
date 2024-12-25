#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 1e5 + 5;

string commands[] = {"go", "forward", "backward", "next", "pick", "delete"};
string line, rawnum, c, s, command;
int x, y;

void invalid() {
	cout << "MISS ME!\n";
	exit(0);
}

string cleanNum(string str) {
	int curr = 0;
	string result = "";
	string num = "";
	for(int i = 0; str[i]; i++) {
		if(str[i] == ' ' || str[i] == '-')
			continue; // continue for extra characters
		if(str[i] == ',') { // end of a number
			if(curr == 10) result += "0" + num;
			else result += num;
			curr = 0;
			num = "";
		}
		else num += str[i], curr++;
	}
	return result;
}

void Main() {
	rawnum = s = "";
    while(true) {
		getline(cin, line);
		if(line == "#") break;
		rawnum += line + ",";
	}
	c = cleanNum(rawnum);
	int curr = 0;
	int clength = c.length();

	while(cin >> command) {
		if(command == commands[4]) { // pick
			cin >> x >> y;
			int first_phone = curr / 11 * 11;
			if(x < y) {
				for(int i = x + first_phone; i <= first_phone + y; i++)
					s += c[i];
			}
			else { // x >= y
				for(int i = x + first_phone; i >= first_phone + y; i--)
					s += c[i];
			}
		}
		else {
			cin >> x;
			if(command == commands[0]) { // go
				curr = x * 11;
				if(curr >= clength) invalid();
			}
			else if(command == commands[1]) { // forward
				curr = curr + x;
				if(curr >= clength) invalid();
			}
			else if(command == commands[2]) { // backward
				curr = curr - x;
				if(curr < 0) invalid();
			}
			else if(command == commands[3]) { // next
				if(curr + x - 1 >= clength) invalid();
				for(int i = curr; i < curr + x; i++)
					s += c[i];
			}
			else { // command == commands[5] // delete
				if(x > s.length()) invalid();
				s = s.substr(0, s.length() - x);
			}
		}
	}
	if(s.length() > 10000)
		s = s.substr(0, 10000);
	cout << s << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    // int t; cin >> t; while(t--) Main();
    Main();
    return 0;
}
/*
	contest name: icpc 2024 west asia (Tehran Site)
	contest link: https://quera.org/course/assignments/79348/problems
	contest detail: 19–20 December, 2024 in Sharif University of technology
	my code repository: https://github.com/ctrl-alt-Defeat-icpc/icpc2024
	problem name: I am Sherlocked
	problem letter: F
	Time: 2024-12-25 19:12 UTC: +3:30

	Writer: EnAnsari
	Email: Rahmat2022a@gmail.com
	website: enansari.github.io

	Whenever you see a successful person you only see the public glories, never the private sacrifices to reach them. ~Vaibhav 
	Shah

	this code created by rcph (https://github.com/EnAnsari/cph)
*/