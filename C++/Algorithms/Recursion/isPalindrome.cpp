#include <string>

/**
 * Checks if a string is palindrome using recursion
 * 
 * @param string string
 * @return bool
 */
bool isPalindrom(std::string string)
{
    if (string.length() < 2) {
        return true;
    }

    if (string[0] != string[string.length() - 1]) {
        return false;
    }

    return isPalindrom(string.substr(1, string.length() - 2));
}