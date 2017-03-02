import processing.serial.*;

Serial port;
String inString;
int inByte;
//Boolean food = false;


PImage img;
float[] y = new float[3000];
Particle[] particles = new Particle[0];
int maxParticles =20;

void setup () {
  size(900, 600);
  background(0, 180, 240); //blue background
  smooth();
  img = loadImage ("1f349.png");

  //find arduino
  println(Serial.list());
  port = new Serial(this, Serial.list()[2], 9600);  // make sure Arduino is talking serial at this baud rate
  port.clear();            // flush buffer
  port.bufferUntil('\n');  // set buffer full flag on receipt of carriage return
}




void draw() {

  background(0, 130, 200);

  String inString = port.readStringUntil('\n'); 

  if (inString !=null) {      // trim off any whitespace:  
    inString = trim(inString);
    println (inString);
    inByte = int(inString);
    println (inByte);

    //if (inByte > 100 ) {
    particles = (Particle[]) append(particles, new Particle(100, 0));

    if (particles.length>maxParticles) {
      particles = (Particle[]) subset(particles, 1);
    }
    for (int i=0; i<particles.length; i++) {

      particles[i].x += particles[i].xVel;
      particles[i].y += particles[i].yVel;

      // image(img,x,y[i],img.width/6, img.height/6);
      // if (inByte >100){
      image(img, particles[i].x, particles[i].y, img.width/10, img.height/10);
      delay (6);
    }
    //food = true;
  }
}
//}


class Particle {
  float x, y;
  float xVel, yVel;

  Particle(float xpos, float ypos) {

    x=xpos=random(0, 600);
    y=ypos-5;
    xVel=random(-2, 2);
    yVel=random(0, 30);
  }
}
