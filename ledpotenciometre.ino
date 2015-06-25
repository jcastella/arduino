/*****************************************************
**          Descripcio programa
**
******************************************************/

//  *********   Includes  *******


//  *********   Variables *******
int sensorValue = 0;

//  **********  setup
void setup() {
  pinMode (3,OUTPUT);
}  


//  **********  loop
void loop() {
 sensorValue = analogRead(A0);
 analogWrite(3,sensorValue/4); 
} 
