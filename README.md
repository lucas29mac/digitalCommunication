# 📡 Comunicação Digital para Sistemas Embarcados e Militares – Fase 1

Este repositório reúne simulações e anotações da **Fase 1 (Meses 1–3)** do plano de estudos voltado à formação para atuar como **Embedded OS Architect** com foco em comunicações militares, guerra eletrônica (EW) e SDR (Software Defined Radio).

## 🎯 Objetivo

Explorar, simular e entender os principais conceitos da **camada física de comunicação digital**, com foco em:

- Modulações digitais (QPSK, 16-QAM, 64-QAM)
- OFDM com prefixo cíclico (CP)
- Canais reais (AWGN e Rayleigh)
- Avaliação de desempenho via BER
- Aplicações práticas em rádios militares e sistemas de guerra eletrônica

---

## 📚 Estrutura

| Semana | Tema                                  | Conteúdo                                          |
|--------|----------------------------------------|--------------------------------------------------|
| 1      | Representação de Sinais & QPSK         | Modulação QPSK, I/Q, canal AWGN                  |
| 2      | QAM e BER                              | Simulação de 16-QAM, curva BER x SNR             |
| 3      | OFDM com CP                            | Sistema OFDM completo, FFT/IFFT, simulação       |
| 4      | Canal Rayleigh & Consolidação          | OFDM em Rayleigh, equalização, comparação geral  |

---

## 🛠️ Requisitos

- Python 3.8+
- `numpy`
- `matplotlib`

Instalação rápida:

```bash
pip install numpy matplotlib

🚀 Como executar os exemplos

Cada pasta contém um script principal e gráficos gerados para facilitar a análise.

cd semana2
python qam_ber_simulation.py

🧪 Projetos por Semana
📁 semana1/

    Simulação QPSK com canal AWGN

    Geração e visualização de constelação

📁 semana2/

    QPSK e 16-QAM com cálculo de BER

    Comparação de desempenho

📁 semana3/

    Sistema OFDM com CP e canal AWGN

    Visualização após FFT

📁 semana4/

    Canal Rayleigh com QPSK e OFDM

    Equalização simples e comparação com AWGN

📈 Exemplos de Resultados

    Curva BER x Eb/N0 para diferentes modulações

    Constelações distorcidas sob ruído

    Efeito da ausência do CP no desempenho da OFDM

🛰️ Aplicações Reais

Este estudo é diretamente aplicável em:

    SDRs militares (ex: rádios Imbel, Harris Falcon, Link-16)

    Sistemas MANET em ambientes móveis ou urbanos

    Design de camada física para arquiteturas baseadas em SCA (Software Communications Architecture)

📄 Licença

Este projeto está licenciado sob a MIT License – veja o arquivo LICENSE para detalhes.
👨‍💻 Autor

Lucas Machado
Engenheiro de Telecomunicações · IME · FMCE/IMBEL
Estudos autônomos em sistemas embarcados, guerra eletrônica e arquitetura de OS.
