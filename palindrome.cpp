#include <iostream>
#include <string>
<<<<<<< HEAD
#include <algorithm>

using namespace std;

bool isNumberPalindrome(int num) {
=======
#include <algorithm> 

using namespace std;


bool isNumberPalindrome(int num) {
    
>>>>>>> 3eca145 (new commit)
    if (num < 0) return false;

    int originalNum = num;
    long long reversedNum = 0; 

    while (num > 0) {
        int lastDigit = num % 10;
        reversedNum = (reversedNum * 10) + lastDigit;
        num /= 10;
    }

    return originalNum == reversedNum;
}

bool isStringPalindrome(const string& str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false; 
        }
        left++;
        right--;
    }
    return true; 
}

int main() {
    int choice;
    cout << "--- Palindrome Checker ---\n";
    cout << "1. Check a Number\n";
    cout << "2. Check a String\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        int num;
        cout << "Enter an integer: ";
        cin >> num;

        if (isNumberPalindrome(num)) {
            cout << num << " is a palindrome.\n";
        } else {
            cout << num << " is not a palindrome.\n";
        }
    } 
    else if (choice == 2) {
        string str;
        cout << "Enter a string (no spaces): ";
        cin >> str;

        if (isStringPalindrome(str)) {
            cout << "\"" << str << "\" is a palindrome.\n";
        } else {
            cout << "\"" << str << "\" is not a palindrome.\n";
        }
    } 
    else {
        cout << "Invalid choice!\n";
    }

    return 0;
}
