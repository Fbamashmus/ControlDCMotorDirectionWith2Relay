void setup()
{
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop()
{
  digitalWrite(3, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(3, LOW);
  delay(1000);//wait just to see the result
 digitalWrite(2, HIGH);
  delay(1000); // Wait for 1000 millisecond(s) 
  digitalWrite(2, LOW);
  delay(1000);//wait just to see the result
}