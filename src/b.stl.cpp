#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 1e5 + 5;

ll x, k, h, ans;

void Main() {
    cin >> x >> k >> h;
	ans = 2 * x * h;
	k -= h;
	if(k >= 140) {
		ans += (x + x / 2) * (k - 140);
		k = 140;
	}
	ans += x * k;
	cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	cout.imbue(locale("")); // for , show method
	// cout.imbue(locale::classic()); // return to normal mode
    int t; cin >> t; while(t--) Main();
    // Main();
    return 0;
}
/*
	contest name: icpc 2024 west asia (Tehran Site)
	contest link: https://quera.org/course/assignments/79348/problems
	contest detail: 19–20 December, 2024 in Sharif University of technology
	my code repository: https://github.com/ctrl-alt-Defeat-icpc/icpc2024
	problem name: Divar’s Salaries
	problem letter: B
	Time: 2024-12-25 19:12 UTC: +3:30

	Writer: EnAnsari
	Email: Rahmat2022a@gmail.com
	website: enansari.github.io

	Real difficulties can be overcome; it is only the imaginary ones that are unconquerable. ~Theodore N. Vail

	this code created by rcph (https://github.com/EnAnsari/cph)
*/