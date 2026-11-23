/*
 CONTAGIROS PARATI AP 1.8 - v1.3
 TESTADO EM BANCADA 2026-11-23
 Arduino Uno, ORPC 817A, Samsung M20, 9600 baud
 D9 -> resistor 1k -> opto 1; opto 2 -> GND
 opto 4 -> D2; opto 3 -> GND
 NAO CONECTAR AO CARRO COM ESTE GERADOR ATIVO
*/
const byte PINO_ENTRADA=2;
const byte PINO_GERADOR=9;
const byte PULSOS_POR_VOLTA=2;
const unsigned int RPM_TESTE[]={600,900,1500,3000};
const byte TOTAL_TESTES=sizeof(RPM_TESTE)/sizeof(RPM_TESTE[0]);
volatile unsigned long contadorPulsos=0;
unsigned long ultimaMedicao=0, ultimaTroca=0, ultimaAlternancia=0;
unsigned long meioPeriodoMicros=0;
byte testeAtual=0;
bool estadoGerador=LOW;
void contarPulso(){contadorPulsos++;}
void configurarGerador(){
  unsigned long rpm=RPM_TESTE[testeAtual];
  unsigned long frequencia=(rpm*PULSOS_POR_VOLTA)/60UL;
  meioPeriodoMicros=500000UL/frequencia;
  estadoGerador=LOW;
  digitalWrite(PINO_GERADOR,LOW);
  ultimaAlternancia=micros();
}
void setup(){
  Serial.begin(9600);
  pinMode(PINO_ENTRADA,INPUT_PULLUP);
  pinMode(PINO_GERADOR,OUTPUT);
  digitalWrite(PINO_GERADOR,LOW);
  attachInterrupt(digitalPinToInterrupt(PINO_ENTRADA),contarPulso,RISING);
  configurarGerador();
  ultimaMedicao=millis(); ultimaTroca=millis();
  Serial.println();
  Serial.println("CONTAGIROS PARATI AP 1.8");
  Serial.println("VERSAO 1.3 - TESTE OPTO");
  Serial.println("----------------------");
}
void loop(){
  unsigned long agoraMicros=micros();
  if((unsigned long)(agoraMicros-ultimaAlternancia)>=meioPeriodoMicros){
    ultimaAlternancia+=meioPeriodoMicros;
    estadoGerador=!estadoGerador;
    digitalWrite(PINO_GERADOR,estadoGerador);
  }
  unsigned long agoraMillis=millis();
  if(agoraMillis-ultimaMedicao>=1000UL){
    noInterrupts();
    unsigned long pulsos=contadorPulsos;contadorPulsos=0;
    interrupts();
    unsigned long intervalo=agoraMillis-ultimaMedicao;
    float frequencia=(pulsos*1000.0)/intervalo;
    float rpm=frequencia*30.0;
    Serial.print("Hz: ");Serial.print(frequencia,1);
    Serial.print(" | RPM: ");Serial.println(rpm,0);
    ultimaMedicao=agoraMillis;
  }
  if(agoraMillis-ultimaTroca>=5000UL){
    testeAtual++;
    if(testeAtual>=TOTAL_TESTES)testeAtual=0;
    configurarGerador();ultimaTroca=agoraMillis;
  }
}
