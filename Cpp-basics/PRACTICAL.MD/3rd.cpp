// frequency of each character in a string 

#include <iostream>
using namespace std;

int main() {
  string str;
  cout << "Enter a string: ";
  getline(cin, str); 
  int freq[256] = {0};

  for (char c : str) {
    freq[c]++;
  }

  for (int i = 0; i < str.length();i++){
    if (freq[str[i]] != 0){
      cout << str[i] << ": " << freq[str[i]] << endl;
      freq[str[i]] = 0;
    }
  }

  return 0;
}
