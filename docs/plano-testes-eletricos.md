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

Resultado informado: **12,6 V** | Comunicado em 2026-10-26 | Condição exata de repouso não especificada

### T2 — Tensão durante a partida

1. Manter pontas **nos polos da bateria**, presas de modo seguro.
2. Com ajuda, acionar o motor de partida por poucos segundos.
3. Registrar a menor tensão possível de observar; a função MIN/MAX do multímetro ajuda se existir.

Referência orientativa: queda abaixo de aproximadamente 9,6 V em condições usuais merece investigar bateria, cabos, conexões ou motor de partida. Valor varia com temperatura e condições de teste.

Resultado informado: **10,8 V** | Comunicado em 2026-10-26 | Medição durante a partida

### T3 — Tensão de carga

1. Com motor funcionando, medir V DC entre os polos da bateria.
2. Registrar em marcha lenta e, se seguro, em rotação um pouco superior.

Referência genérica: ~13,8–14,7 V costuma indicar carga normal, mas depende do regulador e das condições.

Resultado informado com motor funcionando: **13,8 a 14,0 V** | Comunicado em 2026-10-26 | Rotação não especificada

### T4 — Queda de tensão no aterramento do motor durante a partida

1. Com motor desligado, fixar ponta preta no **polo negativo da bateria**.
2. Fixar ponta vermelha em metal limpo do **bloco do motor**.
3. Acionar o motor de partida com ajuda e registrar V DC, sem colocar mãos perto de peças móveis.

Desejável: o mais perto de zero possível. ~0,2 V ou menos é um bom sinal inicial; ~0,5 V ou mais sugere investigar conexões/cabo de massa, considerando a corrente e os pontos reais de medição.

Resultado informado: **0,27 V** | Comunicado em 2026-10-26 | Pontos exatos de contato não especificados

### Interpretação após T1–T4

Comparar resultados em conjunto; se algum for anômalo, avaliar conexões, aterramentos e bateria antes de avançar. Tensão normal não descarta falha intermitente do Hall, módulo, cabos, tampa ou rotor.

### T5 — Queda de tensão na alimentação da bobina durante a partida (próximo teste)

**Antes de medir:** identificar visualmente a bobina nova e seu terminal positivo **15/+**. Bobinas com conectores diferentes exigem pinagem confirmada por código/esquema; não adivinhar. Não tocar em borne 1/– ou cabos de alta tensão. Não usar escala de corrente/ohms.

1. Com motor desligado, câmbio em ponto morto e freio de mão acionado, ajustar multímetro em **V DC**.
2. Fixar ponta **vermelha no polo positivo da bateria** e ponta **preta no terminal de alimentação 15/+ da bobina**, se esse terminal for inequivocamente identificado e acessível.
3. Prender as pontas fora do alcance de partes móveis; pedir ajuda para dar partida brevemente e registrar a leitura de queda de tensão, preferencialmente com MAX se disponível.
4. Registrar também a tensão da bateria durante a partida na mesma condição, para referência.

**Interpretação:** queda pequena indica alimentação mais preservada. Perdas repetíveis próximas de 0,5 V ou maiores merecem investigação de chave de ignição, terminais, conectores e fiação, **considerando se o circuito possui resistência intencional**. Não há valor específico confirmado aqui para a configuração modificada de bobina/módulo.

Resultado: ____ V | Código da bobina: ____ | Observações: ____

## Rodada 2 — identificação e inspeção

- [x] Identificar bobina atual: Magneti Marelli BI0016MM; terminais da alimentação de baixa tensão ainda a fotografar/confirmar.
- [x] Fotografar módulo de ignição: Bosch 0 227 100 142 / VW 191 905 351 A.
- [ ] Fotografar distribuidor e, com motor desligado, inspecionar tampa/rotor/cabos em busca de trincas, corrosão, carbonização, umidade, conexões frouxas.
- [ ] Conferir fixação e oxidação de conectores de baixa tensão e pontos de terra.
- [ ] Identificar se o sistema está original ou foi adaptado.
- [ ] **Só depois de identificar a bobina e módulo**, verificar compatibilidade elétrica conforme documentação confiável.

### Inspeção preliminar do módulo (2026-10-26)

- [ ] Com chave desligada, conferir se a mola/retentor visualizado nas fotos realmente mantém o conector de sete vias totalmente assentado.
- [ ] Sem puxar pelos fios, verificar visualmente fios ressecados, emendas, oxidação e folga no chicote.
- [ ] Fotografar os dois terminais de baixa tensão da BI0016MM e eventual adaptador antes de T5; confirmar 15/+ pelo corpo da peça ou documentação.
- [ ] Conferir que os pontos de fixação do módulo estejam firmes; não concluir que furos livres significam defeito de montagem.

**Cautela:** não presumir incompatibilidade só porque a BI0016MM foi catalogada pela VW para AP Mi após 1996: há kit comercial com módulo equivalente Bosch 142. A compatibilidade elétrica de funcionamento e a adaptação de chicote devem ser verificadas sem alterar ligações no escuro.

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

**Status em 2026-10-26:** T1–T4 concluídos conforme leituras relatadas; T5 pendente de confirmação do terminal 15/+ da bobina nova. A medição de aterramento de 0,27 V está ligeiramente acima do alvo conservador, mas ainda não configura defeito demonstrado.
