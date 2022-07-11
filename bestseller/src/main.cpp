#include <map>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
  int num;
  cin >> num;
  cin.get();
  map<string, int> sell;
  while(num--){
    string book;
    getline(cin, book);
    sell[book]++;
  }
  int max_sell = 0;
  string bestseller;
  for(auto item : sell){
    if(item.second > max_sell){
      bestseller = item.first;
      max_sell = item.second;
    }
  }
  cout<< bestseller;
  return 0;
}
