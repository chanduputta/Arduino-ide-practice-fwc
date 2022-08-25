//Declaring all variables as integers
int a=0,b=1,c=1,d=0;
int A,B,C,D,E,F,G;
//Code released under GNU GPL.  Free to use for anything.
void disp_7447(int E,int F,int G,int D, int C, int B, int A)
{
  digitalWrite(2, A); //LSB
  digitalWrite(3, B); 
  digitalWrite(4, C); 
  digitalWrite(5, D); 
  digitalWrite(6, E); 
  digitalWrite(7, F); 
  digitalWrite(8, G); //MSB

}
// the setup function runs once when you press reset or power the board
void setup() {
    pinMode(2, OUTPUT);  
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);  
    pinMode(7, OUTPUT);
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
    
}

// the loop function runs over and over again forever
void loop() {
  A=(!a&&!b&&!c&&d) || (!a&&b&&!c&&!d);
  B=(!c&&d&&!a&&b) || (!a&&b&&c&&!d);
  C=(!a&&!b&&c&&!d);
  D= (!a&&b&&!c&&!d)||(!a&&!b&&!c&&d)||(!a&&b&&c&&d);
  E=(!a&&b&&!c) || (!a&&c&&d)||(a&&!b&&!c&&d);
  F=(!a&&!b&&d)||(!a&&!b&&c)||(!a&&c&&d);
  G=(!a&&!b&&!c)||(!a&&b&&c&&d);
  
disp_7447(G,F,E,D,C,B,A);   

}
