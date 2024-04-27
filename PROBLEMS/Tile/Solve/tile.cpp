#include <bits/stdc++.h>

int main(int argc, char **argv)
{
  std::cin.tie(0)->sync_with_stdio(0);

  int N, M;
  std::cin >> N >> M;

  int size = std::pow(N / M, 2);
  std::vector vecTile(size, std::vector(M, std::vector<char>(M)));

  for (int i = 0; i < N; ++i)
  {
    int calc = (i / M * M);
    for (int j = 0; j < N; ++j)
    {
      std::cin >> vecTile[calc + (j / M)][i % M][j % M];
    }
  }

  std::map<std::vector<std::vector<char>>, int> mapTile;
  for (auto& tile : vecTile) { mapTile[tile]++; }
  std::vector<std::vector<char>> vec = mapTile.begin()->first;

  for (int i = 0; i < N; ++i)
  {
    for (int j = 0; j < N; ++j)
    {
      std::cout << vec[i % M][j % M];
    }
    std::cout << '\n';
  }

  return 0;
}
