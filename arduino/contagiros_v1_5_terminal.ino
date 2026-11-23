/*
 CONTAGIROS PARATI AP 1.8 - v1.5
 DISPLAY FIXO POR ANSI - AINDA NAO VALIDADO NO SAMSUNG M20
 Requer emulacao terminal ANSI no aplicativo Serial USB Terminal.
 Nao demonstra seguranca da interface automotiva.
*/
const byte PINO_RPM=2;
const byte PULSOS_POR_VOLTA=2;
volatile unsigned long contadorPulsos=0;
unsigned long ultimaMedicao=0;
void contarPulso(){contadorPulsos++;}
void mostrarRPM(float hz,float rpm){
  Serial.print("\x1B[H");
  Serial.print("\x1B[2J");
  Serial.println();
  Serial.println("   PARATI AP 1.8");
  Serial.println("   CONTAGIROS DIGITAL");
  Serial.println();
  Serial.println("======================");
  Serial.println();
  Serial.print("      ");Serial.print(rpm,0);Serial.println(" RPM");
  Serial.println();
  Serial.println("======================");
  Serial.println();
  Serial.print("   Frequencia: ");Serial.print(hz,1);Serial.println(" Hz");
  Serial.println();
  Serial.println("   Leitura em tempo real");
}
void setup(){
  Serial.begin(9600);
  pinMode(PINO_RPM,INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(PINO_RPM),contarPulso,RISING);
  ultimaMedicao=millis();
  Serial.print("\x1B[2J");
  Serial.print("\x1B[H");
  Serial.println("CONTAGIROS INICIADO");
}
void loop(){
  unsigned long agora=millis();
  if(agora-ultimaMedicao>=1000UL){
    noInterrupts();
    unsigned long pulsos=contadorPulsos;contadorPulsos=0;
    interrupts();
    unsigned long intervalo=agora-ultimaMedicao;
    float hz=(pulsos*1000.0)/intervalo;
    float rpm=(hz*60.0)/PULSOS_POR_VOLTA;
    mostrarRPM(hz,rpm);
    ultimaMedicao=agora;
  }
}
