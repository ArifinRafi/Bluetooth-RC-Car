
int motor1_clock=3;
int motor1_anti=4;
int motor2_clock=5;
int motor2_anti=6;
char inp = 0;
void setup() {
  Serial.begin(9600);
  pinMode(motor1_clock, OUTPUT);
  pinMode(motor1_anti, OUTPUT);
  pinMode(motor2_clock, OUTPUT);
  pinMode(motor2_anti, OUTPUT); 

}

void loop() {
  if (Serial.available() > 0) {
     inp = Serial.read();
    if (inp == 'w') {
      forward();
      
    }

    else if (inp == 'd') {
      right();
      
    }
    else if (inp == 'a') {
     left();
      
    }
    else if (inp == 's') {
      backward();
      
     }
     else if (inp == 'x') {
      stopp();
      
    
  }
  }
}

void forward() {
  Serial.println("GOING FORWARD.....");
  Serial.println(inp);
      digitalWrite(motor1_clock, HIGH);
      digitalWrite(motor1_anti, LOW);
      digitalWrite(motor2_clock, LOW);
      digitalWrite(motor2_anti, HIGH);
      }

void backward() {
  Serial.println("GOING BACKWARD.....");
  Serial.println(inp);
  digitalWrite(motor1_clock, LOW);
      digitalWrite(motor1_anti, HIGH);
      digitalWrite(motor2_clock, HIGH);
      digitalWrite(motor2_anti, LOW);
  }

void right() {
  Serial.println("GOING RIGHT.....");
  Serial.println(inp);
  digitalWrite(motor1_clock, HIGH);
      digitalWrite(motor1_anti, LOW);
      digitalWrite(motor2_clock, HIGH);
      digitalWrite(motor2_anti, LOW);
  
}

void left() {
  Serial.println("GOING LEFT.....");
  Serial.println(inp);
   digitalWrite(motor1_clock, LOW);
      digitalWrite(motor1_anti, HIGH);
      digitalWrite(motor2_clock, LOW);
      digitalWrite(motor2_anti, HIGH);
  
}

void stopp() {
  Serial.println("STOP");
  Serial.println(inp);
  digitalWrite(motor1_clock, LOW);
      digitalWrite(motor1_anti, LOW);
       digitalWrite(motor2_anti, LOW);
      digitalWrite(motor2_clock, LOW);
     
  
}
  
 
