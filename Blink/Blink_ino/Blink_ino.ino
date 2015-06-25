/*****************************************************
**          Blink
**   Fa intermitencies del led a cada segon
******************************************************/

//  *********   Includes  *******


//  *********   Variables *******
int led = 13;

//  **********  setup
void setup() {
  pinMode (led, OUTPUT);  // posa el piu 13 com a sortida
}  


//  **********  loop
void loop() {
  digitalWrite(led, HIGH);  //s'autoexplica delay es mesura en milesimes de segon 
  delay(1000);
  digitalWrite(led, LOW);
  delay(1000);
} 
