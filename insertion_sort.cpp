#include <iostream>
using namespace std;

int main(){
    int data[] = {5, 2, 4, 1, 3};
    int n = 5;

    for(int i = 1; i < n; i++){ // int i = 1 karna indeks 0 uda terurut
        int key = data[i]; //key = 2
        int j = i - 1; //indeks = 0

        while (j >= 0 && data[j] > key){ // 5 > 2
            data[j+1] = data[j];
            j--;
        }

        data[j+1] = key;
    }

    cout << "hasil insertion sort: ";
    for (int i = 0; i<n; i++){
        cout<< data[i]<< " ";
    }
    
    return 0;
}