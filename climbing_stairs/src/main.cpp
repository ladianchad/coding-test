#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;


int main(int argc, char const *argv[])
{
  int stair_num;
  cin >> stair_num;
  vector<int> scores(301, 0);
  for (size_t i = 1; i < scores.size(); i++)
  {
    cin >> scores[i];
  }

  vector<long> solutions(3, 0);
  solutions[1] = scores[1];
  solutions[2] = scores[1] + scores[2];
  for_each(scores.begin() + 3, scores.end(), [&](int score) {
    int idx = solutions.size();
    solutions.push_back(max(solutions[idx -3] + scores[idx -1], solutions[idx - 2]) + score);
  });
  cout<< solutions[stair_num];
  
  return 0;
}
