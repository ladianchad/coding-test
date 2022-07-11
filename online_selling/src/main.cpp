#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
  int n ,m;
  cin>> n >>m;

  vector<int> Pi;

  while(m--){
    int price;
    cin >> price;
    Pi.push_back(price);
  }

  sort(Pi.begin(), Pi.end(), less<int>());
  cout<< (Pi[min( n / 2 , (int)(Pi.size() -1))] -1) ;
  return 0;
}
