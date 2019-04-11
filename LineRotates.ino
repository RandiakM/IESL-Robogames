void rotateForLine(int sL,int sR){
  
  forward(0,0);
  delay(2000);
  Serial.println("stoped");
  while(!(modeL==2 && modeR==2)){
    mpower(1,1,sL);
    mpower(2,-1,sR);
    Serial.println("Rorate");
    scans();
    }
  }
