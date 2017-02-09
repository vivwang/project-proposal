# project-proposal
###(keyboard transformation)
##Project 1.1- Breathe with Me
 
####Description
My project is a flexible keyboard which can detect user's heart beat, play sound, inhale and exhale air. 
Set a level at 90, when user's pulse is over 90, use a timeframe 30s, if pulse continues to increase, the keyboard speaks, "are you nervour, please breathe with me to keep you calm". When pressure is above a certain level, and hit send, the window pops out an alert asking if the user really want to send the message. 

Considering these functions, I defined some areas I need to explore as follow.
* Design a flexible keyboard which can accomplish inhale and exhale movement
(rubber keyboard cover)
* Play sound while it detects user's heart beat over a certain range
(Pulse sensor, Arduino,speaker, processing)
* Inhale and exhale mechanics
* An alert when press send button 
(processing)

###Components
* Connect 1 button
* Measure how long a button hold
* Measure time difference between two presses (timeSpend = startTime- lastReleaseTime?)
* Connect 2 buttons
* Measure the time difference between 1 & 2 button presses
* Measure the repeatble signals from 1 button
* Use Force Sensitive Resistor 0.5" to detect pressure

##(Optional) Project 1.2- Don't Explore the Balloon 
(Due in a week)

####Description
My project is a keyboard which can detect the pressure when user types on keyboard. When pressure is above a certain level, the keyboard starts to inflate a balloon；Use a timeframe 30s, if pulse continues to increase, the speed of inflation increases, if user's pulse decreases, balloon starts to deflate. The balloon keeps to inflate until balloon explode. 


Considering these functions, I defined some areas I need to explore as follow.
* Design a mechanic that can inflate and deflate balloon
* Connect pressure sensor to detect when to blow the balloon
(pressure sensor, Arduino)

concern: what pressure sensor
        pressure: indi
        threadhold level, changing spikes, not absolute pressure
 

###(facial recognition)
##Project 2- Emoji
(Due in a week)

####Description
My project is a chat system which can detect user's facial emotion and auto send emoji. The system can show the user what his/her face look like when they are not aware of their emotion. Considering these functions, I defined some areas I need to explore as follow.
* Crack the facial recognition software
(Affedex Me)
* interface design
(processing)
