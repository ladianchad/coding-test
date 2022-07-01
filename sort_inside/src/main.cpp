#include<string>
#include<algorithm>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  std::string str; 
  getline(cin, str);
  sort(str.begin(), str.end(), greater<char>());
  cout<< str;
  return 0;
}
