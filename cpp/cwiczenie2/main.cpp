#include <iostream>

using namespace std;

int main(){
float ms;
cout << "podaj liczbe(m/s)" << endl;
cin >> ms;
float kmph=ms/1000*3600;
cout<<"liczba " << kmph << " km/h" <<endl;
return 0;
}
