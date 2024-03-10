#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

int FindThirdDotIndexRec(const char* str, int index = 0, int dotCount = 0) {
    if (str[index] == '\0' || dotCount == 3) {
        return (dotCount == 3) ? index - 1 : -1;
    }
    return FindThirdDotIndexRec(str, index + 1, dotCount + (str[index] == '.'));
}

void ReplaceEveryFourthCharWithDotRec(char* str, int index = 0) {
    if (str[index] == '\0') {
        return; 
    }
    if ((index + 1) % 4 == 0) {
        str[index] = '.';
    }

    ReplaceEveryFourthCharWithDotRec(str, index + 1);
}

int main() {
    char str[101];
    cout << "Enter string:" << endl;
    cin.getline(str, 100);

    int thirdDotIndex = FindThirdDotIndexRec(str);
    cout << "Index of the third dot: " << thirdDotIndex << endl;

    char* modifiedStr = new char[strlen(str) + 1];
    strcpy(modifiedStr, str);

    ReplaceEveryFourthCharWithDotRec(modifiedStr);
    cout << "Modified string: " << modifiedStr << endl;
    cout << "Modified string(result) : " << modifiedStr << endl;

    delete[] modifiedStr;
    return 0;
}