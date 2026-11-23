/*
 CONTAGIROS PARATI AP 1.8 - v1.4
 SOMENTE LEITURA DO D2; NAO TESTADO NO VEICULO
 A interface automotiva ainda nao foi validada para transientes.
 2 pulsos/volta; 9600 baud.
*/
const byte PINO_RPM=2;
const byte PULSOS_POR_VOLTA=2;
volatile unsigned long contador=0;
unsigned long ultimaMedicao=0;
void contarPulso(){contador++;}
void setup(){
  Serial.begin(9600);
  pinMode(PINO_RPM,INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(PINO_RPM),contarPulso,RISING);
  ultimaMedicao=millis();
  Serial.println();
  Serial.println("CONTAGIROS PARATI AP 1.8");
  Serial.println("VERSAO 1.4 - RPM REAL");
  Serial.println("---------------------");
}
void loop(){
  unsigned long agora=millis();
  if(agora-ultimaMedicao>=1000UL){
    noInterrupts();
    unsigned long pulsos=contador;contador=0;
    interrupts();
    unsigned long intervalo=agora-ultimaMedicao;
    float hz=(pulsos*1000.0)/intervalo;
    float rpm=(hz*60.0)/PULSOS_POR_VOLTA;
    Serial.print("Hz: ");Serial.print(hz,1);
    Serial.print(" | RPM: ");Serial.println(rpm,0);
    ultimaMedicao=agora;
  }
}
