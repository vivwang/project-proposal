import processing.serial.*;
import guru.ttslib.*;

Serial port;
String inString;
int inByte;
int BPM;

TTS tts;

String script = "oh, dear, you feel stressed, please breathe with me.";
//String inString;
boolean beat = false;

void setup() {
  size(400, 400);
  smooth();
  tts = new TTS();

  //find arduino
  println(Serial.list());
  port = new Serial(this, Serial.list()[2], 9600);  // make sure Arduino is talking serial at this baud rate
  port.clear();            // flush buffer
  port.bufferUntil('\n');  // set buffer full flag on receipt of carriage return
}


void draw() {
  background(0);
}

void serialEvent (Serial port) {
  String inString = port.readStringUntil('\n'); 

  if (inString !=null) {      // trim off any whitespace:  
    inString = trim(inString);
    println (inString);
    if (inString.charAt(0) == 'B') {
      inString = inString.substring(1);
      BPM = int(inString);
      beat = true;
      //inByte = int(inString);
      //println (inByte);
      if (BPM >100) {
        TextToSpeech.say(script);
      }
    }
  }
}


//voice choice
import java.io.IOException;
static class TextToSpeech extends Object {

  // Store the voices, makes for nice auto-complete in Eclipse

  static final String VICKI = "Vicki";


  // throw them in an array so we can iterate over them / pick at random
  static String[] voices = {
    VICKI
  };

  // this sends the "say" command to the terminal with the appropriate args
  static void say(String script, String voice, int speed) {
    try {
      Runtime.getRuntime().exec(new String[] {
        "say", "-v", voice, "[[rate " + speed + "]]" + script
      }
      );
    }
    catch (IOException e) {
      System.err.println("IOException");
    }
  }

  // Overload the say method so we can call it with fewer arguments and basic defaults
  static void say(String script) {
    // 200 seems like a resonable default speed
    say(script, VICKI, 180);
  }
}
