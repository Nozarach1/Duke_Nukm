#include <iostream>
#include <string>
using namespace std;


int main(){
	string n;
	cin >> n;

	bool pal = true;
	for(int j = 0, i = n.size()- 1; j < i; j++, i--){
		if(n[j] !=n[i]){
			pal = false;
			break;
		}
	}
	if(pal){
		cout << "YES" <<endl;
	}else{

		cout << "NO" <<endl;
	}
}
