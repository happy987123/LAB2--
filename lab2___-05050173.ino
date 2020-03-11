const byte NUM=8;
const byte led[]={7,8,9,12,13,14,15,16};
const int delaytime=1000;
int ii;
void setup() {
for(ii=0;ii<NUM;ii++)
{
   pinMode(led[ii],OUTPUT);
}
}
void loop() {

  digitalWrite(led[0],HIGH);
  digitalWrite(led[1],HIGH);
  digitalWrite(led[2],HIGH);
  digitalWrite(led[3],HIGH);
  digitalWrite(led[4],HIGH);
  digitalWrite(led[5],HIGH);
  digitalWrite(led[6],HIGH);
  digitalWrite(led[7],HIGH);
      delay(300);
  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  digitalWrite(led[2],LOW);
  digitalWrite(led[3],LOW);
  digitalWrite(led[4],LOW);
  digitalWrite(led[5],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[7],LOW);
      delay(300);
  digitalWrite(led[0],HIGH);
  digitalWrite(led[1],HIGH);
  digitalWrite(led[2],HIGH);
  digitalWrite(led[3],HIGH);
  digitalWrite(led[4],HIGH);
  digitalWrite(led[5],HIGH);
  digitalWrite(led[6],HIGH);
  digitalWrite(led[7],HIGH);
      delay(300);
  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  digitalWrite(led[2],LOW);
  digitalWrite(led[3],LOW);
  digitalWrite(led[4],LOW);
  digitalWrite(led[5],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[7],LOW);
      delay(300);
      
for(ii=0;ii<NUM;ii++)
{

 digitalWrite(led[ii],HIGH);//左到右
    delay(delaytime);
 digitalWrite(led[ii],LOW);
}

  delay(100);
//2.
digitalWrite(led[0],HIGH);
digitalWrite(led[1],HIGH);
digitalWrite(led[2],HIGH);
digitalWrite(led[3],HIGH);
digitalWrite(led[4],HIGH);
digitalWrite(led[5],HIGH);
digitalWrite(led[6],HIGH);
digitalWrite(led[7],HIGH);
    delay(300);
digitalWrite(led[0],LOW);
digitalWrite(led[1],LOW);
digitalWrite(led[2],LOW);
digitalWrite(led[3],LOW);
digitalWrite(led[4],LOW);
digitalWrite(led[5],LOW);
digitalWrite(led[6],LOW);
digitalWrite(led[7],LOW);
    delay(300);

for(ii=NUM-1;ii>=0;ii--)
{
 digitalWrite(led[ii],HIGH);//右到左
    delay(delaytime);
 digitalWrite(led[ii],LOW);
}
delay(100);

}
