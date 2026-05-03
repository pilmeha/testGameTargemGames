# testGameTargemGames



\## Описание

Программа находит кратчайший путь от S до F в лабиринте.



\## Алгоритм

Используется BFS (поиск в ширину).



\## Входные данные

Файл input.txt:



S - старт

F - финиш

. - свободно

x - препятствие



\## Запуск



\### Windows (MinGW)

g++ -std=c++17 testGameTargemGames.cpp -o maze.exe

maze.exe



\### Linux / Mac

g++ -std=c++17 testGameTargemGames.cpp -o maze

./maze



\## Пример

S..xx..xxx

.xxxx..xx.

...x..x.x.

xx.x.xx..x

xx........

......xxx.

......xxxF

