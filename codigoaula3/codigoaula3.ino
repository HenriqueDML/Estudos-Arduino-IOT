//Atribuir nomes aos pinos
//Botões 1 e 2
#define BT1 8
#define BT2 9
// LEDs
#define ledB 2
#define ledW 3
#define ledV 4

//bool statusBT2;
int contador;//variavel do tipo int = 2^16 = 65.536

void setup() {
//Habilitar o serial
//Baud Rate (9600 bits) padrao UNO
Serial.begin(9600);
 // configurar o sentido dos pinos de I/O
 pinMode (BT1, INPUT);
 pinMode (BT2, INPUT);

 pinMode (ledB, OUTPUT);
 pinMode (ledW, OUTPUT);
 pinMode (ledV, OUTPUT);
}

void loop() {

  bool statusBT2 = digitalRead(BT2);

  if(statusBT2 == HIGH){
    contador++;
    Serial.print("Contador: ");
    Serial.println(contador);
    delay(250);
  }


 if(digitalRead (BT1) ==  HIGH){
  Serial.print("BT1 LIGADO!! :D ");
  piscaB();
  }
  else{
    piscaW();
  }
}

void piscaB(){
  digitalWrite(ledB, HIGH);
  digitalWrite(ledW, LOW);
  delay(250);
  digitalWrite(ledW, HIGH);
  digitalWrite(ledB, LOW);
  delay(250);
  digitalWrite(ledV, LOW);
}

void piscaW(){
  digitalWrite (ledV, HIGH);
  delay(350);
  digitalWrite (ledV, LOW);
  delay(350);
}

void piscaBB(){
  digitalWrite(ledB, HIGH);
  digitalWrite(ledB, LOW);
  delay(50);
}