#include <DigiKeyboardFr.h>

void setup() {
  DigiKeyboardFr.print("mot_de_passe");
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void loop() {}
