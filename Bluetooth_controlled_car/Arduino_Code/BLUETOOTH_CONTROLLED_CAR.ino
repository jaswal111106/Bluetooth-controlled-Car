// L298N 
int ENA = 9;
int IN1 = 2;
int IN2 = 3;
int ENB = 6;
int IN3 = 4;
int IN4 = 5;

char command;

void setup()
{
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  analogWrite(ENA, 200);   
  analogWrite(ENB, 200);

  Serial.begin(9600);      //HC-05 USED
}

void loop()
{
  if (Serial.available())
  {
    command = Serial.read();

    if (command == 'F')
    {
      // Forward
      digitalWrite(IN1, HIGH);
      digitalWrite(IN2, LOW);
      digitalWrite(IN3, HIGH);
      digitalWrite(IN4, LOW);
    }

    else if (command == 'B')
    {
      // Backward
      digitalWrite(IN1, LOW);
      digitalWrite(IN2, HIGH);
      digitalWrite(IN3, LOW);
      digitalWrite(IN4, HIGH);
    }

    else if (command == 'L')
    {
      // Left
      digitalWrite(IN1, LOW);
      digitalWrite(IN2, HIGH);
      digitalWrite(IN3, HIGH);
      digitalWrite(IN4, LOW);
    }

    else if (command == 'R')
    {
      // Right
      digitalWrite(IN1, HIGH);
      digitalWrite(IN2, LOW);
      digitalWrite(IN3, LOW);
      digitalWrite(IN4, HIGH);
    }

    else if (command == 'S')
    {
      // Stop
      digitalWrite(IN1, LOW);
      digitalWrite(IN2, LOW);
      digitalWrite(IN3, LOW);
      digitalWrite(IN4, LOW);
    }
  }
}
