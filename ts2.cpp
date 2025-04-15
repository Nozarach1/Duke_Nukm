#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	string lol;
	getline(cin , lol);
	vector<string> words;
	string cur;
	for(char i : lol){
		
		if(i == ' '){
			if(!cur.empty()){
				words.push_back(cur);
				cur.clear();
			}
			
		}else {
			cur += i;
		}
	}


	if(!cur.empty()){
		words.push_back(cur);
			
	}			

	int len = 0;

	string ss;

	for(string s : words){

		if(len < s.size()){

			len = s.size();
			ss = s;
		}
	}
	cout << ss << ' ' << len << endl;
}

