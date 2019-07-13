import processing.serial.*;
int p_data;
Serial myPort;
float data;
float d;

void setup() { 
  myPort = new Serial(this,"COM5", 9600);
  size(600,600);
  background(0);
  stroke(128);
  smooth();
}

void draw() {
  p_data = myPort.read();
  println(p_data);
  background(0);
  if(myPort.available()>0){
      data=myPort.read();
      d=map(data,0,255,5,140);
      println(int(d));
       fill(255,0,0);
       ellipse(250,250,d+100,d+100);
    
  }   
}
