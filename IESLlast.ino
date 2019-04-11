#define LS A8      // left sensor
#define MS A5      // middle sensor
#define RS A2     // right sensor

//M1
int enA = 5;
int in1 = 3;
int in2 = 4;
//M2
int enB = 6;
int in3 = 7;
int in4 = 8;
boolean line = false;
boolean lineB=false;

int rotated = 0;

int dSpeed = 50;
int mode = 0;
int modeL = 0;
int modeR = 0;
int lineCount = 0;
int beepPin = 31;

int encoderValue = 0;
void count(void);

void setup()
{
  pinMode(LS, INPUT);
  pinMode(MS, INPUT);
  pinMode(RS, INPUT);
  pinMode(beepPin, OUTPUT);
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  delay(500);

  pinMode(21, INPUT);
  attachInterrupt(2, count, FALLING); //A


  Serial.begin(9600);

  //encoderWrite(170,1);

}


void loop() {

  sensorOuts(); //print sensor values

  //scans(); //take actions

if(lineB==false){
  scansWhite();





  if (digital(A8) == 1 && digital(A7) == 1 && digital(A6) == 1 && digital(A5) == 1 && digital(A4) == 1 && digital(A3) == 1 && digital(A2) == 1 && digital(A1) == 1 && rotated==0) {
    forward(0, 0);
    Serial.println("Detected");

    beep(500);
    encoderWrite(80, 1, 1);
    delay(1000);
     encoderWrite(200, -1, -1);
     forward(0, 0);
    beep(500);
    encoderWrite(80, 1, 1);
    
  rotated=1;
lineB=true;
  }
  
}

if(lineB==true){
  
  scans();
if (digital(A8) == 0 && digital(A7) == 0 && digital(A6) == 0 && digital(A5) == 0 && digital(A4) == 0 && digital(A3) == 0 && digital(A2) == 0 && digital(A1) == 0 && rotated==1) {
    forward(0, 0);
    Serial.println("Detected");

    //beep(500);
    encoderWrite(100, 1, 1);
    forward(0, 0);
    delay(1000);
     encoderWrite(300, -1, -1);
     forward(0, 0);
    beep(500);
    //encoderWrite(50, 1, 1);
    
  rotated=2;
//lineB=true;
  }

  if (digital(A8) == 1 && digital(A7) == 1 && digital(A6) == 1 && digital(A5) == 1 && digital(A4) == 1 && digital(A1) == 0 && rotated==2) {
    forward(0, 0);
    Serial.println("Detected");

    //beep(500);
    encoderWrite(300, 1, 1);
    forward(0, 0);
    delay(1000);
     encoderWrite(200, 1, -1);
     forward(0, 0);
    beep(500);
    //encoderWrite(50, 1, 1);
    
  rotated=3;
//lineB=true;
  }

  

  
  
  }

  
  Serial.print(modeL);
  Serial.println(modeR);

}


void count() {
  encoderValue++;
}






