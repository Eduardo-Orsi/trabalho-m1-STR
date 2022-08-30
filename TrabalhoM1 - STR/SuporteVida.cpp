#include <iostream>
#include <windows.h>
#include <time.h>

class SuporteVida {

    private:

        bool airbag;
        bool passageiro_sem_cinto_de_seguranca;
        bool batida;

    public:

        SuporteVida() {
            airbag = false;
            batida = false;
            passageiro_sem_cinto_de_seguranca = false;
        }

        bool sensor_cinto_de_seguranca(int comando) {
            if (comando == 2) {
                Sleep(0.001);
                return false;
            }
            else {
                Sleep(0.001);
                passageiro_sem_cinto_de_seguranca = true;
                return passageiro_sem_cinto_de_seguranca;
            }
        }

        bool controlador_cinto_de_seguranca(int comando) {
            if (sensor_cinto_de_seguranca(comando) == true) {
                Sleep(0.005);
                passageiro_sem_cinto_de_seguranca = false;
                return passageiro_sem_cinto_de_seguranca;
            }
            else {
                Sleep(0.005);
                passageiro_sem_cinto_de_seguranca = false;
                return passageiro_sem_cinto_de_seguranca;
            }
        }

        bool sensor_airbag(int comando) {
            if (comando > 800) {
                Sleep(0.001);
                return true;
            }
            else {
                return false;
            }
        }

        bool controlador_airbag(int comando) {
            if (sensor_airbag(comando) == true) {
                Sleep(0.005);
                airbag = true;
                return true;
            }
            else {
                Sleep(0.005);
                airbag = false;
                return false;
            }
        }

        bool testar_cinto_de_seguranca() {
            Sleep(0.01);
            return controlador_cinto_de_seguranca(rand() % 2 + 1);
        }

        bool testar_airbag() {
            Sleep(0.01);
            return controlador_airbag(rand() % 1000 + 1);
        }
};