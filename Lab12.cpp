#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string s, int pos = 0);
int main() {
	string s;
	cout << "Enter a word to see if it is a palindrome: ";
	cin >> s;
	cout << s << (isPalindrome(s) ? " is a palindrome" : " is not a palindrome") << endl;
	system("PAUSE");
	return 0;
}
bool isPalindrome(string s, int pos) {
	//if the position is not at the midway point of the string if its not then it checks to see if the two chars at opposite ends are equal to each other
	//if they are then the function calls it's self and adds one to the position and passes it to the function if not the function returns false
	return (pos < s.length() / 2) ? ((s[pos] == s[s.length() - pos - 1]) ? isPalindrome(s, pos + 1) : false) : true;
}