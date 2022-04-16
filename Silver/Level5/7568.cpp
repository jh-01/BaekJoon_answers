#include <iostream>
using namespace std;

struct bulk {
	int weight;
	int height;
	int order;
};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	struct bulk b[51];
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> b[i].weight >> b[i].height;
		b[i].order = 1;
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (i == j) continue;
			else if (b[i].weight > b[j].weight && b[i].height > b[j].height) {
				b[j].order++;
			}
		}
	}

	for (int i = 0; i < N; i++) {
		cout << b[i].order << " ";
	}
	return 0;
}
