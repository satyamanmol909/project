#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

enum direction { stop = 0, lef, ri, up, down };
direction dir;
bool gameover;
const int height = 20;
const int width = 20;
int headx, heady, fruitx, fruity, score;
int tail_len;
int tailx[200], taily[200];

void setup();
void draw();
void input();
void logic();

int main() {
    char start;
    cout << "\t-------------------------\n";
    cout << "\t\t:snake king:\n";
    cout << "Press 's' to start: ";
    cin >> start;
    
    if (start == 's') {
        setup();
        while (!gameover) {
            draw();
            input();
            logic();
            Sleep(350);  // Slowing down the game speed a bit
            system("cls");
        }
    }
    return 0;
}

void setup() {
    gameover = false;
    headx = width / 2;
    heady = height / 2; // Initialize heady
    dir = stop;
    fruitx = rand() % width;
    fruity = rand() % height;
    score = 0;
    tail_len = 0;  // Initialize tail length
}

void draw() {
    system("cls");
    
    // Top border
    for (int i = 0; i < width + 2; i++)
        cout << "#";
    cout << endl;

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (j == 0)
                cout << "#"; // Left border

            if (i == heady && j == headx)
                cout << "O";  // Snake head
            else if (i == fruity && j == fruitx)
                cout << "*";  // Fruit
            else {
                bool printTail = false;
                for (int k = 0; k < tail_len; k++) {
                    if (tailx[k] == j && taily[k] == i) {
                        cout << "o";  // Snake tail
                        printTail = true;
                    }
                }
                if (!printTail)
                    cout << " "; // Empty space
            }

            if (j == width - 1)
                cout << "#"; // Right border
        }
        cout << endl;
    }

    // Bottom border
    for (int i = 0; i < width + 2; i++)
        cout << "#";
    cout << endl;

    cout << "Score: " << score << endl;
}

void input() {
    if (_kbhit()) {
        switch (_getch()) {
            case 'a':
                dir = lef;
                break;
            case 'd':
                dir = ri;
                break;
            case 'w':
                dir = up;
                break;
            case 's':
                dir = down;
                break;
            default:
                break;
        }
    }
}

void logic() {
    int prevX = tailx[0];
    int prevY = taily[0];
    int prev2X, prev2Y;
    tailx[0] = headx;
    taily[0] = heady;

    for (int i = 1; i < tail_len; i++) {
        prev2X = tailx[i];
        prev2Y = taily[i];
        tailx[i] = prevX;
        taily[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }

    switch (dir) {
        case lef:
            headx--;
            break;
        case ri:
            headx++;
            break;
        case up:
            heady--;
            break;
        case down:
            heady++;
            break;
        default:
            break;
    }

    // Wrap around the map
    if (headx >= width) headx = 0; else if (headx < 0) headx = width - 1;
    if (heady >= height) heady = 0; else if (heady < 0) heady = height - 1;

    // Check if snake bites itself
    for (int i = 0; i < tail_len; i++) {
        if (tailx[i] == headx && taily[i] == heady)
            gameover = true;
    }

    // Check if snake eats the fruit
    if (headx == fruitx && heady == fruity) {
        score += 10;
        fruitx = rand() % width;
        fruity = rand() % height;
        tail_len++;
    }
}
