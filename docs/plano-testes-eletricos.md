# Plano de testes elétricos — Parati AP 1.8 1993

**Objetivo:** investigar falhas intermitentes, partida longa e perda de desempenho sem substituições por tentativa. Começar com medições de baixa tensão. Nenhum passo abaixo valida sozinho a integridade de todo o sistema de ignição.

## Segurança antes de começar

- Carro parado, câmbio em ponto morto, freio de estacionamento acionado, ambiente ventilado.
- Ao medir durante partida, preferir pontas de prova com garras fixadas com motor desligado, fora do alcance de ventoinha, correias e polias. Outra pessoa opera a chave.
- **Nunca** tocar ou retirar cabos de vela/bobina com motor funcionando: há alta tensão.
- Resistência/continuidade **apenas com circuito desenergizado** e após identificar os terminais.
- Não colocar multímetro na escala de corrente em paralelo com a bateria, bobina, módulo ou sensor Hall.
- Não usar lâmpada de teste comum nos pinos do Hall/módulo antes de confirmar diagrama e características elétricas.
- A alicate amperímetro só mede corrente contínua (DC) se o modelo tiver essa função; não presumir que a medição AC se aplica à partida.

## Rodada 1 — alimentação e aterramento

### T1 — Bateria em repouso

1. Após repouso sem motor, ajustar multímetro para V DC.
2. Ponta vermelha no **polo** positivo; preta no **polo** negativo (não apenas nos grampos).
3. Registrar tensão, condições e tempo de repouso.

Valor orientativo: cerca de 12,6 V numa bateria de chumbo-ácido carregada em repouso. Não transformar referência genérica em diagnóstico isolado.

Resultado: ____ V | Data: ____ | Condição: ____

### T2 — Tensão durante a partida

1. Manter pontas **nos polos da bateria**, presas de modo seguro.
2. Com ajuda, acionar o motor de partida por poucos segundos.
3. Registrar a menor tensão possível de observar; a função MIN/MAX do multímetro ajuda se existir.

Referência orientativa: queda abaixo de aproximadamente 9,6 V em condições usuais merece investigar bateria, cabos, conexões ou motor de partida. Valor varia com temperatura e condições de teste.

Resultado: ____ V | Data: ____ | Observações: ____

### T3 — Tensão de carga

1. Com motor funcionando, medir V DC entre os polos da bateria.
2. Registrar em marcha lenta e, se seguro, em rotação um pouco superior.

Referência genérica: ~13,8–14,7 V costuma indicar carga normal, mas depende do regulador e das condições.

Marcha lenta: ____ V | Rotação superior: ____ V | Data: ____

### T4 — Queda de tensão no aterramento do motor durante a partida

1. Com motor desligado, fixar ponta preta no **polo negativo da bateria**.
2. Fixar ponta vermelha em metal limpo do **bloco do motor**.
3. Acionar o motor de partida com ajuda e registrar V DC, sem colocar mãos perto de peças móveis.

Desejável: o mais perto de zero possível. ~0,2 V ou menos é um bom sinal inicial; ~0,5 V ou mais sugere investigar conexões/cabo de massa, considerando a corrente e os pontos reais de medição.

Resultado: ____ V | Data: ____ | Pontos exatos de contato: ____

### Interpretação após T1–T4

Comparar resultados em conjunto; se algum for anômalo, avaliar conexões, aterramentos e bateria antes de avançar. Tensão normal não descarta falha intermitente do Hall, módulo, cabos, tampa ou rotor.

## Rodada 2 — identificação e inspeção

- [ ] Fotografar bobina atual e registrar fabricante/código/terminais.
- [ ] Fotografar módulo de ignição e código.
- [ ] Fotografar distribuidor e, com motor desligado, inspecionar tampa/rotor/cabos em busca de trincas, corrosão, carbonização, umidade, conexões frouxas.
- [ ] Conferir fixação e oxidação de conectores de baixa tensão e pontos de terra.
- [ ] Identificar se o sistema está original ou foi adaptado.
- [ ] **Só depois de identificar a bobina e módulo**, verificar compatibilidade elétrica conforme documentação confiável.

## Rodada 3 — testes condicionais

- Testar sinal do sensor Hall apenas depois de determinar pinagem, alimentação e circuito correto. Uma ferramenta caseira é opção, **não** conectar LED diretamente aos pinos sem dimensionamento.
- Verificar ponto estático/dinâmico e avanço com equipamento apropriado quando houver oportunidade. Multímetro sozinho não mede corretamente curva de avanço.
- Registrar se a falha aparece com motor quente, úmido, em aceleração ou após frenagem. Isso ajuda a reproduzir o defeito.

## Modelo de registro de execução

```text
Data / hora:
Teste:
Motor: frio / quente
Condição:
Instrumento (modelo, escala):
Leitura(s):
Valor de comparação / fonte:
Observação:
Conclusão: normal / anômalo / inconclusivo
Próximo passo:
```

**Status:** nenhum teste desta lista foi declarado como executado até a criação do documento (2026-10-25).
