#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

void solution(map<int, vector<int>> &graph, int now, map<int, bool> &is_visted){
  is_visted[now] = true;
  for_each(graph[now].begin(), graph[now].end(),[&](int vertex){
    if(!is_visted[vertex]){
      solution(graph, vertex, is_visted);
    }
  });
}

int main(int argc, char const *argv[])
{
  int vertex, edge;
  cin >> vertex >> edge;
  map<int, vector<int>> graph;
  for (size_t i = 0; i < edge; i++)
  {
    int source, target;
    cin >> source >> target;
    graph[source].push_back(target);
    graph[target].push_back(source);
  }

  map<int, bool> is_visited;
  solution(graph, 1, is_visited);
  cout<< is_visited.size() - 1;
  return 0;
}
