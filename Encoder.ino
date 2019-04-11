
//90 170
//180  410
void encoderWrite(int val, int d,int mode) { //left d 1 righr d -1 mode 1-f /-1-rotate
  encoderValue = 0;

if(mode==1){
  while (val > encoderValue) {
    mpower(1, d, 70);
    mpower(2, d, 70);
    Serial.print("Encoder Value=");
  Serial.println(encoderValue);
  }}
  if(mode==-1){
  while (val > encoderValue) {
    mpower(1, d, 70);
    mpower(2, -d, 70);
    Serial.print("Encoder Value=");
  Serial.println(encoderValue);
  }}
 
  // mpower(1,-1,100);
  //mpower(2,1,100);
  //delay(50);
  mpower(1, 0, 100);
  mpower(2, 0, 100);


}
