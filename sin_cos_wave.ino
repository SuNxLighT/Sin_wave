int x = 0;
float y_sin = 0.0;
float y_cos = 0.0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  x = x + 1;
  y_sin = sin(x * 0.5);
  y_cos = cos(x * 0.5);
  
  Serial.print(x);
  Serial.print(" ");
  Serial.print(y_sin);
  Serial.print(" ");
  Serial.print(y_cos);
  Serial.println();
  
  delay(100);
}
