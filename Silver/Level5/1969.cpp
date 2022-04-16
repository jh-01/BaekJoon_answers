#include <iostream>
#include <string>
#include <algorithm>
#define MAX 1001
using namespace std;

int main(){
	int N, M;
	int hd = 0;
	string dna[MAX];
	string s;
	cin >> N >> M;
	
	for(int i = 0; i < N; i++){
		cin >> dna[i];
	}
	for(int i = 0; i < M; i++){
		int n[4] = {0,};
		sort(dna, dna + N);
		for(int j = 0; j < N; j++){
			if(dna[j][i] == 'A') n[0]++;
			else if(dna[j][i] == 'C') n[1]++;
			else if(dna[j][i] == 'G') n[2]++;
			else if(dna[j][i] == 'T') n[3]++;
		}
		int max_idx = 0, min = 2100000000;
		for(int t = 0; t < 4; t++){
			if(min > N - n[t]){
				max_idx = t;
				min = N - n[t];
			}
		}
		if(max_idx == 0) {
			s += 'A';
			hd += n[1] + n[2] + n[3];
		}
		else if(max_idx == 1) {
			s += 'C';
			hd += n[0] + n[2] + n[3];
		}
		else if(max_idx == 2) {
			s += 'G';
			hd += n[0] + n[1] + n[3];
		}
		else if(max_idx == 3) {
			s += 'T';
			hd += n[0] + n[1] + n[2];
		}		
	}
	cout << s << '\n' << hd;
	return 0;
}
