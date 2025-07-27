#include <iostream>
using namespace std;

int main() {

    int n, x, count = 0;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];

    cout << "Enter the numbers:\n";
    for (int i = 0; i < n; i++) {   
    cin >> arr[i];
    }

    cout << "Enter number to search: "; 
    cin >> x;

    for (int i = 0; i < n; i++) {   
    if (arr[i] == x)
    {
       count++;
    }
    }
  
    cout << "Number " << x << " occurred " << count << " times ";
}
