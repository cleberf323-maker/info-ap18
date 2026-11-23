# Conta-giros portátil Arduino Uno + Samsung M20 — situação em 2026-11-23

> Objetivo restrito: medir a rotação do motor AP 1.8 gasolina da Parati 1993 durante diagnóstico e regulagem. O instrumento é provisório, NÃO será instalado permanentemente no painel. Não confundir medição de RPM com verificação do avanço em graus.

## 1. Conjunto utilizado

- Arduino Uno R3, computador com IDE Arduino, celular Samsung Galaxy M20 (Android, USB-C), hub USB-C com USB-A, aplicativo **Serial USB Terminal** (CH34x reconhecido), serial **9600 baud**.
- Multímetro **ANENG ST180**; modo Hz usado para sondagens; atenção à unidade `mV` exibida pelo instrumento.
- Optoacoplador **ORPC 817A** de 4 pinos, retirado de placa sucata; foram encontrados dois exemplares.
- Resistor **4,7 kΩ / 0,5 W** (quatro faixas: amarelo-violeta-vermelho-dourado); resistor **1 kΩ** usado em testes 5 V (marrom-preto-vermelho-dourado, se quatro faixas e ±5%); diodo comum **1N4007**.
- Regra operacional: sempre informar **faixas de cores** junto com valor de resistor e potência; confirmar no multímetro, não inferir potência pelas cores.
- Fontes ATX e outras placas chaveadas disponíveis como sucata; evitar compras de componentes avulsos por frete/demora.

## 2. Identificação da ignição e sinais

- Módulo: **Bosch 0 227 100 142 / VW 191 905 351 A**, sete posições. **Pino 7** estava sem contato no chicote original; foi colocado fio provisório para teste. Saída identificada como **TACO**, com atribuição reforçada por ensaio experimental.
- Bobina atual **Magneti Marelli BI0016MM**, adaptada; documentação anterior contém pendências elétricas independentes deste instrumento.
- Painel satélite de 1993 SEM conta-giros: velocímetro por cabo, temperatura, combustível, relógio analógico e LEDs.
- Distribuidor com sensor Hall de três fios; cores observadas no chicote coincidem com referência consultada: **vermelho/preto, marrom/branco e verde/branco**. Cores não substituem identificação elétrica; veículo antigo e adaptado.
- Chave ligada, motor parado: alimentação do Hall (vermelho/preto) medida em **11,18 V**; sinal central foi de **58 mV** a **8,91 V** ao movimentar o virabrequim à mão. Referências exatas dos pontos de prova estão nos relatos; não generalizar tensão do sensor.
- Teste mecânico: marca de giz na polia do **virabrequim**, **duas voltas completas**; sinal Hall alternou **quatro ciclos alto/baixo** (começou alto); saída TACO no pino 7 também alternou **quatro ciclos**, começando baixo na mesma posição. Estados opostos são **compatíveis** com inversão, não demonstram por si só circuito inversor.
- Logo, na posição/teste manual: **2 ciclos por volta** no TACO, fator de conversão **RPM = Hz × 60 / 2 = Hz × 30**.
- Com motor funcionando em lenta, pino 7 medido em torno de **20 Hz** com o ANENG; frequência subia com aceleração. **20 Hz implicariam 600 RPM se a leitura Hz for fiel** — ainda sem confirmação independente em regime dinâmico. Hz do sinal Hall/pino 6 oscilou muito (20–46 Hz e outras leituras), não usar como prova de defeito. 
- Pino 7 em V DC: chave desligada **0 V**; chave ligada motor parado **134,0 mV = 0,134 V** (unidade `mV` foi confirmada; NÃO eram 134 V); em marcha lenta cerca de **10 V DC de valor médio**, caindo à medida que acelerava. Medição DC não informa pico positivo, forma de onda nem duração de transientes.

## 3. Medições e testes de bancada concluídos

1. Android reconheceu interface serial USB CH34x via hub; sketch inicial imprimiu `RPM: 950` repetidamente.
2. Primeiro gerador por `tone()` falhou em 30 Hz (leituras ~58.600 RPM); substituído por gerador com `micros()`; **900, 1.500, 3.000 RPM** corretos.
3. Optoacopladores fora da placa: ambos apresentaram **1,052 V** no LED pinos 1→2 em teste de diodo, `OL` na inversão, `OL` entre coletor e emissor sem LED excitado. Uma leitura de 0,689 V anterior ocorreu **ainda soldado à placa** e não representa o componente isolado.
4. Teste funcional ORPC com Arduino: D9 → resistor 1 kΩ → pino 1; pino 2 → GND; pino 4 → D2 com `INPUT_PULLUP`; pino 3 → GND. Com LED desligado saída HIGH; ligado saída LOW. Teste aprovado.
5. **Firmware v1.3** com opto entre D9 e D2: gerou e mediu **20, 30, 50, 100 Hz**, equivalentes a **600, 900, 1500, 3000 RPM**, confirmados por captura do Samsung. Pequenas leituras 19, 29, 31 Hz ocorreram próximas a transições de estágio; o teste não caracteriza transientes automotivos.
6. Entrada de **12 V CC independente**: fonte 12 V + → resistor **4,7 kΩ/½ W** → pino 1 do 817; fonte − → pino 2; **1N4007 antiparalelo** ao LED (faixa/cátodo no pino 1; ânodo sem faixa no pino 2). Pino 4 → Arduino D2 com `INPUT_PULLUP`; pino 3 → Arduino GND. **Não unir o GND do Arduino ao negativo da fonte ou do carro**.
7. Após refazer conexões: D2 em relação a GND do Arduino, **fonte 12 V ligada: 0,84 mV (LOW)**; **desligada: 4,86 V (HIGH)**; comutação manual do positivo de 12 V no resistor funcionou. **Teste estático**, não prova resposta a pulsos 12 V nem robustez automotiva.

