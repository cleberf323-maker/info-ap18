# Estado atual do diagnóstico — atualizado em 2026-10-26

## 1. Fatos confirmados pelo relato

| Item | Estado |
| --- | --- |
| Veículo | Parati 1993, AP 1.8 gasolina carburado |
| Carburador | TLDZ, mesmo modelo do anterior |
| Histórico do carburador | Recondicionado pela Martins Carburadores; ajustado em bancada em Taubaté; instalado recentemente |
| Altitude de operação | Aproximadamente 1.600 m (Campos do Jordão) |
| Falha após lombadas/frenagens | Sintoma anterior à troca do carburador |
| Partida demorada | Intermitente, frio ou quente, anterior à troca do carburador |
| Como motorista contorna a partida difícil | Mantém o acelerador completamente pressionado enquanto dá partida |
| Falta de força em rodovia | Percebida depois da troca de carburador |
| Consumo | Maior que o normal percebido; sem medição registrada |
| Bobina | Substituída recentemente; a anterior esquentava muito; sintomas persistiram |
| Instrumentos | Multímetro e alicate amperímetro; sem ferramentas automotivas específicas |
| Direção da investigação | Eliminar defeitos elétricos primeiro |

## 2. Evidência visual sobre as velas

Foto analisada no chat (ainda não arquivada aqui), com quatro velas dispostas da esquerda para a direita:

- A primeira parece mais escurecida na região do eletrodo de massa do que as outras.
- As demais apresentam cores cinza/bege variáveis.
- A análise por imagem é limitada por iluminação, ângulo, momento de desligamento do motor e tempo de uso.
- **Não sabemos** se a sequência física da foto corresponde aos cilindros 1, 2, 3 e 4.
- Não há evidência suficiente para decretar mistura rica, falha de bobina, consumo de óleo ou problema de compressão.

## 3. Hipóteses — NÃO confirmadas

| Hipótese | Por que considerar | Como investigar |
| --- | --- | --- |
| Conexões de massa / alimentação defeituosas | Partida longa e falha intermitente podem envolver tensão instável | Queda de tensão durante partida, inspeção de terminais |
| Distribuidor/tampa/rotor/cabos de vela | Falha antiga e possível diferença de carbonização entre velas | Inspeção, identificação de peças e medidas adequadas |
| Sensor Hall ou módulo de ignição intermitente | Podem provocar ausência/intermitência de comando da bobina | Identificar conjunto e esquema antes de testar sinais |
| Ponto ou avanço de ignição fora do adequado | Pode prejudicar retomadas, força e consumo | Após testes básicos, conferir com pistola de ponto |
| Incompatibilidade elétrica da bobina nova | Substituição por modelo diferente; sem código conferido | Conferir código e especificação em relação ao módulo |
| Excesso de combustível em certas partidas | Partida pode melhorar com borboleta aberta | Verificações de afogador/nível; sem condenar carburador |
| Alimentação/segundo estágio/calibração do TLDZ | Perda de força percebida após troca; altitude distinta | Etapa posterior à elétrica, preservando garantia |

A melhora com acelerador todo pressionado é **compatível** com afogamento, mas não prova excesso de combustível; o movimento inicial do pedal também aciona a bomba de aceleração.

## 4. Rodada 1 — medições informadas em 2026-10-26

Data exata da realização não informada. Os valores abaixo são relatos do proprietário.

| Medição | Resultado | Leitura provisória |
| --- | --- | --- |
| Bateria em repouso | 12,6 V | Compatível com carga adequada |
| Bateria durante partida | 10,8 V | Boa sustentação de tensão no ensaio |
| Bateria com motor funcionando | 13,8 a 14,0 V | Carga aparentemente normal |
| Queda polo negativo da bateria → bloco durante partida | 0,27 V | Um pouco acima do alvo conservador de 0,2 V, mas abaixo de 0,5 V; repetir/observar, não condenar cabo |

**Conclusão parcial:** medições não indicam falha evidente na bateria, alternador ou alimentação geral durante este ensaio. Não descartam defeitos elétricos intermitentes nem falhas de ignição. A leitura de 0,27 V do aterramento merece confirmação, mas não sustenta, sozinha, substituir componentes.

Fontes de referência (procedimentos genéricos; não são especificações exclusivas do ano 1993):
- [Fluke — teste de queda de tensão na partida](https://www.fluke.com/en/learn/blog/digital-multimeters/how-to-check-starter-circuit-voltage-drop-with-a-multimeter).
- [Volkswagen Technical Tip 97-20-01TT — método de medição, aplicável à linha mais recente, não especificação da Parati 1993](https://static.nhtsa.gov/odi/tsbs/2020/MC-10174460-0001.pdf).

### Pendências de identificação e diagnóstico

- [ ] Repetir a queda de tensão de aterramento no mesmo ponto, se conveniente.
- [ ] Fotografar e identificar terminal positivo (15/+), código e fabricante da bobina nova.
- [ ] Medir queda de tensão entre o polo positivo da bateria e o terminal de alimentação 15/+ da bobina durante a partida, **apenas após identificação correta do terminal**.
- [ ] Modelo/código do módulo de ignição.
- [ ] Identificação visual do distribuidor.
- [ ] Ordem real dos cilindros correspondente às velas fotografadas.

## 5. Decisões

- Priorizar diagnóstico elétrico com ferramentas disponíveis.
- Não comprar componentes por mera suspeita.
- Não alterar giclês/regulagens do carburador recondicionado antes de evidências e, se necessário, contato com o fornecedor.
- Atualizar este arquivo depois de cada rodada com fatos novos e hipóteses eliminadas.
