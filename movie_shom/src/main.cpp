#include <string>
#include <algorithm>
#include <iostream>

using namespace std; 

int main(int argc, char const *argv[])
{
  int num;
  cin >> num;
  int target = 666;
  while(num){
    string str = to_string(target);
    if( str.find("666") != std::string::npos){
      num--;
    }
    target++;
  }
  cout<< target - 1;
  return 0;
}
