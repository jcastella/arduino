/*****************************************************
**          lectura d'un potenciometre
**
******************************************************/

//  *********   Includes  *******


//  *********   Variables *******


//  **********  setup
void setup() {
  Serial.begin(9600);
}  


//  **********  loop
void loop() {
  Serial.println(analogRead(A0));
} 
