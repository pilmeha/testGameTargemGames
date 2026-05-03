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



\## Выходные данные

Файл output.txt - сохраняем путь



\## Запуск



\### Windows (MinGW)

cd .\\testGameTargemGames\\

g++ -std=c++17 main.cpp -o mazeGame

.\\mazeGame.exe



\## Пример

S..xx..xxx

.xxxx..xx.

...x..x.x.

xx.x.xx..x

xx........

......xxx.

......xxxF

