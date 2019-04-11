boolean digital(int pin){
  int value=analogRead(pin);
  if(value>900){
    return true;
    }
    else{
      return false;
      }
  }


void action(int a,int b,int c,int d,int e,int f,int g,int h,int spL,int spR){

  
   if(digital(A8)==a && digital(A7)==b && digital(A6)==c && digital(A5)==d && digital(A4)==e && digital(A3)==f && digital(A2)==g && digital(A1)==h)    // Move Forward (010)
  {
    modeL=a+b+c+d;
  modeR=e+f+g+h;
  mode=modeL-modeR;
   forward(spL,spR);
   //Serial.println("Move Forward (010)");
  
  }

    
 
}


boolean out(int i){
int x=0;
x=digital(i);
  if(x==1){
    return true;
    }
  else{
    return false;
    }
  
  }


  void sensorOuts(){

     Serial.print(digital(LS));
  Serial.print(digital(MS));
  Serial.print(digital(RS));
Serial.print("   ");

  Serial.print(digital(A8));
  Serial.print(digital(A7));
  Serial.print(digital(A6));
  Serial.print(digital(A5));
  Serial.print(digital(A4));
  Serial.print(digital(A3));
  Serial.print(digital(A2));
  Serial.print(digital(A1));

 // delay(500);
 
  Serial.println();
    
    
    }


