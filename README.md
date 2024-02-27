 # Fantasy Brawl
 > Authors: [Burhanuddin Taquee](https://github.com/btaquee), [Amandeep Singh](https://github.com/AmandepSingh180d), [Shasha Chen](https://github.com/ShashaChen616), [Cruz Lopez](https://github.com/CruzL0924)
## Project Description
  * Why is it important or interesting to you?
    * This game will be a great experience for us and will teach us more about collaborating on a real-world project. We are all interested in fantasy RPG games so it will be great to implement our own, and branch out our creativity. Having different types of mythical characters brawling to the death will be a massive hit among fantasy lovers. 
  * What languages/tools/technologies do you plan to use? (This list may change over the course of the project)
    * We will use VS code to write our code and GitHub for version control. Our main language for the backend will be C++. Scrum patterns, user stories.
  * What will be the input/output of your project?
   * Menu will ask how many people are playing or single-player mode, and whether or not there will be CPUs playing as well. Users will input their choice of character. Users can see character stats, inventory, and health. Console will output actions and/or damage after turns. As each player is eliminated console will output who defeated who. Console will output the last man standing as the winner. Will input who they want to attack, ally with, or other actions.
  * What are the features that the project provides?
   * Multiplayer mode: Up to 6 characters will brawl to the death! There can be live players as well as CPUs. Players can form alliances to attack certain players together. Stat changes when alliances are     formed. Last man standing takes home the Fantasy Brawl trophy. 
   * Each character will have a set of powers, attributes, inventories, weapons, health, attacks, and skills.
   * Players will roll dice to determine the moves they can make. Will input who they want to attack, or ally with.
 > This description should be in enough detail that the TA/instructor can determine the complexity of the project and if it is sufficient for the team members to complete in the time allotted. 

### Navigation Diagram
> <img width="955" alt="nav1" src="https://github.com/cs100/final-project-asing241-clope265-btaqu001-schen568/blob/master/navDiagram.png">

 User starts at title screen. Then chooses single or multiplayer mode. Once option is selected then it will proceed as below:
 
 * Multiplayer - User is prompted to input number of players, once done is then sent to choose character screen to choose one of 4 different characters with all stats appearing. This will repeat for how many players that are playing with a slight difference to Player _ is choosing. Players will roll to determine turn order. Then game begins at battle screen, where battle is looped for each players turns until there is only on player standing. Each turn players will choose to attack or add to inventory based on dice outcome. Once a player chooses an action, that action will pop up a new menu liting the different kinds of actions or even the inventory screen. Once the action is chosen, the battle screen will loop, but with the next players' name. Once winner is determined user will be taken to trophy screen. User wil then be sent to the play again or quit game screen. Once an action is chosen, the program will end or it will loop back to the title screen depending on the action chosen by the player. 
 
 * Singleplayer -  Choose character screen to choose one of 4 different characters. Then game begins at battle screen, where battle is looped for the player until the big bad guy is defeated. Each turn players will choose to attack or add to inventory based on dice outcome. Once a player chooses an action, that action will pop up a new menu liting the different kinds of actions or even the inventory screen. Once the action is chosen, the battle screen will loop, but with the npc choosing their actions. Alternatively if the player fails and lands at 0 health, they will be sent to a gameover screen. If the player suceeds and defeats the big bad guy then they will be sent to obtain the trophy.User wil then be sent to the play again or quit game screen. Once an action is chosen, the program will end or it will loop back to the title screen depending on the action chosen by the player. 
### Screen Layouts
> ![Title Screen](https://github.com/cs100/final-project-asing241-clope265-btaqu001-schen568/blob/master/ScreenshotPics/TitleScreen.PNG)

This screen above is the first screen that the user will see.

> ![Choose Mode](https://github.com/cs100/final-project-asing241-clope265-btaqu001-schen568/blob/master/ScreenshotPics/ChooseMode.PNG)

The screen above user will then be prompted with whether they would like to play multiplayer or singleplayer.

> ![Character Select](https://github.com/cs100/final-project-asing241-clope265-btaqu001-schen568/blob/master/ScreenshotPics/CharacterSelect.PNG)

They screen above will then be prompted with which character they would like to select, this will be repeated with small changes to which player is choosing.

> ![Battle Screen](https://github.com/cs100/final-project-asing241-clope265-btaqu001-schen568/blob/master/ScreenshotPics/BattleScreen.PNG)

The screen above will then be shown to the player in which they are prompted to choose an action. This screen will be reused for listing attacks and listing inventory of the current player if the options are chosen.

> ![Trophy Screen](https://github.com/cs100/final-project-asing241-clope265-btaqu001-schen568/blob/master/ScreenshotPics/PlayerWins.PNG)

This screen above will appear to the player when 3 out of the 4 players have 0 health or if in single player, they have defeated the big bad guy. Displaying both stats and the winner.

> ![Game Over Screen](https://github.com/cs100/final-project-asing241-clope265-btaqu001-schen568/blob/master/ScreenshotPics/GameOver.PNG)

This screen above will appear when singleplayer is chosen and the player has 0 health and has not defeated the big bad guy.

> ![Play Again Screen](https://github.com/cs100/final-project-asing241-clope265-btaqu001-schen568/blob/master/ScreenshotPics/PlayAgain.PNG)

This screen above will be produced either after the trophy screen, or after the game over screen, prompting the player to restart or quit.

> ![Roll Dice Screen](https://github.com/cs100/final-project-asing241-clope265-btaqu001-schen568/blob/master/ScreenshotPics/RollDice.PNG)

This screen above will show the players rolling dice, and will be edited with showing the number of the character and what they rolled, once the player enters confirm.

## Class Diagram
 > ![cs100 uml diagram](https://github.com/cs100/final-project-asing241-clope265-btaqu001-schen568/blob/master/ScreenshotPics/UMLClassDiagram.png)
 
 > Above is the UML diagram for Fantasy Brawl project.

A note for the inputs that the player gives, inputs will almost always be 1-4 and if an incorrect input is entered they will be prompted to input the correct corresponding values for their choices from the user-input function within the player-manager class. 

The functionality of the project is largely based on the player management class, this is because of the amount of choices that rely heavily on player input. The player-manager will not only be able to keep track of the statistics of each player (total damage and remaining health) but will also manage their attack. The character class will have the basic character creation once the user has inputted that they want to be a certain character, and then an object of that character will be implemented. Within this implementation, a function will be used in order to randomize the inventory based on their classes. For example, if the mage class is selected, they will have a higher chance to have potions and buffs toward their special attacks. This character class will be the parent class to the remaining 4 classes in the game, known as mage, archer, knight, and thief. The player will move through multiple screens based on the input given to the menu class. There will be individual functions for each type of screen, in order to output the correct theme. For example, the choose a character screen will appear and then loop depending on how many characters are inputted from the previous input. Then the character screen will be updated to the next player until there are no more players left to pick. These screens would be updated and changed based on which characters turn it is. This is controlled via a function in the player-manager. This function is playerTurn and will loop when a screen is changed and a player has made their choice.

The players will get to choose who they attack via text and may enter 1 to 4 (yes they can attack themselves), this will be done within the player management class in which they will be able to have an attack choice function. In terms of choices, the players will have four based on their dice roll. The first is the attack choice, which will list all the available attacks, updating the screen to show this. The attacks will be listed via a function within the player management class, but the damage will be calculated separately, relying on the checking of which type of character they are. This will then calculate the damage for a regular attack. The damage function will be incorporated within the player management class. These damage values will also be calculated by the random dice roll given to characters per each turn, through a separate function that is purely for randomized dice rolls. The second option that will occur will be an option to use a special attack. These attacks use special points but will do higher damage, and be class-based. This will be implemented within the attack function and will use the check special points function in order to check if the player has enough special points to use their attack, if not they will be prompted to either back out or choose a different attack, done from the menu class. The third option is to check inventory, in which the menu class will efficiently move toward the next scene, showing the players' inventory and enabling them to use buffs. If the buff is a defense up or attacks up, the attack function will have a check from the checkBuffs function in order to accommodate for this. The fourth option is a joke option, that lets you skip your turn and take damage. This option is to run, and you will be given text that states that you have fallen over and are being laughed at for running. In terms of measuring the stats, when any damage is taken or given through the damage function in playerManager, it will update in the stat manager class via a function, and will also be sent to the character object to update their health. This update will also be shown in real-time to the health and special points displayed within the menu class.

At the end of the game, once there is only 1 character with health remaining, they will be rewarded with a victory screen, and the stat manager will provide this to the menu for it to be incorporated for every player. Then the players will be prompted to play again or quit. If they choose the option of quitting the program will end. If they choose to play again, everything will be reset, and be sent back to the title screen.
 
 > ## Phase III
 > You will need to schedule a check-in for the second scrum meeting with the same reader you had your first scrum meeting with (using Calendly). Your entire team must be present. This meeting will occur on week 8 during lab time.
 
 > BEFORE the meeting you should do the following:
 > * Update your class diagram from Phase II to include any feedback you received from your TA/grader.
 > * Considering the SOLID design principles, reflect back on your class diagram and think about how you can use the SOLID principles to improve your design. You should then update the README.md file by adding the following:
 >   * A new class diagram incorporating your changes after considering the SOLID principles.
 >   * For each update in your class diagram, you must explain in 3-4 sentences:
 >     * What SOLID principle(s) did you apply?
 >     * How did you apply it? i.e. describe the change.
 >     * How did this change help you write better code?
 > * Perform a new sprint plan like you did in Phase II.
 > * You should also make sure that your README file (and Project board) are up-to-date reflecting the current status of your project and the most recent class diagram. Previous versions of the README file should still be visible through your commit history.
 
> During the meeting with your reader you will discuss: 
 > * How effective your last sprint was (each member should talk about what they did)
 > * Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 > * Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 > * What tasks you are planning for this next sprint.

 
 > ## Final deliverable
 > All group members will give a demo to the reader during lab time. ou should schedule your demo on Calendly with the same reader who took your second scrum meeting. The reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
