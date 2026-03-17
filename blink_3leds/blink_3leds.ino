    int ledvermelho = 2;
    int ledverde = 6;
    int ledamarelo = 4;

    void setup() {

    pinMode(ledvermelho,OUTPUT);
    pinMode(ledverde,OUTPUT);
    pinMode(ledamarelo,OUTPUT);

    }

    void loop() {
      
      digitalWrite(ledvermelho,HIGH);
      digitalWrite(ledverde,HIGH);
      digitalWrite(ledamarelo,HIGH);
      delay(2000);

      digitalWrite(ledvermelho,LOW);
      digitalWrite(ledverde,LOW);
      digitalWrite(ledamarelo,LOW);
      delay(1000);


      digitalWrite(ledvermelho,HIGH);
      delay(1000);
      digitalWrite(ledamarelo,HIGH);
      delay(1100);
      digitalWrite(ledverde,HIGH);
      delay(1500);
      

      digitalWrite(ledvermelho,LOW);
      delay(1000);
      digitalWrite(ledamarelo,LOW);
      delay(1100);
      digitalWrite(ledverde,LOW);
      delay(1500);
      
      digitalWrite(ledvermelho,HIGH);
      digitalWrite(ledamarelo,HIGH);
      digitalWrite(ledverde,HIGH);
      delay(100);
      

      digitalWrite(ledvermelho,LOW);
      digitalWrite(ledamarelo,LOW);
      digitalWrite(ledverde,LOW);
      delay(200);

      digitalWrite(ledvermelho,HIGH);
      digitalWrite(ledamarelo,HIGH);
      digitalWrite(ledverde,HIGH);
      delay(300);
      
      digitalWrite(ledverde,LOW);
      digitalWrite(ledamarelo,LOW);
      digitalWrite(ledvermelho,LOW);
      delay(300);

      digitalWrite(ledverde,HIGH);
      digitalWrite(ledamarelo,HIGH);
      digitalWrite(ledvermelho,HIGH);
      delay(200);
      

      digitalWrite(ledverde,LOW);
      digitalWrite(ledamarelo,LOW);
      digitalWrite(ledvermelho,LOW);
      delay(100);




    }
