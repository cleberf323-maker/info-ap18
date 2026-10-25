# info-ap18 — Diagnóstico da Parati AP 1.8

Repositório de memória técnica para investigar e corrigir falhas de funcionamento na Parati 1993, motor AP 1.8 a gasolina, carburador Weber TLDZ.

> **Princípio de trabalho:** medir antes de substituir; diferenciar fatos observados, hipóteses e defeitos comprovados; documentar cada teste e sua conclusão.

## Veículo e contexto

- **Veículo:** Volkswagen Parati, ano 1993.
- **Motor:** AP 1.8, gasolina, carburado.
- **Carburador atual:** Weber TLDZ, mesmo modelo do anterior.
- **Carburador recondicionado:** Martins Carburadores, com regulagem em motor de bancada em Taubaté, SP. Informação fornecida: garantia de seis meses (data de início a confirmar).
- **Local de uso:** Campos do Jordão, SP, cerca de 1.600 m de altitude. A diferença de altitude em relação ao local da regulagem pode ser relevante para a mistura; **nenhum ajuste foi diagnosticado como necessário ainda**.
- **Ignição:** bobina substituída recentemente por modelo mais moderno descrito como compatível; modelo, código e compatibilidade elétrica **a confirmar**. A bobina anterior aquecia muito, mas a troca não resolveu os sintomas.

## Sintomas relatados

1. **Partida difícil intermitente**, tanto com motor quente como frio. Algumas vezes demora a pegar; segurar o acelerador totalmente pressionado durante a partida parece ajudar.
2. **Pequena falha na retomada** depois de lombadas, frenagens ou parada em faixa de pedestres. O sintoma **já existia antes** da troca do carburador.
3. **Desempenho fraco em rodovia**, dificuldade para ganhar velocidade rapidamente, percebida **após a troca** do carburador.
4. **Consumo superior ao histórico habitual**; ainda sem medidas numéricas registradas.
5. **Velas examinadas visualmente:** quatro velas fotografadas da esquerda para a direita; a primeira parece mais escurecida/carbonizada do que as outras. A relação entre a ordem na foto e os cilindros 1–4 **não foi confirmada**. Cor de vela isolada não comprova causa.

## Estratégia aprovada

**Primeiro eliminar hipóteses elétricas e de ignição.** Não desmontar nem recalibrar o TLDZ antes de investigar o que é possível com segurança, preservando a garantia. O usuário tem facilidade em trabalhos manuais/elétricos, multímetro e alicate amperímetro; não dispõe inicialmente de equipamentos automotivos específicos. Instrumentos caseiros podem ser construídos se houver circuito confiável e validação prévia.

### Documentação

- [Estado atual e hipóteses](docs/estado-atual.md)
- [Plano de testes elétricos](docs/plano-testes-eletricos.md)

## Próxima ação

Executar a **rodada 1 de medições elétricas**, registrar os valores e só então definir a próxima intervenção: tensão da bateria em repouso, durante partida e com motor ligado; queda de tensão no aterramento do motor durante a partida. Identificar por foto/código a bobina nova e o módulo de ignição.

## Regras de registro

- Em cada teste: data, condição (frio/quente), instrumento, procedimento, medida, valor de referência, conclusão e próxima ação.
- Não registrar como fato valores não medidos ou diagnósticos ainda não demonstrados.
- Se houver alteração de peças/regulagens, registrar o estado anterior e posterior.
- Evitar contato com alta tensão da ignição, combustível exposto e componentes móveis/quentes. Testes com motor de partida exigem câmbio em neutro, freio de estacionamento e ajuda de outra pessoa quando necessário.

**Registro inicial:** 2026-10-25, baseado no histórico de diagnóstico informado pelo proprietário.
