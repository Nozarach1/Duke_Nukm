#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	string lol;
	getline(cin , lol);
	vector<int> words;
	string cur;

	for(char i : lol){
		
		if(i == ',' or i =='.') {
			if(!cur.empty()){
				words.push_back(stoi(cur));
				cur.clear();
			}
		}else {
			cur += i;
		}
	}

	int l;
	for(int i : words){
		l +=i; 
	}	
	cout << l << endl;		

}

