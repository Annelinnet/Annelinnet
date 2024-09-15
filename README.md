#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    // Negative numbers are not palindromes
    if (x < 0) return false;

    // Store the original number
    int original = x;
    int reversed = 0;

    // Reverse the number
    while (x != 0) {
        int digit = x % 10;
        reversed = reversed * 10 + digit;
        x /= 10;
    }

    // Check if the original number is equal to the reversed number
    return original == reversed;
}

int main() {
    int x = 232321;
    cout << (isPalindrome(x) ? "true" : "false") << endl; // Output: true
    return 0;
}
