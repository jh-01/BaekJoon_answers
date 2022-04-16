#include <iostream>
#include <algorithm>
using namespace std;

string words[20000];

bool compare(string a, string b){
	// 길이가 짧은 단어가 먼저
	if(a.length() < b.length()) 
		return 1;
	else if(a.length() > b.length())
		return 0;
	else // 길이가 같은 경우 
		return a < b;
}

int main(void){
	int num;
	cin >> num;
	
	for(int i = 0; i < num; i++){
		cin >> words[i];
	}
	
	sort(words, words + num, compare);
	
	for(int i = 0; i < num; i++){
		if(i > 0 && words[i] == words[i - 1]) continue;
		cout << words[i] << '\n';
	}
	return 0;
}
