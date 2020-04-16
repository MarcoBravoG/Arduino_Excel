int i=0;
void setup() {
  Serial.begin(9600);
  Serial.println("CLEARDATA");
  Serial.println("LABEL,Sensorx,muestra");
  // put your setup code here, to run once:

}

void loop() {
 int sensorx=analogRead(A0);
 Serial.print("DATA,");
 float x = sensorx*(5/1024.0);
 Serial.print(x);Serial.print(",");
 Serial.println(i++);
 delay(100);
  // put your main code here, to run repeatedly:

}
