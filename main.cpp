#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.

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
 
 5) When you finish, commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].

Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
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
//  Noun: foot
//  action 1: the foot hurts
foot.hurt();
//  action 2: the foot fails
foot.fail();
//  action 3: the foot smells
foot.smell();
//  2)
//  Noun: skin
//  action 1: the skin crawls
skin.crawl();
//  action 2: the skin sheds
skin.shed();
//  action 3:  the skin peels
skin.peel();
//  3)
//  Noun: cable
//  action 1: the cable conducts
cable.conduct();
//  action 2: the cable rips
cable.rip();
//  action 3: the cable creates hum
cable.createHum();
//  4)
//  Noun: filter
//  action 1: the filter filters certain frequencies
filter.filterCertainFrequencies();
//  action 2: the filter resonates
filter.resonate();
//  action 3: the filter sweeps
filter.sweep();
//  5)
//  Noun: the Dual Universal Slope Generator
//  action 1: the Dual Universal Slope Generator cycles
dualUniversalSlopeGenerator.cycle();
//  action 2: the Dual Universal Slope Generator generates
dualUniversalSlopeGenerator.generate();
//  action 3: the Dual Universal Slope Generator slews
dualUniversalSlopeGenerator.slew();
//  6)
//  Noun: folding bike
//  action 1: the folding bike folds
foldingBike.fold();
//  action 2: the folding bike  rolls
foldingBike.roll();
//  action 3: the folding bike crashes 
foldingBike.crash();
//  7)
//  Noun: soldering iron
//  action 1: the soldering iron melts
solderingIron.melt();
//  action 2: the soldering iron solders
solderingIron.solder();
//  action 3: the soldering iron burns
solderingIron.burn();
//  8) 
//  Noun: sine wave
//  action 1: the sine wave calibrates
sineWave.calibrate();
//  action 2: the sine wave addsSub
sineWave.addSub();
//  action 3: the sine wave annoys
sineWave.annoy();
//  9)
//  Noun: Pro Tools
//  action 1: Pro Tools crashes
proTools.crash();
//  action 2: Pro Tools costs a lot
proTools.costALot();
//  action 3: Pro Tools should fix its legacy code
proTools.fixLegacyCode();
//  10)
//  Noun: boat
//  action 1: the boat floats on water (to avoid having a "float" function)
boat.floatOnWater();
//  action 2: the boat sinks
boat.sink();
//  action 3: the boat honks
boat.honk();


#endif

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
