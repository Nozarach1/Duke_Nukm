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
				cur.erase(0 , 1);
				words.push_back(cur);
				cur.clear();
			}
			
		}else {
			cur += i;
		}
		if(i == '.'){
			break;
		}
	}


	if(!cur.empty()){
		words.push_back(cur);
			
	}
		
	for(string a : words){
		cur += a;
		cur += " ";
	} 	
	cout << cur << endl;
}

