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

PS C:\\Users\\garma\\source\\repos\\testGameTargemGames> cd .\\testGameTargemGames\\

PS C:\\Users\\garma\\source\\repos\\testGameTargemGames\\testGameTargemGames> g++ -std=c++17 testGameTargemGames.cpp -o mazeGameTargemGames

PS C:\\Users\\garma\\source\\repos\\testGameTargemGames\\testGameTargemGames> .\\mazeGameTargemGames.exe



\## Пример

S..xx..xxx

.xxxx..xx.

...x..x.x.

xx.x.xx..x

xx........

......xxx.

......xxxF

