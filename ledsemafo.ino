/*****************************************************
**          leds tots
** encen 8 leds 
*****************************************************/

//  *********   Includes  *******


//  *********   Variables *******
int r1=7;
int a1=8;
int v1=9;
int r2=10;
int a2=11;
int v2=12;
int temps=1000;
int n=0;

//  **********  setup
void setup() {
 
  pinMode(r1, OUTPUT);
  pinMode(a1, OUTPUT);
  pinMode(v1, OUTPUT);
   
  pinMode(r2, OUTPUT);
  pinMode(a2, OUTPUT);
  pinMode(v2, OUTPUT);
}  


//  **********  loop
void loop() {
 digitalWrite(r1,HIGH);
 digitalWrite(r2,HIGH);
 delay (temps);
 digitalWrite(r1,LOW);
 digitalWrite(r2,LOW);
 digitalWrite(r1,HIGH);
 digitalWrite(v2,HIGH);
 delay (temps*4);
 digitalWrite(r1,LOW);
 digitalWrite(v2,LOW);
 digitalWrite(r1,HIGH);
 digitalWrite(a2,HIGH);
 delay (temps*4);
 
 digitalWrite(r1,LOW);
 digitalWrite(a2,LOW);
 digitalWrite(r1,HIGH);
 digitalWrite(r2,HIGH);
 delay (temps);
 
 
 digitalWrite(r1,LOW);
 digitalWrite(r2,LOW);
 digitalWrite(v1,HIGH);
 digitalWrite(r2,HIGH);
 delay (temps*4);
 
 
 digitalWrite(v1,LOW);
 digitalWrite(r2,LOW);
 digitalWrite(a1,HIGH);
 digitalWrite(r2,HIGH);
 delay (temps);
 
 
}

