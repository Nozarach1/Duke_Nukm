#include <iostream>

using namespace std;

int main(){
	float mass[10];
	
	float len = sizeof(mass)/ sizeof(float);
	//заполнение масива
	for(int i = 0; i < len ; i++){
		mass[i] = rand() % (100 - 1)+ 1; 
	}
	float a = 0; 
	for(int i = 0; i < len ; i++){
		a +=mass[i];
	}
	cout << a/len << endl;
}
