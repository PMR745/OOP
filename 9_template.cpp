#include<iostream>
using namespace std;

template <class T>
T findMin(T arr[], int n) {
    int i;
    T min;
    min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if(min > arr[i])
            min = arr[i];
    }
    return (min);
}

int main(){
    int arr[5];
    char str[5];
    double dbarr[5];

    cout << "\nInteger Values\n";

    for(int i = 0; i < 5; i++) {
        cout << "Enter integer value " << i+1 << ": " ;
        cin >> arr[i];
    }

    cout << "\nCharacter values\n";
    for(int j = 0; j < 5; j++) {
        cout << "Enter character value " << j+1 << ": ";
        cin >> str[j];
    }

    cout << "\nDecimal Values\n";
    for (int k = 0; k < 5; k++)
    {
        cout << "Enter decimal value " << k+1 << ": ";
        cin >> dbarr[k];
    }

    cout << "\nGeneric Function to find Minimum from Array\n";
    cout << "Minimum Integer is " << findMin(arr, 5);
    cout << "\nMinimum Character is " << findMin(str, 5);
    cout << "\nMinimum Double is " << findMin(dbarr, 5);
    
    return 0;
}