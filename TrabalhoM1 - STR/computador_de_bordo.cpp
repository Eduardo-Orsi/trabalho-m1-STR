#include <iostream>
#include "ABS.cpp"
#include "Motor.cpp"
#include "SuporteVida.cpp"
#include "LVT.cpp"
#include <time.h>

class ComputadorDeBordo {

    private:

        ABS roda_esquerda, roda_direita;
        Motor motor;
        SuporteVida suporte_vida;
        LVT farol, vidros, travas;

    public:

        ComputadorDeBordo(ABS roda_esquerda, ABS roda_direita, Motor motor, SuporteVida suporte_vida, LVT farol, LVT vidros, LVT travas) {
            srand(time(NULL));
            roda_direita = roda_direita;
            roda_esquerda = roda_esquerda;
            motor = motor;
            suporte_vida = suporte_vida;
            farol = farol;
            vidros = vidros;
            travas = travas;
        }

        void testar() {
            if (roda_direita.testar_abs() == true || roda_esquerda.testar_abs() == true) {
                std::cout << "ABS ATIVADO" << std::endl;
            } else {
                std::cout << "NADA ACONTECEU" << std::endl;
            }
        }

};