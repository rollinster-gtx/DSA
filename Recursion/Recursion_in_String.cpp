#include<iostream>
using namespace std;

// Function 1: Check Palindrome (Image 1)
bool checkpal(string str, int start, int end)
{
    // Base Condition: Jab pointers cross ho jayein
    if(start >= end)
        return 1; // Palindrome hai

    // Not matched
    if(str[start] != str[end])
        return 0; // Palindrome nahi hai

    // Matched: Agle characters check karo
    else
        return checkpal(str, start + 1, end - 1);
}

// Function 2: Count Vowels (Image 2)
int countVowels(string str, int index)
{
    // Base condition: Jab index string ke start se peeche chala jaye
    if(index == -1)
        return 0;

    // Vowel hga
    if(str[index]=='a' || str[index]=='e' || str[index]=='i' || str[index]=='o' || str[index]=='u')
        return 1 + countVowels(str, index - 1);

    // Nahi hga
    else
        return countVowels(str, index - 1);
}

int main()
{
    // 1. Check Palindrome
    string str1 = "naman";
    cout << "Is Palindrome: " << checkpal(str1, 0, str1.length() - 1) << endl;

    // 2. Count Vowels
    string str2 = "rohit";
    cout << "Vowel Count: " << countVowels(str2, str2.length() - 1) << endl;

    return 0;
}