#include <iostream>
#include <algorithm>
#include <string>
#include <map>

using namespace std;

string solution(map<char,int> char_map){
  int odd_cnt = 0;
  char middle;
  string result;
  for(auto c: char_map){
    int cnt = c.second;
    if(cnt % 2){
      if(odd_cnt > 0){
        return "I'm Sorry Hansoo";
      }
      odd_cnt++;
      middle = c.first;
      cnt--;
    }
    while(cnt){
      result += c.first;
      cnt -= 2;
    }
  }
  string revered = result;
  reverse(revered.begin(), revered.end());
  return odd_cnt ? result + middle + revered : result + revered;
}

int main(int argc, char const *argv[])
{
  string name;
  getline(cin, name);

  map<char, int> char_map;
  for_each(name.begin(), name.end(), [&](char c) {
    char_map[c]++;
  });
  cout<< solution(char_map);
  return 0;
}
