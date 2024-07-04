int gsrPin = A0;         
int threshold = 512;     
int value = 1;           
int minValue = 0;         
int maxValue = 2;         

void setup() {
  Serial.begin(9600);     
}

void loop() {
  int gsrValue = analogRead(gsrPin); 
  
  if (gsrValue > threshold) {
    value++;  
  } else {
    value--;  
  }
  value = constrain(value, minValue, maxValue);

  Serial.println(value);

  delay(100); 
}
