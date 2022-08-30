#include <iostream>
#include <time.h>
#include <windows.h>

class LVT {

    private:

        bool farol_ligado;
        bool travas_ligadas;
        bool vidro_fechado;

    public:

        LVT() {
            farol_ligado = false;
            travas_ligadas = false;
            vidro_fechado = true;
        }

        bool sensor_farol(int comando) {
            if (comando == 2) {
                Sleep(0.001);
                return true;
            }
            else {
                Sleep(0.001);
                return false;
            }
        }

        bool controlador_farol(int comando) {
            if (sensor_farol(comando) == true) {
                Sleep(0.005);
                farol_ligado = true;
                return farol_ligado;
            }
            else {
                Sleep(0.005);
                farol_ligado = false;
                return farol_ligado;
            }
        }

        bool sensor_vidro(int comando) {
            if (comando == 2) {
                Sleep(0.001);
                return true;
            }
            else {
                Sleep(0.001);
                return false;
            }
        }

        bool controlador_vidros(int comando) {
            if (sensor_vidro(comando)) {
                Sleep(0.005);
                vidro_fechado = true;
                return vidro_fechado;
            }
            else {
                Sleep(0.005);
                vidro_fechado = false;
                return vidro_fechado;
            }
        }

        bool sensor_travas(int comando) {
            if (comando == 2) {
                Sleep(0.001);
                return true;
            }
            else {
                Sleep(0.001);
                return false;
            }
        }

        bool controlador_travas(int comando) {
            if (sensor_travas(comando) == true) {
                Sleep(0.005);
                travas_ligadas = true;
                return travas_ligadas;
            }
            else {
                Sleep(0.005);
                travas_ligadas = false;
                return travas_ligadas;
            }
        }

        bool testar_vidros() {
            Sleep(0.01);
            return controlador_vidros(rand() % 2 + 1);
        }

        bool testar_travas() {
            Sleep(0.01);
            return controlador_travas(rand() % 2 + 1);
        }

        bool testar_farol() {
            Sleep(0.01);
            return controlador_farol(rand() % 2 + 1);
        }

};