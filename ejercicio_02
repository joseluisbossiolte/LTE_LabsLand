/*
  Presionando el Boton (2), encenderá/apagará el Led (7)
*/

int pushButton = 2;


void setup() {
  Serial.begin(9600);
  pinMode(pushButton, INPUT);
}

void loop() {
  int buttonState = digitalRead(pushButton);
  Serial.println(buttonState);
	if (buttonState == 1)
	{
		enciende();
	} else {
		apaga();
	}
	delay(1);
}

void enciende()
{
  digitalWrite(7, HIGH);
} 

void apaga()
{
  digitalWrite(7, LOW);
} 	
