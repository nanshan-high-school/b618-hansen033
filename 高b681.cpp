#include <iostream>
using namespace std;
int main(){
	int x;
	while (cin>>x){
		if (x>0){
			cout << x*2-1 << "\n";
		} else if (x<0){
			cout << x*-2 << "\n";
		}
	}
}