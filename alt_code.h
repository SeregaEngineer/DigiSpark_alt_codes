uint8_t KEYPAD_1                (  89  | 0xF000 );
uint8_t KEYPAD_2                (  90  | 0xF000 );
uint8_t KEYPAD_3                (  91  | 0xF000 );
uint8_t KEYPAD_4                (  92  | 0xF000 );
uint8_t KEYPAD_5                (  93  | 0xF000 );
uint8_t KEYPAD_6                (  94  | 0xF000 );
uint8_t KEYPAD_7                (  95  | 0xF000 );
uint8_t KEYPAD_8                (  96  | 0xF000 );
uint8_t KEYPAD_9                (  97  | 0xF000 );
uint8_t KEYPAD_0                (  98  | 0xF000 );



void sendAltChar(uint8_t a, uint8_t b) {
  DigiKeyboard.sendKeyPress(a, MOD_ALT_LEFT);
  DigiKeyboard.sendKeyPress(0, MOD_ALT_LEFT);
  DigiKeyboard.sendKeyPress(b, MOD_ALT_LEFT);
}

void sendAltChar(uint8_t a, uint8_t b, uint8_t c) {
  DigiKeyboard.sendKeyPress(a, MOD_ALT_LEFT);
  DigiKeyboard.sendKeyPress(0, MOD_ALT_LEFT);
  DigiKeyboard.sendKeyPress(b, MOD_ALT_LEFT);
  DigiKeyboard.sendKeyPress(0, MOD_ALT_LEFT);
  DigiKeyboard.sendKeyPress(c, MOD_ALT_LEFT);
}


void SendAltString(char ch) {
  //DigiKeyboard.update();
  switch (ch) {
    case 'a':
      sendAltChar(KEYPAD_9, KEYPAD_7);
      break;
    case 'b':
      sendAltChar(KEYPAD_9, KEYPAD_8);
      break;
    case 'c':
      sendAltChar(KEYPAD_9, KEYPAD_9);
      break;
    case 'd':
      sendAltChar(KEYPAD_1, KEYPAD_0, KEYPAD_0);
      break;
    case 'e':
      sendAltChar(KEYPAD_1, KEYPAD_0, KEYPAD_1);
      break;
    case 'f':
      sendAltChar(KEYPAD_1, KEYPAD_0, KEYPAD_2);
      break;
    case 'g':
      sendAltChar(KEYPAD_1, KEYPAD_0, KEYPAD_3);
      break;
    case 'h':
      sendAltChar(KEYPAD_1, KEYPAD_0, KEYPAD_4);
      break;
    case 'i':
      sendAltChar(KEYPAD_1, KEYPAD_0, KEYPAD_5);
      break;
    case 'j':
      sendAltChar(KEYPAD_1, KEYPAD_0, KEYPAD_6);
      break;
    case 'k':
      sendAltChar(KEYPAD_1, KEYPAD_0, KEYPAD_7);
      break;
    case 'l':
      sendAltChar(KEYPAD_1, KEYPAD_0, KEYPAD_8);
      break;
    case 'm':
      sendAltChar(KEYPAD_1, KEYPAD_0, KEYPAD_9);
      break;
    case 'n':
      sendAltChar(KEYPAD_1, KEYPAD_1, KEYPAD_0);
      break;
    case 'o':
      sendAltChar(KEYPAD_1, KEYPAD_1, KEYPAD_1);
      break;
    case 'p':
      sendAltChar(KEYPAD_1, KEYPAD_1, KEYPAD_2);
      break;
    case 'q':
      sendAltChar(KEYPAD_1, KEYPAD_1, KEYPAD_3);
      break;
    case 'r':
      sendAltChar(KEYPAD_1, KEYPAD_1, KEYPAD_4);
      break;
    case 's':
      sendAltChar(KEYPAD_1, KEYPAD_1, KEYPAD_5);
      break;
    case 't':
      sendAltChar(KEYPAD_1, KEYPAD_1, KEYPAD_6);
      break;
    case 'u':
      sendAltChar(KEYPAD_1, KEYPAD_1, KEYPAD_7);
      break;
    case 'v':
      sendAltChar(KEYPAD_1, KEYPAD_1, KEYPAD_8);
      break;
    case 'w':
      sendAltChar(KEYPAD_1, KEYPAD_1, KEYPAD_9);
      break;
    case 'x':
      sendAltChar(KEYPAD_1, KEYPAD_2, KEYPAD_0);
      break;
    case 'y':
      sendAltChar(KEYPAD_1, KEYPAD_2, KEYPAD_1);
      break;
    case 'z':
      sendAltChar(KEYPAD_1, KEYPAD_2, KEYPAD_2);
      break;
    case '0':
      sendAltChar(KEYPAD_4, KEYPAD_8);
      break;
    case '1':
      sendAltChar(KEYPAD_4, KEYPAD_9);
      break;
    case '2':
      sendAltChar(KEYPAD_5, KEYPAD_0);
      break;
    case '3':
      sendAltChar(KEYPAD_5, KEYPAD_1);
      break;
    case '4':
      sendAltChar(KEYPAD_5, KEYPAD_2);
      break;
    case '5':
      sendAltChar(KEYPAD_5, KEYPAD_3);
      break;
    case '6':
      sendAltChar(KEYPAD_5, KEYPAD_4);
      break;
    case '7':
      sendAltChar(KEYPAD_5, KEYPAD_5);
      break;
    case '8':
      sendAltChar(KEYPAD_5, KEYPAD_6);
      break;
    case '9':
      sendAltChar(KEYPAD_5, KEYPAD_7);
      break;
    case ':':
      sendAltChar(KEYPAD_5, KEYPAD_8);
      break;
    case '/':
      sendAltChar(KEYPAD_4, KEYPAD_7);
      break;
    case '.':
      sendAltChar(KEYPAD_4, KEYPAD_6);
      break;
  }
  DigiKeyboard.sendKeyPress(0);
  DigiKeyboard.delay(20);
}