#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun:       synth
//  action 1:   the synth sends midi information
synth.sendMidi();
//  action 2:   the synth sends audio information
synth.sendAudio();
//  action 3:   the synth loads its default presets
synth.loadPresets();
//  2)
//  Noun:       muscle
//  action 1:   the muscle contracts
muscle.contract();
//  action 2:   the muscle rests
muscle.rest();    
//  action 3:   the muscle grows
muscle.grow();
//  3)
//  Noun:       computer
//  action 1:   the computer consumes electricity
computer.consumeElectricity();
//  action 2:   the computer stores data
computer.memory();
//  action 3:   the computer regulates temperature
computer.regulateTemp();
//  4)
//  Noun:       monkey
//  action 1:   the monkey climbs a tree
monkey.climbTree();
//  action 2:   the monkey peels fruit
monkey.peelFruit();
//  action 3:   the monkey grooms itself
monkey.groom();
//  5)
//  Noun:       aircraft
//  action 1:   the aircraft holds cargo
aircraft.holdCargo();
//  action 2:   the aircraft glides
aircraft.glide();
//  action 3:   the aircraft burns fuel
aircraft.burnFuel();
//  6)
//  Noun:       alarm
//  action 1:   the alarm checks the time
alarm.checkTime();
//  action 2:   the alarm plays an alert sound
alarm.alert();
//  action 3:   the alarm increases in volume if not responded to
alarm.alertLouder();
//  7)
//  Noun:       plant
//  action 1:   the plant synthesises light
plant.synthesiseLight();
//  action 2:   the plant grows flowers
plant.growFlower();
//  action 3:   the plant stores water
plant.storeWater();
//  8)
//  Noun:       mobile phone
//  action 1:   the phone searches for a signal provider
phone.signalSearch();
//  action 2:   the phone notifies the user when battery is low
phone.lowBatteryNotification();
//  action 3:   the phone charges it battery
phone.chargeBattery();
//  9)
//  Noun:       mailman
//  action 1:   the mailman collects the mail from the post office
mailman.collectMail(); 
//  action 2:   the mailman delivers the mail to the correct address
mailman.deliverMail();
//  action 3:   the mailman chases dogs for fun
mailman.chaseDog();
//  10)          
//  Noun:       painter
//  action 1:   the painter chooses a colour palette
painter.colourPalette();
//  action 2:   the painter chooses a brush type
painter.brushType();
//  action 3:   the painter sets up the canvas
painter.setupCanvas();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
