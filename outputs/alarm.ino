char letter; 
String words =" ";
PFont font;

import gifAnimation.*;
import ddf.minim.*;

Minim minim;
AudioPlayer player;


PImage[] animation;
Gif loopingGif;
Gif nonLoopingGif;
boolean pause = false;


void setup() {
  size(1200, 800);
  frameRate(100);
  smooth();
  println("gifAnimation " + Gif.version());
  // create the GifAnimation object for playback
  loopingGif = new Gif(this, "alarm.gif");
  loopingGif.loop();
  // create the PImage array for the interactive display
  animation = Gif.getPImages(this, "alarm.gif");

  // f = createFont("Arial", 18);
  font = loadFont ("AvenirNext-Regular-48.vlw");

  minim = new Minim(this);
  player = minim.loadFile("alarm.mp3");
}

void draw() {
  background(255);
  // fill (0);
  fill (81, 167, 249);
  noStroke ();
  rect(8, 42, 285, 35, 8);    //x,y,width,length,radius

  textFont (font, 16);
  fill (255);
  noStroke ();
  text ("send an angry message to your mum", 15, 65);


  //shows words
  fill (0);
  text (words, 800, 100, 540, 300);


  if (key == '.') {
    image(loopingGif, 350, 150, loopingGif.width*2.5, loopingGif.height*2.5);  
    player.play();
    fill(0);

    text ("Are you sure to send this", 350, 690);
    text ("Sending this message will have the following results:", 350, 720);
    text ("Your mum gets more angry than you!", 350, 750);
    text ("You will not have dinner cooked for a week!", 350, 780);
  }
}

//show typed words
void keyTyped() {
  if ((key >= 'A' && key <= 'z') || key == ' ') {
    letter = key;
    words = words + key;
    // Write the letter to the console
    println(key);
  }
}