## 4. Pinagem do ORPC 817A (vista superior, marca do pino 1)

- 1 = ânodo LED; 2 = cátodo LED; 3 = emissor fototransistor; 4 = coletor fototransistor.
- Lado Arduino: 4 → D2; 3 → GND; `INPUT_PULLUP` fornece resistência interna de aproximadamente 20–50 kΩ, **sem pull-up externo necessário nos testes**.
- Lado automotivo proposto: TACO pino 7 → resistor 4,7 kΩ → opto pino 1; opto pino 2 → negativo da bateria/carro; 1N4007 faixa no 1, sem faixa no 2.
- **ALERTA CRÍTICO:** essa ligação automotiva é **proposta experimental não homologada**. O 1N4007 ajuda contra tensão reversa, mas **não limita picos positivos** nem substitui supressão de transientes. A tensão média de 10 V não demonstra amplitude máxima. Não declarar instalação segura ou medição real aprovada. Separação galvânica do opto só existe se não forem unidos os dois terras e se o isolamento físico for respeitado.

## 5. Firmware e situação

- `arduino/contagiros_v1_3_bancada.ino`: **testado e aprovado** para sinais de 5 V passando pelo optoacoplador.
- `arduino/contagiros_v1_4_rpm_real.ino`: programa escrito para ler apenas D2, **não validado na Parati**.
- `arduino/contagiros_v1_5_terminal.ino`: programa escrito para display fixo por sequências ANSI no Serial USB Terminal; **não validado no M20**. Pode depender da configuração/compatibilidade do modo Terminal do aplicativo.
- Nenhum programa implementa verificação completa de pulsos espúrios/ausência de sinal ou calibração independente de RPM no carro.

## 6. Etiqueta ORIGINAL no capô (fotos fornecidas em 2026-11-23)

Tabela impressa, coluna **Gasolina**:
- **Ponto de ignição: 9°**, à velocidade angular de marcha lenta.
- **Marcha lenta nominal: 900 ± 50 RPM**, ou **850–950 RPM**; o alvo nominal é **900**, e 950 é o limite superior, não a única rotação correta.
- **CO: 1,0 ± 0,5%**, medido no tubo de tomada de CO.
- Condições/observações impressas: duto de avanço a vácuo do distribuidor e duto de respiro do cárter desconectados para a regulagem; ventilador e demais consumidores elétricos desligados; temperatura do óleo **80 a 120 °C**; notas condicionais de ar-condicionado/kicker.
- Coluna **Álcool**: ponto **6°**, lenta **900 ± 50 RPM**, CO **1,0 ± 0,5%**. O veículo em estudo usa **gasolina**.
- Código visível da etiqueta: **305 000 289.C**.
- Fotos permanecem no histórico do chat; **não foram anexadas ao repositório**, não afirmar que imagens foram arquivadas.

Frequências de referência no TACO, condicionado o cálculo à fidelidade dos pulsos: **850 RPM = 28,33 Hz; 900 RPM = 30,00 Hz; 950 RPM = 31,67 Hz**.

## 7. Próximas etapas e limitações (não confundir com concluído)

- Projetar/verificar entrada resistente a transientes, limites de corrente do LED e carga imposta ao pino TACO. Sem osciloscópio ou especificação de amplitude máxima, **não afirmar que 4,7 kΩ + 1N4007 é proteção automotiva suficiente**.
- Validar RPM real no motor, verificar ausência de falsos pulsos, comparar leitura do Arduino com referência disponível. Teste manual assegurou fator de pulsos em baixo regime de giro, não a fidelidade eletrônica sob motor funcionando.
- Exibir RPM grande no M20 sem empilhamento de linhas; testar firmware v1.5.
- Instrumento temporário; não iniciar ajustes do ponto/carburador enquanto a medição não for validada. Medir rotação não é o mesmo que medir ponto de ignição em graus.

## 8. Conduta para continuidade

- Preservar resultados originais, não substituir hipóteses por fatos.
- Manter um teste por vez e enviar sketch **completo** em vez de alterações fragmentadas.
- Citar cores e potência de resistores.
- Antes de tocar na ignição, desligar chave, fixar conexões longe de ventoinha, correias e alta tensão; evitar alimentação do celular pelo carro durante testes de isolamento.
