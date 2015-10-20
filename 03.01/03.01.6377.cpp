#include <iostream>
using std::cin; using std::cout; using std::endl;
#include <queue>
#include <string>

struct pqm {
	std::string s;
	pqm(std::string S) {
		s = S;
	}
	bool operator < (const pqm PQM) const {
		if (s.length() == PQM.s.length())
			return s > PQM.s;
		else
			return s.length() > PQM.s.length();
	}
};

int n, i, j, t1, t2;
bool first_out = true;
std::string ts;
std::priority_queue<pqm> q[13][32];

int main() {
	cin >> n;
	while (n--) {
		cin >> ts >> t1 >> t2;
		q[t1][t2].push(pqm(ts));
	}
	for (i = 1; i <= 12; i++)
		for (j = 1; j <= 31; j++)
			if (q[i][j].size() >= 2) {
				cout << i << " " << j;
				while (!q[i][j].empty()) {
					cout << " " << q[i][j].top().s;
					q[i][j].pop();
				}
				cout << endl;
				first_out = false;
			}
	if (first_out)
		cout << "None" << endl;
	return 0;
}
