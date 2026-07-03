int Motor_SpeedA = 6;
int M_A1 = 7;  // Renamed MTR_A1 to M_A1
int M_A2 = 8;  // Renamed MTR_A2 to M_A2

int Motor_SpeedB = 11;
int M_B1 = 10;  // Renamed MTR_B1 to M_B1
int M_B2 = 9;   // Renamed MTR_B2 to M_B2 

int OLS = A4; //43120
int ILS = A3;
int MS = A1;
int IRS = A2;
int ORS = A0;

void setup() {
  pinMode(Motor_SpeedA, OUTPUT);
  pinMode(M_A1, OUTPUT);  // Updated MTR_A1 to M_A1
  pinMode(M_A2, OUTPUT);  // Updated MTR_A2 to M_A2
  
  pinMode(Motor_SpeedB, OUTPUT);
  pinMode(M_B1, OUTPUT);  // Updated MTR_B1 to M_B1
  pinMode(M_B2, OUTPUT);  // Updated MTR_B2 to M_B2

  pinMode(OLS, INPUT);
  pinMode(ILS, INPUT);
  pinMode(MS, INPUT);
  pinMode(IRS, INPUT);
  pinMode(ORS, INPUT);

Serial.begin(9600);
delay(5000);
}


void loop(){
 

  if (digitalRead(OLS) == 1 && digitalRead(ILS) == 1 && digitalRead(MS) == 0 && digitalRead(IRS) == 1 && digitalRead(ORS) == 1){
    Forward();
  }
  else if (digitalRead(OLS) == 0 && digitalRead(ILS) == 1 && digitalRead(MS) == 1 && digitalRead(IRS) == 1 && digitalRead(ORS) == 1){
    turnLeft();
  }
  else if (digitalRead(OLS) == 1 && digitalRead(ILS) == 0 && digitalRead(MS) == 1 && digitalRead(IRS) == 1 && digitalRead(ORS) == 1){
    Forward();
  }
  else if (digitalRead(OLS) == 0 && digitalRead(ILS) == 0 && digitalRead(MS) == 0 && digitalRead(IRS) == 0 && digitalRead(ORS) == 0){
    Forward();
  }
  else if (digitalRead(OLS) == 1 && digitalRead(ILS) == 1 && digitalRead(MS) == 0 && digitalRead(IRS) == 1 && digitalRead(ORS) == 0){
    Forward();
  }
  else if (digitalRead(OLS) == 0 && digitalRead(ILS) == 1 && digitalRead(MS) == 0 && digitalRead(IRS) == 1 && digitalRead(ORS) == 1){
    Forward();
  }
  else if (digitalRead(OLS) == 1 && digitalRead(ILS) == 0 && digitalRead(MS) == 0 && digitalRead(IRS) == 0 && digitalRead(ORS) == 1){
    Forward();
  }
  else if (digitalRead(OLS) == 0 && digitalRead(ILS) == 0 && digitalRead(MS) == 0 && digitalRead(IRS) == 1 && digitalRead(ORS) == 0){
    Forward();
  }
  else if (digitalRead(OLS) == 0 && digitalRead(ILS) == 0 && digitalRead(MS) == 1 && digitalRead(IRS) == 0 && digitalRead(ORS) == 1){
    Forward();
  }
  else if (digitalRead(OLS) == 1 && digitalRead(ILS) == 0 && digitalRead(MS) == 1 && digitalRead(IRS) == 0 && digitalRead(ORS) == 0){
    Forward();
  }
  else if (digitalRead(OLS) == 0 && digitalRead(ILS) == 1 && digitalRead(MS) == 0 && digitalRead(IRS) == 1 && digitalRead(ORS) == 1){
    Forward();
  }
  else if (digitalRead(OLS) == 0 && digitalRead(ILS) == 1 && digitalRead(MS) == 0 && digitalRead(IRS) == 0 && digitalRead(ORS) == 0){
    Forward();
  }
  else if (digitalRead(OLS) == 0 && digitalRead(ILS) == 1 && digitalRead(MS) == 1 && digitalRead(IRS) == 0 && digitalRead(ORS) == 1){
    Forward();
  }
  else if (digitalRead(OLS) == 1 && digitalRead(ILS) == 0 && digitalRead(MS) == 1 && digitalRead(IRS) == 1 && digitalRead(ORS) == 1){
    Forward();
  }
 

  else if (digitalRead(OLS) == 1 && digitalRead(ILS) == 0 && digitalRead(MS) == 1 && digitalRead(IRS) == 1 && digitalRead(ORS) == 1){
    turnLeft();
  }
  else if (digitalRead(OLS) == 0 && digitalRead(ILS) == 0 && digitalRead(MS) == 1 && digitalRead(IRS) == 1 && digitalRead(ORS) == 1){
    turnLeft();
  }
  else if (digitalRead(OLS) == 0 && digitalRead(ILS) == 0 && digitalRead(MS) == 0 && digitalRead(IRS) == 1 && digitalRead(ORS) == 1){
    turnLeft();
  }
  else if (digitalRead(OLS) == 1 && digitalRead(ILS) == 0 && digitalRead(MS) == 0 && digitalRead(IRS) == 1 && digitalRead(ORS) == 1){
    turnLeft();
  }
  else if (digitalRead(OLS) == 0 && digitalRead(ILS) == 0 && digitalRead(MS) == 0 && digitalRead(IRS) == 0 && digitalRead(ORS) == 1){
    turnLeft();
  }
  else if (digitalRead(OLS) == 0 && digitalRead(ILS) == 1 && digitalRead(MS) == 1 && digitalRead(IRS) == 1 && digitalRead(ORS) == 1){
    turnLeft();
  }
  else if (digitalRead(OLS) == 1 && digitalRead(ILS) == 1 && digitalRead(MS) == 1 && digitalRead(IRS) == 0 && digitalRead(ORS) == 1){
    turnRight();
  }
  else if (digitalRead(OLS) == 1 && digitalRead(ILS) == 1 && digitalRead(MS) == 1 && digitalRead(IRS) == 0 && digitalRead(ORS) == 0){
    turnRight();
  }
  else if (digitalRead(OLS) == 1 && digitalRead(ILS) == 1 && digitalRead(MS) == 1 && digitalRead(IRS) == 0 && digitalRead(ORS) == 1){
    turnRight();
  }
  else if (digitalRead(OLS) == 1 && digitalRead(ILS) == 1 && digitalRead(MS) == 0 && digitalRead(IRS) == 0 && digitalRead(ORS) == 1){
    turnRight();
  }
  else if (digitalRead(OLS) == 1 && digitalRead(ILS) == 1 && digitalRead(MS) == 0 && digitalRead(IRS) == 0 && digitalRead(ORS) == 0){
    turnRight();
  }
  else if (digitalRead(OLS) == 1 && digitalRead(ILS) == 1 && digitalRead(MS) == 1 && digitalRead(IRS) == 0 && digitalRead(ORS) == 0){
    turnRight();
  }
  else if (digitalRead(OLS) == 1 && digitalRead(ILS) == 1 && digitalRead(MS) == 1 && digitalRead(IRS) == 1 && digitalRead(ORS) == 0){
    turnRight();
  }
  else if (digitalRead(OLS) == 1 && digitalRead(ILS) == 1 && digitalRead(MS) == 1 && digitalRead(IRS) == 0 && digitalRead(ORS) == 0){
    turnRight();
  }


  else if (digitalRead(OLS) == 1 && digitalRead(ILS) == 1 && digitalRead(MS) == 1 && digitalRead(IRS) == 1 && digitalRead(ORS) == 1){
    Backward();
  }
  //else if (digitalRead(OLS) == 1 && digitalRead(ILS) == 1 && digitalRead(MS) == 1 && digitalRead(IRS) == 1 && digitalRead(ORS) == 1){
    //rightCircle();
  

    //delay(2000);
 
    //if (digitalRead(OLS) == 1 && digitalRead(ILS) == 1 && digitalRead(MS) == 1 && digitalRead(IRS) == 1 && digitalRead(ORS) == 1)
    //leftCircle()

  else {
    Stop();
  }
}

