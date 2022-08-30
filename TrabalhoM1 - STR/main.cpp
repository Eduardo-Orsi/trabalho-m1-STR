#include <iostream>
#include <windows.h>
#include <time.h>
#include "computador_de_bordo.cpp"

int main() {
    srand(time(NULL));
    ABS roda_direita, roda_esquerda;
    ComputadorDeBordo computador_de_bordo(roda_esquerda, roda_direita);
    for (int i = 0; i < 100; i++) {
        system("cls");
        computador_de_bordo.testar();
        Sleep(500);
    }
    system("pause");
    return 0;
}