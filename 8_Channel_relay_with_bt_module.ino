//contact nepro market for more product 9742931927. NEPRO MARKET
//PROGRAM FOR 8 CHANNEL RELAY WITH BT MODULE.
#include <SoftwareSerial.h>

const int relayPin1 = 8;
const int relayPin2 = 7;
const int relayPin3 = 6;
const int relayPin4 = 5;
const int relayPin5 = 4;
const int relayPin6 = 3;
const int relayPin7 = 2;
const int relayPin8 = 1;

SoftwareSerial BTSerial(10, 11); // RX | TX

void setup() {
  pinMode(relayPin1, OUTPUT);
  pinMode(relayPin2, OUTPUT);
  pinMode(relayPin3, OUTPUT);
  pinMode(relayPin4, OUTPUT);
  pinMode(relayPin5, OUTPUT);
  pinMode(relayPin6, OUTPUT);
  pinMode(relayPin7, OUTPUT);
  pinMode(relayPin8, OUTPUT);
  BTSerial.begin(9600);
  Serial.begin(9600);
}

void loop() {
  if (BTSerial.available()) {
    char relayNumber = BTSerial.read();
    char relayState = BTSerial.read();
    controlRelay(relayNumber, relayState);
  }
}

void controlRelay(char relayNumber, char relayState) {
  if (relayNumber == '1') {
    if (relayState == 'H') {
      digitalWrite(relayPin1, HIGH);
    } else if (relayState == 'L') {
      digitalWrite(relayPin1, LOW);
    }
  } else if (relayNumber == '2') {
    if (relayState == 'H') {
      digitalWrite(relayPin2, HIGH);
    } else if (relayState == 'L') {
      digitalWrite(relayPin2, LOW);
    }
  }
  else if (relayNumber == '2') {
    if (relayState == 'H') {
      digitalWrite(relayPin2, HIGH);
    } else if (relayState == 'L') {
      digitalWrite(relayPin2, LOW);
    }
  }
  else if (relayNumber == '3') {
    if (relayState == 'H') {
      digitalWrite(relayPin2, HIGH);
    } else if (relayState == 'L') {
      digitalWrite(relayPin2, LOW);
    }
  }
  else if (relayNumber == '4') {
    if (relayState == 'H') {
      digitalWrite(relayPin2, HIGH);
    } else if (relayState == 'L') {
      digitalWrite(relayPin2, LOW);
    }
  }
  else if (relayNumber == '5') {
    if (relayState == 'H') {
      digitalWrite(relayPin2, HIGH);
    } else if (relayState == 'L') {
      digitalWrite(relayPin2, LOW);
    }
  }
  else if (relayNumber == '6') {
    if (relayState == 'H') {
      digitalWrite(relayPin2, HIGH);
    } else if (relayState == 'L') {
      digitalWrite(relayPin2, LOW);
    }
  }
  else if (relayNumber == '7') {
    if (relayState == 'H') {
      digitalWrite(relayPin2, HIGH);
    } else if (relayState == 'L') {
      digitalWrite(relayPin2, LOW);
    }
  }
  else if (relayNumber == '8') {
    if (relayState == 'H') {
      digitalWrite(relayPin2, HIGH);
    } else if (relayState == 'L') {
      digitalWrite(relayPin2, LOW);
    }
  }
  
  
  // NEPRO MARKET (9742931927)
}
