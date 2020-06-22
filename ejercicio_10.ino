#include <Wire.h>
#include <Adafruit_SSD1306.h>
// OLED display TWI address
#define OLED_ADDR   0x3C
Adafruit_SSD1306 display(128, 64, &Wire, -1);
void setup() {
  // initialize and clear display
  display.begin(SSD1306_SWITCHCAPVCC, OLED_ADDR);
  display.clearDisplay();
  display.display();
  // display a pixel in each corner of the screen
  display.drawPixel(0, 0, WHITE);
  display.drawPixel(127, 0, WHITE);
  display.drawPixel(0, 63, WHITE);
  display.drawPixel(127, 63, WHITE);
  // display a line of text
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setTextSize(2); // 1..8
  display.setCursor(27,30);
  display.print("LTE UTN");
  // update display with all of the above graphics
  display.display();
}
void loop() {
  // put your main code here, to run repeatedly:
}