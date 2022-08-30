#include <iostream>
#include <time.h>
#include <windows.h>

class ABS { //Classe do ABS que é responsável por representar, simular e testar o ABS específicado.

    private:

        bool roda_travada; //Atributos da classe são privados pois o ABS é um sistema crítico e necessita o máximo de segurança.
        bool abs_ativado;

    public:

        ABS() { //Construtor da classe que possui apenas 2 bool's que informam se a roda está travada e se o ABS está ativado
            roda_travada = false;
            abs_ativado = false;
        }

        bool sensor_freio(int forca_do_pedal) {
            if (forca_do_pedal > 75) { //Valor de força é gerado alatóriamente e se for maior que 50, o ABS é ativado, ou seja, acima é de 
                roda_travada = true;
                Sleep(0.001);
                return roda_travada;
            } else {
                roda_travada = false;
                return roda_travada;
            }
        }

        bool controlador_abs(int forca_do_pedal) {
            if (sensor_freio(forca_do_pedal) == true) {
                Sleep(0.005);
                abs_ativado = true;
                roda_travada = false;
                return abs_ativado;
            } else {
                abs_ativado = false;
                return abs_ativado;
            }
        }

        bool testar_abs() { //Função que realiza o teste de ABS
            Sleep(0.01);
            return controlador_abs(rand() % 100 + 1);
        }
};