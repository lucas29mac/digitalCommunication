///***********************************************************************************
// *  File         : qpskDemodBer.cpp
// *  Project      : Comunicação Digital para Sistemas Embarcados
// *  Description  : Simula QPSK sobre canal AWGN e calcula BER (Bit Error Rate)
// *
// *  Created on   : Jun 25, 2025
// *  Author       : Lucas Machado
// *  Organization : IMBEL / FMCE
// *  License      : MIT License (ver LICENSE)
// *
// *  Notes:
// *    - Parte do plano de estudo pessoal para arquitetura de sistemas embarcados.
// *    - Fase 1: Fundamentos de Comunicação Digital (modulação, canais, OFDM)
// *
// *  References:
// *    - Proakis, Digital Communications, 5ª ed.
// *    - The Scientist and Engineer’s Guide to DSP
// *    - GNU Radio / SDR Applications
// *
// ***********************************************************************************/
//
//
//
//#include <iostream>
//#include <vector>
//#include <complex>
//#include <random>
//#include <cmath>
//
//using namespace std;
//
//int main() {
//    const int N = 100000;          // Número de símbolos
//    const double EbN0_dB = 6;      // Eb/N0 em dB
//    const double EbN0 = pow(10.0, EbN0_dB / 10.0);
//    const double noise_std = 1.0 / sqrt(2.0 * EbN0);
//
//    vector<int> tx_bits(2 * N);    // Vetor de bits transmitidos
//    vector<int> rx_bits(2 * N);    // Vetor de bits recebidos
//
//    random_device rd;
//    mt19937 gen(rd());
//    uniform_int_distribution<> bit_dist(0, 1);
//    normal_distribution<> noise_dist(0.0, noise_std);
//
//    for (int i = 0; i < N; ++i) {
//        int b1 = bit_dist(gen);
//        int b2 = bit_dist(gen);
//        tx_bits[2 * i]     = b1;
//        tx_bits[2 * i + 1] = b2;
//
//        // QPSK Mapping: I = ±1, Q = ±1
//        double I = (b1 == 0) ? 1.0 : -1.0;
//        double Q = (b2 == 0) ? 1.0 : -1.0;
//        complex<double> s(I, Q);
//        s /= sqrt(2.0);  // Normalização de energia
//
//        // AWGN
//        complex<double> n(noise_dist(gen), noise_dist(gen));
//        complex<double> r = s + n;
//
//        // Demodulação por decisão dura (hard decision)
//        rx_bits[2 * i]     = (r.real() >= 0) ? 0 : 1;  // I
//        rx_bits[2 * i + 1] = (r.imag() >= 0) ? 0 : 1;  // Q
//    }
//
//    // Cálculo da BER
//    int errors = 0;
//    for (int i = 0; i < 2 * N; ++i) {
//        if (tx_bits[i] != rx_bits[i]) {
//            ++errors;
//        }
//    }
//
//    double ber = static_cast<double>(errors) / (2 * N);
//    cout << "=== Simulação QPSK ===" << endl;
//    cout << "Bits transmitidos: " << 2 * N << endl;
//    cout << "Eb/N0: " << EbN0_dB << " dB" << endl;
//    cout << "Erros de bit: " << errors << endl;
//    cout << "BER estimada: " << ber << endl;
//
//    return 0;
//}
//
//
