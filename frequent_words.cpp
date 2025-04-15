#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main(){
	string lol;
	getline(cin , lol);
	vector<string> words;
	string cur;
	for(char i : lol){
		
		if(i == ' ' or i== ',' or i== '.'){
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
	
	map< string , int>mapw;
	for(string a : words){
		if(mapw.count(a)){		
			mapw[a] +=1;
		}else{
			mapw[a] = 1;
		}
	}
	for(const auto& [word ,s] : mapw){
		cout << word << "\t" << '-' << "\t" << s << endl;
	}	

}

			
