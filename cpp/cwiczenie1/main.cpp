#include <iostream>

using namespace std;

int main(){
	int a=0;
	int b=0;
	int c=0;
	int d=0;
	cin>>a;
	cin>>b;
	cin>>c;
	cin>>d;
	int t[4]={a,b,c,d};
		for (int x=0; x<4; x++) {
		for (int x2=0; x2<4; x2++){
		if (t[x]>[x2]) {
				int b2;
				b2=t[x];
				t[x]=t[x2];
				t[x2]=b2;
			}
			}
		}
	cout<<t[0];
	cout<<t[1];
	cout<<t[2];
	cout<<t[3];
	return 0;
}
