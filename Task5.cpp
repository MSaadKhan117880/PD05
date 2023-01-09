#include<iostream>
#include<windows.h>

using namespace std;

void gotoxy(int, int);
char getCharAtxy(short int, short int);
void printMaze();
void printSpace(int, int);
void printPacman(int, int);

int main()
{
    bool gamerunning = true;
    int pacmanx = 6;
    int pacmany = 6;
    system("cls");
    printMaze();
    printPacman(pacmanx, pacmany);
    while (gamerunning)
    {
        if (GetAsyncKeyState(VK_LEFT))
        {
            char nextLocation = getCharAtxy(pacmanx - 1, pacmany);
            if (nextLocation == ' ')
            {
                printSpace(pacmanx, pacmany);
                pacmanx = pacmanx - 1;
                printPacman(pacmanx, pacmany);
            }
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            char nextLocation = getCharAtxy(pacmanx + 1, pacmany);
            if (nextLocation == ' ')
            {
                printSpace(pacmanx, pacmany);
                pacmanx = pacmanx + 1;
                printPacman(pacmanx, pacmany);
            }
        }
        if (GetAsyncKeyState(VK_UP))
        {
            char nextLocation = getCharAtxy(pacmanx, pacmany - 1);
            if (nextLocation == ' ')
            {
                printSpace(pacmanx, pacmany);
                pacmany = pacmany - 1;
                printPacman(pacmanx, pacmany);
            }
        }
        if (GetAsyncKeyState(VK_DOWN))
        {
            char nextLocation = getCharAtxy(pacmanx, pacmany + 1);
            if (nextLocation == ' ')
            {
                printSpace(pacmanx, pacmany);
                pacmany = pacmany + 1;
                printPacman(pacmanx, pacmany);
            }
        }
        if (GetAsyncKeyState(VK_ESCAPE))
        {
            gamerunning = false;
        }
        Sleep(200);
    }
    return 0;
}

void printMaze()
{
    cout << "###########################" << endl;
    cout << "#                         #" << endl;
    cout << "#                         #" << endl;
    cout << "#                         #" << endl;
    cout << "#                         #" << endl;
    cout << "#                         #" << endl;
    cout << "#                         #" << endl;
    cout << "#                         #" << endl;
    cout << "#                         #" << endl;
    cout << "#                         #" << endl;
    cout << "#                         #" << endl;
    cout << "#                         #" << endl;
    cout << "#                         #" << endl;
    cout << "#                         #" << endl;
    cout << "#                         #" << endl;
    cout << "#                         #" << endl;
    cout << "#                         #" << endl;
    cout << "#                         #" << endl;
    cout << "###########################" << endl;
}


void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

char getCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = { 0, 0 };
    SMALL_RECT rect = { x,y,x,y };
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}


void printSpace(int x, int y)
{
    gotoxy(x, y);
    cout << " ";
}

void printPacman(int x, int y)
{
    gotoxy(x, y);
    cout << "P";
}