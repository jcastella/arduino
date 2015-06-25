/*****************************************************
**          leds tots
** encen 8 leds 
*****************************************************/

//  *********   Includes  *******


//  *********   Variables *******
const int led0 =6;
const int led1 = 7;
const int led2= 8;
const int led3= 9;
const int led4= 10;
const int led5= 11;
const int led6= 12;
const int led7= 13;

const int polsador1 =2;
//  **********  setup
void setup() {
  pinMode(led0, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led2, OUTPUT);
  
  pinMode(polsador1, INPUT);
}  


//  **********  loop
void loop() {
  delay(500);
  digitalWrite(led0, HIGH);
  digitalWrite(led1, LOW); 
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, LOW);
  digitalWrite(led6, HIGH);
  digitalWrite(led7, LOW);
  delay(500);
  digitalWrite(led0, LOW);
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, LOW);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, LOW);
  digitalWrite(led7, HIGH);  
}

