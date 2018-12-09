#include <iostream>

using namespace std;

int main(){
	
	cout << "FOR LOOP PERTAMA\n";
	for (int x=3; x<=27; x+=3){
		cout << x << endl;
	}
	
	cout << "\nFOR LOOP KEDUA\n";
	int total = 0;
	for(int x= 3; x<= 27; x+=3,total += x){
		cout << x << " TAMBAH " << total << endl;
	}
}
