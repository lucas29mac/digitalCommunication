///***********************************************************************************
// *  File         : qpskConstellation.cpp
// *  Project      : Comunicação Digital para Sistemas Embarcados
// *  Description  :  Gera constelação QPSK com ruído AWGN e exporta para arquivo CSV
//    Leitura recomendada:
//
//    Proakis – Cap. 4.1: Signal Space Representation
//
//    DSP Guide – Capítulo 13: "Digital Modulation"
//
//    QPSK: Conceito e Implementação Matemática (2h)
//
//    Mapeamento de bits (00 → 45°, 01 → 135°…)
//
//    Sinal QPSK:
//    s(t)=Acos⁡(2πfct+θ)=Icos⁡(2πfct)−Qsin⁡(2πfct)
//    s(t)=Acos(2πfc​t+θ)=Icos(2πfc​t)−Qsin(2πfc​t)
//
//	Leitura recomendada:
//
//    Proakis – Cap. 5.2.1: QPSK
//
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
//#include <iostream>
//#include <fstream>
//#include <cmath>
//#include <complex>
//#include <vector>
//#include <random>
//
//using namespace std;
//
//int main() {
//    const int N = 1000;         // Símbolos
//    const double EbN0_dB = 10;  // Eb/N0 em dB
//    const double EbN0 = pow(10, EbN0_dB / 10.0);
//    const double noise_std = 1.0 / sqrt(2.0 * EbN0);
//
//    vector<complex<double>> symbols;
//    vector<complex<double>> received;
//
//    // Gerador de bits aleatórios
//    random_device rd;
//    mt19937 gen(rd());
//    uniform_int_distribution<> bitDist(0, 1);
//    normal_distribution<> noise(0.0, noise_std);
//
//    for (int i = 0; i < N; ++i) {
//        int b1 = bitDist(gen);
//        int b2 = bitDist(gen);
//
//        // QPSK: (00 → 1+i), (01 → -1+i), (10 → 1−i), (11 → -1−i)
//        double I = (b1 == 0) ? 1.0 : -1.0;
//        double Q = (b2 == 0) ? 1.0 : -1.0;
//
//        complex<double> s(I, Q);
//        s /= sqrt(2.0);  // Normalização
//
//        // Adiciona ruído gaussiano
//        complex<double> n(noise(gen), noise(gen));
//        complex<double> r = s ;
//
//        symbols.push_back(s);
//        received.push_back(r);
//    }
//
//    // Salva os dados recebidos em CSV
//    ofstream file("constellation.csv");
//    if (file.is_open()) {
//        file << "I,Q\n";
//        for (const auto& r : received) {
//            file << r.real() << "," << r.imag() << "\n";
//        }
//        file.close();
//        cout << "[✔] Constelação salva em constellation.csv" << endl;
//    } else {
//        cerr << "[✘] Erro ao salvar arquivo" << endl;
//    }
//
//    return 0;
//}
//
//
