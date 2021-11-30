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
//  Noun:     cat
//  action 1: the cat meows
cat.meow();
//  action 2: the cat eats
cat.eat();
//  action 3: the cat pounces
cat.pounce();
//  2)
//  Noun:     bus
//  action 1: the bus stops
bus.stop();
//  action 2: the bus turns left
bus.turnLeft();
//  action 3: the bus honks horn
bus.honkHorn();
//  3)
//  Noun:      grass
//  action 1:  the grass photosynthesizes
grass.photosynthesize();
//  action 2:  the grass disperses seed
grass.disperseSeed();
//  action 3:  the grass dies
grass.die();
//  4)
//  Noun:     black radiator
//  action 1: the black radiator heats up
blackRadiator.heatUp();
//  action 2: the black radiator cools down
blackRadiator.coolDown();
//  action 3: the black radiator leaks steam
blackRadiator.leakSteam();
//  5)
//  Noun: toe
//  action 1: the toe is stubbed
toe.stub();
//  action 2: the toe wiggles up and down
toe.wiggleUpandDown();
//  action 3: the toe grows toenail
toe.growToenail();
//  6)
//  Noun:     hand
//  action 1: the hand twists side to side
hand.twistsSidetoSide();
//  action 2: the hand forms a thumbs up
hand.formThumbsUp();
//  action 3: the hand forms a thumbs down
hand.formThumbsDown();
//  7)
//  Noun:     blue dog
//  action 1: the blue dog woofs loudly
blueDog.woofLoudly();
//  action 2: the blue dog shakes off water
blueDog.shakeOffWater();
//  action 3: the blue dog sniffs the air
blueDog.sniffAir();
//  8)
//  Noun:      jacket
//  action 1: the jacket tears
jacket.tear();
//  action 2: the jacket zips open
jacket.zipOpen();
//  action 3: the jacket zips closed
jacket.zipClosed();
//  9)
//  Noun:      rabbit
//  action 1: the rabbit hops
rabbit.hop();
//  action 2: the rabbit hides
rabbit.hide();
//  action 3: the rabbit eats a carrot
rabbit.eataCarrot();
//  10)
//  Noun:     bear
//  action 1: the bear eats honey
bear.eatHoney();
//  action 2:  the bear scratches its back
bear.scratchBack();
//  action 3: the bear hibernates
bear.hibernate();


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
