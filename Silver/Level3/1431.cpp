#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector <string> words;

int getSum(string s){
	int n = s.length(), sum = 0;
	
	for(int i = 0; i < n; i++){
		if(s[i] - '0' >= 0 && s[i] - '0' <= 9){
			sum += s[i] - '0';
		}
	}
	return sum;
}

bool compare(string a, string b){
	// 길이가 짧은 단어가 먼저
	if(a.length() != b.length()) 
		return a.length() < b.length();
	// 길이가 같은 경우
	else {
		int aSum = getSum(a);
		int bSum = getSum(b);
		//글자에 포함된 숫자의 합으로 정렬
		if(aSum != bSum){
			return aSum < bSum;
		} 
		// 사전순으로 정렬
		else {
			return a < b;
		} 
	}
}

int main(void){
	int num;
	string input;
	cin >> num;
	
	for(int i = 0; i < num; i++){
		cin >> input;
		words.push_back(input);
	}
	
	sort(words.begin(), words.end(), compare);
	
	for(int i = 0; i < num; i++){
		cout << words[i] << '\n';
	}
	return 0;
}
