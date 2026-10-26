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
- [x] Identificar código e fabricante da bobina nova: Magneti Marelli BI0016MM (terminal positivo ainda não identificado).
- [ ] Medir queda de tensão entre o polo positivo da bateria e o terminal de alimentação 15/+ da bobina durante a partida, **apenas após identificação correta do terminal**.
- [x] Modelo/código do módulo de ignição: Bosch 0 227 100 142 / VW 191 905 351 A.
- [ ] Identificação visual do distribuidor.
- [ ] Ordem real dos cilindros correspondente às velas fotografadas.

## 5. Decisões

- Priorizar diagnóstico elétrico com ferramentas disponíveis.
- Não comprar componentes por mera suspeita.
- Não alterar giclês/regulagens do carburador recondicionado antes de evidências e, se necessário, contato com o fornecedor.
- Atualizar este arquivo depois de cada rodada com fatos novos e hipóteses eliminadas.

## 6. Identificação fotográfica dos componentes — 2026-10-26

Quatro fotos enviadas no chat; imagens ainda não armazenadas no repositório.

| Componente | Identificação lida na foto | Observações |
| --- | --- | --- |
| Bobina antiga | MARFLEX MB-928077, 12 V, alta potência, refrigerada a óleo | Substituída; aquecimento excessivo relatado; não foi demonstrado que estivesse defeituosa |
| Bobina atual | Magneti Marelli BI0016MM | Bobina de tipo mais recente, catalogada para VW AP Mi desde 1996; adaptação deve ser verificada pelo chicote |
| Módulo eletrônico | Bosch 0 227 100 142 / VW 191 905 351 A | Módulo Hall de 7 pinos, código visível na segunda foto |

**Pesquisa de compatibilidade:** catálogo VW Economy lista BI0016MM para AP Mi posterior, mas há kit de ignição de mercado que utiliza BI0016MM com módulo equivalente ao Bosch 0 227 100 142. Isso sustenta possibilidade de funcionamento conjunto, **não** demonstra que a instalação no veículo esteja correta, nem garante controle de corrente/dwell adequado.

**Observação visual:** uma mola metálica atravessa a região do conector do módulo Bosch; não afirmar se é original ou improvisação sem inspeção próxima. Conferir retenção e ausência de folga, corrosão e fios danificados com chave desligada. A bobina atual tem a ligação de baixa tensão parcialmente encoberta na foto; é preciso mostrar o conector para identificar pino positivo de forma segura.

Fontes:
- VW Economy: https://www.vw.com.br/idhub/content/dam/onehub_pkw/importers/br/pos-vendas/CAT_ECONOMY_2024-PORT-ED13_V10.pdf (p. 38 impressa).
- Kit comercial reunindo bobina e módulo equivalente: https://www.crestana.com.br/ignicao-e-eletrica/distribuidores/kit-ignicao-motor-vw-brasilia-modulo-e-distribuidor
- Gauss GA2142, equivalência do módulo: https://www.gauss.com.br/pt-br/produto/automoveis-e-utilitarios-leves/linha/modulo-de-ignicao/GA2142?pesquisa-tipo=geral&pesquisar-por-parte-codigo=false

**Próximo passo:** inspeção de conector do módulo e fios com carro desligado; foto aproximada dos 2 contatos de baixa tensão da bobina atual e identificação dos pinos antes de T5.

## 7. Foto aproximada do conector de baixa tensão — 2026-10-26

Foto no chat: conector de duas vias da Magneti Marelli BI0016MM com fio vermelho e fio preto/escuro. Trava plástica visível: encaixe não conclusivo pela foto; conferir com chave desligada. Não há gravação 15/+ ou 1/- legível na foto.

**Hipótese ainda não comprovada:** fio vermelho provavelmente alimentação positiva pós-chave (15); fio preto provavelmente comando chaveado do módulo (1). As cores não são prova de polaridade.

**Próximo teste:** com chave desligada, desencaixar cuidadosamente somente conector de baixa tensão, inspecionar trava e contatos. Com multímetro V DC referenciado no negativo da bateria, ligar a chave brevemente e identificar qual contato do lado do chicote apresenta tensão próxima à bateria. Evitar pontas que possam encostar entre duas cavidades; não perfurar a isolação. Desligar a chave antes de reconectar. Com chicote conectado e polaridade confirmada, medir queda de tensão da alimentação durante a partida. Se for inseguro acessar contato, não fazer teste sem adaptador/backprobe.

Fonte de equivalência BI0016MM/Bosch F000ZS0105: https://www.boschaftermarket.com/xrm/media/images/country_specific/br/downloads_19/pdf_9/catlogo_velas_cabos_bobinas_2019.pdf

## 8. Medição do conector da bobina desligado — 2026-10-26

Condições relatadas: conector de 2 fios da bobina **desconectado**, chave **ligada**, multímetro V DC, referência no negativo da bateria.

| Contato do chicote | Medição | Interpretação |
| --- | ---: | --- |
| Fio preto | **12,6 V** | Provável alimentação positiva pós-chave do circuito da bobina, terminal 15, **a confirmar pelas marcações e comportamento com carga** |
| Fio vermelho | **2,67 V** | Possível saída de comando do módulo Bosch com circuito aberto; **não é evidência isolada de defeito** |

Esta leitura **contradiz a hipótese inicial feita pelas cores** (vermelho como alimentação, preto como comando): não utilizar cor como pinagem. Em circuito desconectado, 12,6 V não prova capacidade de alimentar corrente sem queda de tensão; 2,67 V no lado controlado pelo módulo pode refletir polarização/tensão aparente de um circuito sem carga.

**Próximo passo elétrico T7:** (a) com plugue ainda desconectado, confirmar se a tensão no preto desaparece com chave desligada; (b) localizar gravações 15/+ e 1/- ou esquema do conector; (c) somente com a alimentação positiva identificada, **reconectar** a bobina e medir o positivo sob carga durante partida, via backprobe seguro, sem perfurar isolamento nem aproximar metal dos dois contatos. Comparar com 10,8 V prévios na bateria sob partida; idealmente medir diretamente queda entre polo positivo da bateria e entrada 15/+ da bobina. **Não encostar lâmpada de teste ou fazer aterramento no fio vermelho.** Se o contato não for acessível com segurança, parar e obter adaptador.

Referência para arquitetura elétrica: manual FuelTech FT200, sec. 7.1.4, módulo Bosch 0 227 100 142 com saída para negativo da bobina e positivo pós-chave: https://ftmanager.fueltech.com.br/downloads/manual/Portugues/FT200.pdf
