/***********************************************************************************
 *  File         : main.cpp
 *  Project      : Comunicação Digital para Sistemas Embarcados
 *  Description  : [Breve descrição do que este arquivo faz, ex: simula constelação QPSK]
 *
 *  Created on   : Jun 25, 2025
 *  Author       : Lucas Machado
 *  Organization : IMBEL / FMCE
 *  License      : MIT License (ver LICENSE)
 *
 *  Notes:
 *    - Parte do plano de estudo pessoal para arquitetura de sistemas embarcados.
 *    - Fase 1: Fundamentos de Comunicação Digital (modulação, canais, OFDM)
 *
 *  References:
 *    - Proakis, Digital Communications, 5ª ed.
 *    - The Scientist and Engineer’s Guide to DSP
 *    - GNU Radio / SDR Applications
 *
 ***********************************************************************************/


#include <iostream>
#include "qpsk.hpp"  // você define funções aqui

using namespace std;

int main() {
    int opcao;
    cout << "=== Comunicação Digital ===\n";
    cout << "1. Simular constelação QPSK\n";
    cout << "2. Calcular BER QPSK\n";
    cout << "3. Sair\n";
    cout << "Escolha: ";
    cin >> opcao;

    switch (opcao) {
        case 1:
            qpsk_constellation();
            break;
        case 2:
            qpsk_ber_simulation();
            break;
        default:
            cout << "Saindo...\n";
    }

    return 0;
}


