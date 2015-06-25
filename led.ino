/*****************************************************
**          Descripcio programa
**
******************************************************/

//  *********   Includes  *******


//  *********   Variables *******


//  **********  setup
void setup() {
  pinMode(2, OUTPUT);
}  


//  **********  loop
void loop() {
  digitalWrite(2, HIGH);
  delay(500);
  digitalWrite(2, LOW);
  delay(500);
} 
