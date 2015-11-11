int x;
int y;
int z;

void setup() {
  // put your setup code here, to run once:
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  
  Serial.begin(9600);
}
  
void loop() {
  x = analogRead(A2);
  y = analogRead(A1);
  z = analogRead(A0);
  Serial.print(x); Serial.print(' '); Serial.print(y); Serial.print(' '); Serial.println(z);
  delay(100);
  if (Serial.available() > 0){
    delay(5000);
    Serial.read();
  }
}
