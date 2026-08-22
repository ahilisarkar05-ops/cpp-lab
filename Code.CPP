#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Function to check if an integer is a palindrome
bool isNumberPalindrome(int num) {
    // Negative numbers are not palindromes
    if (num < 0) return false; 
    
    int originalNum = num;
    long long reversedNum = 0; // Using long long to prevent integer overflow
    
    while (num > 0) {
        int digit = num % 10;
        reversedNum = (reversedNum * 10) + digit;
        num /= 10;
    }
    
    return originalNum == reversedNum;
}

// Function to check if a string is a palindrome
bool isStringPalindrome(const string& str) {
    int left = 0;
    int right = str.length() - 1;
    
    while (left < right) {
        if (str[left] != str[right]) {
            return false; // Character mismatch found
        }
        left++;
        right--;
    }
    return true; // All characters matched
}

int main() {
    int choice;
    cout << "--- Palindrome Checker ---" << endl;
    cout << "1. Check Number Palindrome" << endl;
    cout << "2. Check String Palindrome" << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        int number;
        cout << "Enter an integer: ";
        cin >> number;
        
        if (isNumberPalindrome(number)) {
            cout << number << " is a palindrome number." << endl;
        } else {
            cout << number << " is NOT a palindrome number." << endl;
        }
    } 
    else if (choice == 2) {
        string text;
        cout << "Enter a string: ";
        cin >> text; // Reads a single word
        
        if (isStringPalindrome(text)) {
            cout << "\"" << text << "\" is a palindrome string." << endl;
        } else {
            cout << "\"" << text << "\" is NOT a palindrome string." << endl;
        }
    } 
    else {
        cout << "Invalid choice! Please run the program again." << endl;
    }

    return 0;
}
