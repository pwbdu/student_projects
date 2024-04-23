#include <iostream>
using namespace std;

float sortowanie(float x[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (x[j] > x[j + 1]) {
            
                float temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;
            }
        }
    }
    
    if (n % 2 == 0) {
        return (x[n / 2 - 1] + x[n / 2]) / 2.0;
    } else { 
        return x[n / 2];
    }
}

int main() {
    float x[100];
    int n;

    cout << "Podaj ile liczb (maksymalnie 100): ";
    cin >> n;

    cout << "Podaj " << n << " liczb: ";
    for (int i = 0; i < n; ++i) {
        cin >> x[i];
    }



    cout << "Posortowane liczby: ";
    for (int i = 0; i < n; ++i) {
        cout << x[i] << " ";
    }
    return 0;
}
