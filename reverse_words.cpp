#include<iostream>
#include<string>

using namespace std;

void reverse_word(string* );

void reverse_word(string* s) {
	// Reverse the whole string first. i
	reverse(s->begin(), s->end());
	
	size_t start = 0, end;
	while ((end = s->find(" ", start)) != string::npos) {
		// Reverse each word in the string.
		reverse(s->begin() + start, s->begin() + end);
		start = end + 1; 
	}

	// Reverse the last word.
	reverse(s->begin() + start, s->end()); 
}

int main(){

	string s = "ram is costly";

	reverse_word(&s);

	cout << s << endl ;

	return 0;

}

