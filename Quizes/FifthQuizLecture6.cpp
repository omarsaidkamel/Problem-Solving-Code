/*1-Make a program that take from user a number consists of 4 digits then print if the 
second number from left is even or odd?*/

#include <iostream>
using namespace std;
int main() {
    int n;
  cin >> n;
    n = (n / 100) % 10;
    if (n % 2 == 0) {
        cout << "The second digit from the left is even." << endl;
    } else {
        cout << "The second digit from the left is odd." << endl;
    }
    return 0;
}

/* Make a program that print the biggest number and the smallest number from N numbers*/
#include <iostream>
using namespace std;

int main() {
    int N, x, largest, smallest;
    cin >> N >> nx;
    largest = smallest = x;
    for (int i = 2; i <= N; ++i) {
        cin >> x;
        
        if (x > largest) {
            largest = x;
        }
        if (number < smallest) {
            smallest = x;
        }
    }
    cout << "The largest number is: " << largest << endl;
    cout << "The smallest number is: " << smallest << endl;

    return 0;
}

/* Make a program that print if the number N is palindrome or not.*/

#include <iostream>
using namespace std;

int main() {
    int N, original, reversed = 0, remainder;
    cin >> N;
    original = N;
  while (N != 0) {
        remainder = N % 10; 
        reversed = reversed * 10 + remainder;
        N /= 10;
    }
  if (original == reversed) {
        cout << original << " is a palindrome." << endl;
    } else {
        cout << original << " is not a palindrome." << endl;
    }

    return 0;
}
