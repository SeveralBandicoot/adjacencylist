/*

Adjacency List 

11/30/2024

@ AJ Enrique Arguello



*/

#include <iostream>
#include <unordered_map>
#include <list>
#include <string>

using namespace std;

int main() {
  unordered_map<string, list<char>> vertices;

  list<char> edge0{'1'};
  list<char> edge1{'0', '2', '3'};
  list<char> edge2{'1', '3'};
  list<char> edge3{'1', '2'};

  vertices.insert(pair<string, list<char>>("0: ", edge0));
  vertices.insert(pair<string, list<char>>("1: ", edge1));
  vertices.insert(pair<string, list<char>>("2: ", edge2));
  vertices.insert(pair<string, list<char>>("3: ", edge3));

  for(auto pb : vertices) {
    cout << "\n" << pb.first << " ";

    for (auto sec : pb.second) {
      cout << sec << " ";
    }
  }
  cout << "\n\n";
}