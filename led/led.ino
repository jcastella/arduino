/*****************************************************
**          Descripcio programa
**
******************************************************/

//  *********   Includes  *******


//  *********   Variables *******
int temps = 1000;

//  **********  setup
void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  
  }  


//  **********  loop
void loop() {
  digitalWrite(13, HIGH);
  delay(temps);
  digitalWrite(13, LOW);
  delay(temps);
  digitalWrite(12, HIGH);
  delay(temps);
  digitalWrite(12, LOW);
  delay(temps);
  digitalWrite(11, HIGH);
  delay(temps);
  digitalWrite(11, LOW);
  delay(temps);
} 
