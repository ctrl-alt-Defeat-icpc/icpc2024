#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 1e5 + 5;

string names[] = {"Watermelon", "Pomegranates", "Nuts", "Nothing"};
ll b, p;
void Main() {
	cin >> b;
	for(int i = 0; i < 3; i++) {
		cin >> p;
		if(b >= p) {
			cout << names[i] << '\n';
			return;
		}
	}
	cout << names[3];
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
	problem name: Yalda
	problem letter: A
	Time: 2024-12-25 19:12 UTC: +3:30

	Writer: EnAnsari
	Email: Rahmat2022a@gmail.com
	website: enansari.github.io

	All our dreams can come true if we have the courage to pursue them. ~Walt Disney

	this code created by rcph (https://github.com/EnAnsari/cph)
*/