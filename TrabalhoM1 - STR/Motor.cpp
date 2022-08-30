#include <iostream>
#include <windows.h>
#include <time.h>

class Motor {

    private:

        int temperatura_ideal = 90;
        int temperatura_motor;
        int forca_acelerador;

    public:

        Motor() {
            temperatura_motor = 90;
            forca_acelerador = 0;
        }

        int sensor_temperatura(int variacao_temp) {
            temperatura_motor = temperatura_motor + variacao_temp;
            if (temperatura_motor < (temperatura_ideal - 10)) {
                Sleep(0.001);
                return 1;
            }
            else if (temperatura_motor > (temperatura_ideal + 10)) {
                Sleep(0.001);
                return -1;
            }
            else {
                Sleep(0.001);
                return 0;
            }
        }

        bool controlador_temperatura(int variacao_temp) {
            if (sensor_temperatura(variacao_temp) == 1) {
                Sleep(0.005);
                temperatura_motor = temperatura_motor + 10;
                return true;
            }
            else if (sensor_temperatura(variacao_temp) == -1) {
                temperatura_motor = temperatura_motor - 10;
                Sleep(0.005);
                return true;
            }
            else {
                Sleep(0.005);
                return false;
            }
        }

        bool testar_temperatura() {
            Sleep(0.01);
            return controlador_temperatura(rand() & 21 + (-10));
        }

        bool sensor_injecao_eletronica(int comando) {
            if (comando == 2) {
                Sleep(0.001);
                return true;
            }
            else {
                Sleep(0.001);
                return false;
            }
        }

        bool controlador_injecao_eletronica(int comando) {
            if (sensor_injecao_eletronica(comando) == true) {
                Sleep(0.005);
                return true;
            }
            else {
                Sleep(0.005);
                return false;
            }
        }

        bool testar_injecao_eletronica() {
            Sleep(0.01);
            return controlador_injecao_eletronica(rand() % 2 + 1);
        }

};