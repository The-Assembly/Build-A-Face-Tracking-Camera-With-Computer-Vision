void setup() {
  Serial.begin(9600); //initialize serial COM at 9600 baudrate
  pinMode(LED_BUILTIN, OUTPUT); //make the LED pin (13) as output
  digitalWrite (LED_BUILTIN, LOW);
}

void loop() {
while (Serial.available()){
   Serial.read();
}

if (Serial.read() == '1')
digitalWrite (LED_BUILTIN, HIGH);


else if (Serial.read() == '0')
digitalWrite (LED_BUILTIN, LOW);

delay(100);
}