void Forward() {
  analogWrite(Motor_SpeedA, 215);
  analogWrite(Motor_SpeedB, 190);
  digitalWrite(M_A1, HIGH);//
  digitalWrite(M_A2, LOW);
  digitalWrite(M_B1, LOW);
  digitalWrite(M_B2, HIGH);
}

void turnLeft() {
  analogWrite(Motor_SpeedA, 150);
  analogWrite(Motor_SpeedB, 50);
  digitalWrite(M_A1, LOW);
  digitalWrite(M_A2, HIGH);
  digitalWrite(M_B1, LOW);
  digitalWrite(M_B2, HIGH);
}

void turnRight() {
  analogWrite(Motor_SpeedA, 150);
  analogWrite(Motor_SpeedB, 50);
  digitalWrite(M_A1, HIGH);
  digitalWrite(M_A2, LOW);
  digitalWrite(M_B1, HIGH);
  digitalWrite(M_B2, LOW);
}

void Backward() {
  analogWrite(Motor_SpeedA, 70);
  analogWrite(Motor_SpeedB, 42);
  digitalWrite(M_A1, LOW);
  digitalWrite(M_A2, HIGH);
  digitalWrite(M_B1, HIGH);
  digitalWrite(M_B2, LOW);
}
void leftCircle() {
  analogWrite(Motor_SpeedA, 100);
  analogWrite(Motor_SpeedB, 100);
  digitalWrite(M_A1, LOW);
  digitalWrite(M_A2, HIGH);
  digitalWrite(M_B1, HIGH);
  digitalWrite(M_B2, LOW);
}

void rightCircle() {
  analogWrite(Motor_SpeedA, 100);
  analogWrite(Motor_SpeedB, 100);
  digitalWrite(M_A1, HIGH);
  digitalWrite(M_A2, LOW);
  digitalWrite(M_B1, LOW);
  digitalWrite(M_B2, HIGH);
}

void Stop() {
  digitalWrite(M_A1, LOW);
  digitalWrite(M_A2, LOW);
  digitalWrite(M_B1, LOW);
  digitalWrite(M_B2, LOW);
}
