#include <iostream>
#include <vector>
#include <string>
#include <set>

using namespace std;

int find(vector<string> &nums, int k){
  set<string> id;
  bool success = true;
  for(string num: nums){
    if(id.find(num.substr(num.size() - k, k)) == id.end()){
      id.emplace(num.substr(num.size() - k, k));
    } else {
      success = false;
      break;
    }
  }
  return success ? k : find(nums, k+1);
}

int main(int argc, char const *argv[])
{
  int n;
  cin >> n;
  cin.get();
  vector<string> nums;
  while(n--){
    string num;
    getline(cin, num);
    nums.push_back(num);
  }
  cout<<find(nums, 1);
  return 0; 
}
