#include <DigiKeyboardFr.h>

void setup() {
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboardFr.print("https://youtu.be/dQw4w9WgXcQ?t");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void loop() {}
