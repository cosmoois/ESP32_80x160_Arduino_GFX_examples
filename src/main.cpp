#include <Arduino_GFX_Library.h>

#define DISP_SCL 2
#define DISP_SDA 4
#define DISP_RES 16
#define DISP_DC  17
#define DISP_CS  5

Arduino_DataBus *bus = new Arduino_HWSPI(DISP_DC, DISP_CS, DISP_SCL, DISP_SDA);
// Arduino_GFX *gfx = new Arduino_ST7735(bus, DISP_RES, 3, true, 80, 160, 26, 1, 26, 1);
Arduino_GFX *gfx = new Arduino_GC9106(bus, DISP_RES, 1);

void setup() {
  gfx->begin();
  gfx->fillRect(0, 0, 80, 40, RED);
  gfx->fillRect(80, 0, 80, 40, GREEN);
  gfx->fillRect(0, 40, 80, 40, BLUE);
  gfx->fillRect(80, 40, 80, 40, BLACK);
  gfx->drawRect(0, 0, 160, 80, WHITE);
}

void loop() {
}