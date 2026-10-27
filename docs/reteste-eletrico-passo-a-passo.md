# Reteste elétrico — sequência controlada (2026-10-27)

## Finalidade
Repetir testes do circuito de ignição da Parati 1993 AP 1.8 carburada com rigor, um teste por vez, evitando misturar condições de conector solto/encaixado ou motor parado/em partida.

### Motivo do reinício
Leituras anteriores: chicote da bobina desconectado, chave ligada, fio preto → negativo bateria 12,6 V e fio vermelho → negativo 2,67 V; posteriormente, bateria positiva → fio preto 12,6 V com chave ligada, e 0,5–3 V durante partida. Não foi confirmado se o chicote permaneceu desconectado na segunda rodada.

Com o mesmo estado do circuito, as duas leituras de 12,6 V sobre o fio preto referenciadas a ambos os polos não podem ser simultaneamente corretas com a bateria em 12,6 V. Necessário repetir sem mudar conexões e definir os pontos de referência.

## Segurança e padronização
- Estacionar em piso plano, câmbio em neutro, freio de mão acionado, ambiente ventilado.
- Usar multímetro em **V DC**; cabo preto na entrada **COM**, vermelho na entrada **V/Ω**, nunca na entrada A/10A para medir tensão.
- Em cada teste anotar **chave (desligada/ligada/partida), conector (solto/encaixado), ponta vermelha, ponta preta e valor inclusive sinal +/−**.
- Primeiro ligar o multímetro, depois encostar as pontas. Se possível, prender as pontas com motor desligado; não se aproximar de polias/ventoinha durante partida.
- Nunca tocar em componentes da alta tensão de ignição com motor em funcionamento.
- Não aterrar fio de comando da bobina ou módulo e não usar lâmpada automotiva de testes nele.
- Ligar a chave pelo tempo mínimo necessário, sobretudo se a bobina estiver encaixada; não deixar chave ligada prolongadamente com motor parado.
- Evitar tocar simultaneamente nos dois contatos do conector; sem pontas adequadas, interromper.

## Plano por etapas (executar uma de cada vez)
1. **T0 — Validar instrumento e referência.** Chave desligada, conector da bobina pode permanecer **encaixado**; medir nos polos metálicos da bateria com vermelho no positivo e preto no negativo. Anotar valor e sinal. Meta: medir uma leitura de referência coerente, sem número fixo obrigatório.
2. **T1 — Verificar repouso do chicote.** Desligar chave, desconectar apenas plugue de dois fios da bobina (não mexer no cabo de alta); preta do multímetro no negativo da bateria, vermelha no fio preto do **chicote**. Depois, em teste separado, vermelha no contato do fio vermelho. Chave desligada. Anotar cada leitura. Não confundir com terminal da bobina.
3. **T2 — Identificar pós-chave.** Mesmo conector **solto**, chave **ligada** brevemente; preta no negativo da bateria, vermelha no contato do fio preto do chicote. Anotar e desligar chave.
4. **T3 — Medir fio vermelho sem carga.** Mesmo conector **solto**, chave **ligada** brevemente; preta negativo bateria, vermelha contato fio vermelho. Leitura de um terminal controlado por eletrônica em aberto não prova integridade/defeito de módulo. Desligar chave.
5. **T4 — Conferir fechamento de tensões.** Mesmo conector **solto**, chave **ligada** brevemente, medir em sequência sem manipular chicote (A) vermelho no positivo bateria/preta no negativo; (B) vermelho contato fio preto/preta negativo; (C) vermelho positivo bateria/preta contato fio preto. Conferir A ≈ B + C considerando polaridade. A leitura C deveria ser ~0 V se A e B coincidirem; se não, investigar erros de referência/contato antes de avançar. Desligar chave.
6. **T5 — Identificar fisicamente o borne de alimentação da bobina.** Confirmar gravações 15/+ e 1/− por peça/manual/pinagem sem confiar apenas em cor. Com chave desligada, reconectar o plugue e verificar trava/contatos. Caso ligação não identificável ou insegura, não avançar para T6.
7. **T6 — Medir sob carga na bobina.** Usar conector encaixado com ferramenta de backprobe/adaptador sem danificar isolamento; ponta vermelha bateria + e ponta preta borne 15/+ devidamente identificado. Com ajuda, dar partida curta e medir queda de tensão, comparando com a tensão da bateria sob partida. Nunca tocar saída chaveada 1/−, não perfurar fios. Uma queda maior que ~0,5 V é alerta genérico que exige análise do circuito e se há resistência intencional; não condenar módulo ou bobina por essa leitura isolada.
8. **T7 — Sensor Hall e módulo.** Apenas depois de conhecer conexões e ter esquema confiável, verificar alimentação, massa e sinal usando instrumento adequado (sem LED ou lâmpada ligado direto).
9. **T8 — Distribuição de alta tensão e avanço.** Inspeção da tampa, rotor, cabos e velas; resistência segundo especificação e, quando disponível, pistola de ponto para verificar avanço. Não medir alta tensão com multímetro comum.

## Estado
**Reinício solicitado em 2026-10-27. Próxima execução = T0, exclusivamente**. Testes seguintes aguardam resultados revisados. Nenhuma peça condenada por enquanto.

## Referência
Fluke, *Diagnosing Voltage Drops: Electrical Automotive Troubleshooting*: https://www.fluke.com/en/learn/blog/automotive/electrical-automotive-troubleshooting
