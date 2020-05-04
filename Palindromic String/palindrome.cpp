#include <iostream>
#include <string>
using namespace std;
int main() {
string s;
std::cin >> s;
int len = s.length();
int i;
int count = 0;
for (i = 0; i<len ; i++){
if (s[len-1-i] == s[i] )
count++;
}
if (count == len)
std::cout << "YES" << endl;
else
std::cout << "NO" << endl;
return 0;
}