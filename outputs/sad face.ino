char letter; 
String words =" ";
PFont font;

import gifAnimation.*;

PImage[] animation;
Gif loopingGif;
Gif nonLoopingGif;
boolean pause = false;

public void setup() {
  size(1200, 800);

  frameRate(100);
  smooth();

  println("gifAnimation " + Gif.version());
  // create the GifAnimation object for playback
  loopingGif = new Gif(this, "sad face.gif");
  loopingGif.loop();
  // create the PImage array for the interactive display
  animation = Gif.getPImages(this, "sad face.gif");
  font = loadFont ("Athelas-Regular-48.vlw");
}

void draw() {
  background(255);
  fill (81, 167, 249);
  noStroke ();
  rect(8, 42, 200, 35, 8);    //x,y,width,height,radius

  textFont (font, 16);
  fill (255);
  noStroke ();
  text ("You sound sad, are you ok?", 15, 65);

  //shows words
  fill (0);
  text (words, 800, 100, 540, 300);

  if (key == '.') {
    fill(57, 181, 74);
    rect (470, 158, 268, 35, 8);
    noStroke ();

    fill(255);
    text ("Are you sure, your face look like this.", 473, 180);

    image(loopingGif, 370, 240, loopingGif.width*2.5, loopingGif.height*2.5);
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

//  void keyPressed() {
//  println("pressed " + int(key) + " " + keyCode);
//}
//
//void mousePressed() {
//  loopingGif.play();
//   image(loopingGif, 10, height / 2 - loopingGif.height / 2);
//}

