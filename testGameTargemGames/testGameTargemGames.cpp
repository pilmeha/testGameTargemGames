#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <conio.h>


using namespace std;

struct Point
{
	int x, y;
};

// Проверка границ
bool isValid(int x, int y, int n, int m) {
	return x >= 0 && x < n && y >= 0 && y < m;
}

int main() {
	ifstream file("input.txt");
	if (!file.is_open()) {
		cout << "Failed to open input.txt\n";
		return 1;
	}

	vector<string> grid;
	string line;

	while (getline(file, line)) {
		if (!line.empty())
			grid.push_back(line);
	}

	file.close();

	int n = grid.size();
	if (n == 0) return 0;
	int m = grid[0].size();

	Point start{ -1, -1 }, finish{ -1, -1 };

	// Найти S и F
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (grid[i][j] == 'S')
				start = { i, j };
			else if (grid[i][j] == 'F')
				finish = { i, j };
		}
	}

	// BFS (Поиск в ширину)
	vector<vector<bool>> visited(n, vector<bool>(m, false));
	vector<vector<Point>> parent(n, vector<Point>(m, { -1, -1 }));

	queue<Point> q;
	q.push(start);
	visited[start.x][start.y] = true;

	// 4 направления
	int dx[4] = { -1, 1, 0, 0 };
	int dy[4] = { 0, 0, -1, 1 };

	bool found = false;

	while (!q.empty()) {
		Point cur = q.front();
		q.pop();

		if (cur.x == finish.x && cur.y == finish.y) {
			found = true;
			break;
		}

		for (int d = 0; d < 4; d++) {
			int nx = cur.x + dx[d];
			int ny = cur.y + dy[d];

			if (isValid(nx, ny, n, m) && !visited[nx][ny] && (grid[nx][ny] == '.' || grid[nx][ny] == 'F')) {
				visited[nx][ny] = true;
				parent[nx][ny] = cur;
				q.push({ nx, ny });
			}
		}
	}

	if (!found) {
		cout << "No path found\n";
		return 0;
	}

	// Востановление пути
	Point cur = finish;

	while (!(cur.x == start.x && cur.y == start.y)) {
		Point p = parent[cur.x][cur.y];

		if (!(cur.x == finish.x && cur.y == finish.y)) {
			if (grid[cur.x][cur.y] != 'S')
				grid[cur.x][cur.y] = '*';
		}

		cur = p;
	}

	// Вывод
	for (const auto& row : grid) {
		cout << row << "\n";
	}

	//// Ожидаем нажатие для завершения программы
	//std::cout << "Нажмите клавишу...\n";
	//_getch();

	return 0;
}
