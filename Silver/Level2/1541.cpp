#include <iostream>
#include <string>
using namespace std;

string a;

int main(){
	int result = 0;
	string temp = "";
	bool isminus = false;
	
	cin >> a;
	for(int i = 0; i <= a.size(); i++){
		if(a[i] == '-' || a[i] == '+' || a[i] == '\0'){ // 수식이나 수식의 끝인 경우
			if(isminus == true)
				result += -stoi(temp);
			else 
				result += stoi(temp);
			temp = "";
			if(a[i] == '-'){ // 마이너스 수식인 경우
				isminus = true;
				continue;
			}	
		}
		temp += a[i];
	}
	cout << result;
	return 0;
}
