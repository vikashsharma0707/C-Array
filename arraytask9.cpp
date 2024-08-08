
//Q.9) WAP to create an array with n even elements. (hint: use while loop instead of for)

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of even elements: ";
    cin >> n;

    int arr[n];
    int count = 0;
    int i = 0;

    while (count < n) {
        arr[count] = i;
        cout << arr[count] << " ";
        i += 2;
        count++;
    }

}
