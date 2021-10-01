
#include <iostream>


char kyTu(int n) {
    return char(n);
}


using namespace std;


int main() {

    int a, b;
    cin >> a >> b;
    char arr[100];


    for (int i = 0; i < b; i++) {
        arr[i] = kyTu(65 + i);


    }

    if (a <= b) {
        for (int i = 0; i < a; i++) {
            for (int j = a - i-1; j < b - 1;j++)
                cout << arr[j];
            for (int j = 0; j < a-i; j++)
                cout << arr[b - 1];
            cout << "\n";
        }
            
        
    } 

    if (a > b) {
        for (int i = 0; i < b - 1; i++) {
            for (int j = 0; j < b; j++)
                cout << arr[b - 1];
            cout << "\n";
        }
            
       
        for (int i = 0; i < b; i++) {


            for (int j = b - i - 1; j < b-1; j++)
                cout << arr[j];
            for (int j = i; j < b; j++)
                cout << arr[b - 1];
            cout << endl;
        }
    }
    
    

    return 0;
}
