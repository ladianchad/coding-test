#include <iostream>
#include <map>
#include <algorithm>

using namespace std;


int main(int argc, char const *argv[])
{
  int a, b;
  cin >> a >> b;
  cin.get();
  int answer = a + b;
  map<int,bool> num_map;
  while(a--){
    int tmp;
    cin >> tmp;
    num_map[tmp] = true;
  }
  cin.get();

  while(b--){
    int tmp;
    cin >> tmp;
    if(num_map[tmp]){
      answer -= 2;
    }
  }
  cout<< answer;
  return 0;
}
