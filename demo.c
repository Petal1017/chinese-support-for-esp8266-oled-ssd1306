#include <Wire.h>
#include "SSD1306Wire.h"              // 库管理中搜索"esp8266 and esp32 oled driver"
SSD1306Wire display(0x3c, 5, 4);      // 显示器实例
#include "chinese.h"

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  // 初始化OLED屏幕
  display.init();
  display.flipScreenVertically();
  display.setFont(ArialMT_Plain_10);
  display.setTextAlignment(TEXT_ALIGN_LEFT);

  drawChinese(0, 0, "你好", display);
  
  display.display();
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(10); // this speeds up the simulation
}
