
#define sen_1  2
#define sen_2  3
#define sen_3  18
#define sen_4  19
#define sen_5  16
#define sen_6  17
#define sen_7  20
#define c1s1  21
#define c1s2  23
#define c2s1  25
#define c2s2  27
#define suction  8 
#define robless  5
#define cy_1  9
#define air_grip  22
#define cy_2  46
#define tn1  7
#define tn2  24
#define convager_1  4  
#define convager_2  6
#define convager_3  10
#define green 28
#define red  26
#define yellow 30

int b=1;

void setup() {

  pinMode(sen_1,INPUT);
  pinMode(sen_2,INPUT);
  pinMode(sen_3,INPUT);
  pinMode(sen_4,INPUT);
  pinMode(sen_5,INPUT);
  pinMode(sen_6,INPUT);
  pinMode(sen_7,INPUT);

  pinMode(c1s1,INPUT);
  pinMode(c1s2,INPUT);
  pinMode(c2s1,INPUT);
  pinMode(c2s2,INPUT);

  pinMode(suction,OUTPUT);
  pinMode(robless,OUTPUT); 
  pinMode(cy_1 ,OUTPUT); 
  pinMode(air_grip,OUTPUT); 
  pinMode(tn1,OUTPUT); 
  pinMode(tn2,OUTPUT); 
  pinMode(cy_2,OUTPUT); 
  pinMode(convager_1,OUTPUT); 
  pinMode(convager_2,OUTPUT); 
  pinMode(convager_3,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT); 
}

void loop() {
if (b==1){
    digitalWrite(red,HIGH);
    digitalWrite(yellow,HIGH);
    digitalWrite(green,LOW); 
    analogWrite(convager_1,0);
    analogWrite(convager_2,0);
    analogWrite(convager_3,0);
    digitalWrite(sen_1,HIGH);
    digitalWrite(sen_2,LOW);
    digitalWrite(sen_3,HIGH);
    digitalWrite(sen_4,HIGH);
    digitalWrite(sen_5,HIGH);
    digitalWrite(sen_6,HIGH);
    digitalWrite(sen_7,LOW);
    digitalWrite(c1s1,HIGH);
    digitalWrite(c1s2,HIGH);
    digitalWrite(c2s1,HIGH);
    digitalWrite(c2s2,HIGH);
    digitalWrite(suction,HIGH);
    digitalWrite(robless,HIGH);
    digitalWrite(cy_1,HIGH);
    digitalWrite(air_grip,HIGH);
    digitalWrite(tn1,HIGH);
    digitalWrite(tn2,HIGH);
    digitalWrite(cy_2,HIGH);
    b=2;
    
    
  }
  if(b==2){
      if(digitalRead(sen_1==0){
      b=3;
    }
    
  }
  if (b==3){
    analogWrite(convager_1,127);
    digitalWrite(yellow,LOW);
    b=4;
  }
   if(b==4){
    if(digitalRead(sen_2==1){
    b=5;  
    }
   }
   if (b==5){
    analogWrite(convager_1,0);
    delay(5000);
    digitalWrite(red,LOW);
    analogWrite(convager_1,127);
    digitalWrite(red,HIGH);
    b=6;
   }
   if (b==6){
    if(digitalRead(sen_3==0){
      b=7;
    }
   }
   if (b==7){
    analogWrite(convager_1,0);
    digitalWrite(robless,LOW);
    delay(2000);
    digitalWrite(tn1,LOW);
    delay(2000);
    digitalWrite(suction,LOW);
    delay(2000);
    digitalWrite(tn1,HIGH);
    delay(2000);
    digitalWrite(robless,HIGH);
    delay(2000);
    digitalWrite(tn1,LOW);
    delay(2000);
    digitalWrite(suction,HIGH);
    delay(2000);
    digitalWrite(tn1,HIGH);
    b=8;
   }
   if (b==8){
    if(digitalRead(sen_4==0){
      b=9;
    }
    
   }
   if (b==9){
    analogWrite(convager_2,127);
    b=10;
    
   }
   if (b==10){
    if(digitalRead(sen_5==0){
      b=11;
    }
   }
   if (b==11){
    delay(200);
    analogWrite(convager_2,0);
    b=12;
    
   }
   if (b==12){
    if(digitalRead c1s1==0 && digitalRead c2s1==0){
        b=13;
      
    }
    
   }
   if (b==13){
     digitalWrite(cy_2,LOW);
     delay(2000);
     b=14;
   }
   if (b==14){
    if(digitalRead(c2s2==0){
      b=15;
    }
   }
   if (b==15){
    digitalWrite(air_grip,LOW);
    delay(2000);
    digitalWrite(cy_2,HIGH);
    delay(2000);
    b=16;
   }
   if (b==16){
    if(digitalRead(c2s1==0){
      b=17;
    }
   }
   if(b==17){
    digitalWrite(cy_1,LOW);
    delay(200);
    b=18;
    
   }
   if (b==18){
    if(digitalRead(c1s2==0){
      b=19;
    }
   }
   if (b==19){
     digitalWrite(cy_2,LOW); 
     delay(2000);
     b=20;
   }
   if (b==20){
     if(digitalRead(c2s2==0){
     b=21;
        
      }
   }
   if (b==21){
    digitalWrite(air_grip,HIGH);
    delay(2000);
    digitalWrite(cy_2,HIGH);  
    delay(2000);
    b=22;
   }
   if (b==22){
    if(digitalRead(c2s1==0){
      b=23;
    }
   }
   if (b==23){
    if(digitalRead(sen_5==0){
      b=24;
    }
   }
   if (b==24){
    analogWrite(convager_2,127);
    b=25;
   }
   if (b==25){
    if(digitalRead(sen_6==0){
    b=26; 
    }
   }
   if (b==26){
    analogWrite(convager_2,0); 
    analogWrite(convager_3,127);
    digitalWrite(tn2,LOW);
    delay(2000);
    digitalWrite(tn2,HIGH);
    delay(2000);
    b=27;
   }
   if (b==27){
    if(digitalRead(sen_7==1){
    b=28;
    }
   }
   if (b==28){ 
     analogWrite(convager_3,0); 
     digitalWrite(yellow,HIGH);
     b=1;
   }
   
   
  
  

}
