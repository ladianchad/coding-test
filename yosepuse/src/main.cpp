#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
  int n, k;
  cin >> n >> k;
  vector<int> people, result;
  for(int i = 0; i<n; i++){
    people.push_back(i+1);
  }
  int now = 0;
  while(n--){
    now = (now + k - 1) % people.size(); 
    result.push_back(people[now]);
    people.erase(people.begin() + now);
  }

  cout<<"<";
  for(int i=0; i < result.size() -1; i++){
    cout<<result[i]<<", ";
  }
  cout<<result.back()<<">";
  return 0;
}
