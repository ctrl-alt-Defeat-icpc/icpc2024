#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 1e5 + 5;

int n, w, temp, ans;
priority_queue<int, vector<int>, greater<>> ut, dt;

void invalid() {
	cout << -1 << '\n';
	exit(0);
}

void Main() {
    cin >> n >> w;
	for(int i = 0; i < n; i++) {
		cin >> temp;
		dt.push(temp);
	}

	if(n == 1) {
		if(dt.top() > w) invalid();
		else {
			cout << 1 << '\n';
			return;
		}
	}

	int x, y, z;
	while(!dt.empty()) {
		x = dt.top(); dt.pop();
		y = dt.top(); dt.pop();
		if(x + y <= w) {
			if(dt.empty()) {
				ans++;
				break;
			}
			ans += 2;
			ut.push(y);
			dt.push(x);
		}
		else if(y <= w) {
			if(ut.empty()) invalid(); // any people not exist for back
			ans += 2;
			z = ut.top(); ut.pop();
			ut.push(y);
			dt.push(x); dt.push(z);
		}
		else invalid(); // some wieght of persons exceed of maximum
	}
	cout << ans << '\n';
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
	problem name: Boat
	problem letter: K
	Time: 2024-12-25 19:12 UTC: +3:30

	Writer: EnAnsari
	Email: Rahmat2022a@gmail.com
	website: enansari.github.io

	I find that when you have a real interest in life and a curious life, that sleep is not the 
	most important thing. ~Martha Stewart

	this code created by rcph (https://github.com/EnAnsari/cph)
*/