 # Fantasy Brawl
 > Authors: [Burhanuddin Taquee](https://github.com/btaquee), [Amandeep Singh](https://github.com/AmandepSingh180d), [Shasha Chen](https://github.com/ShashaChen616), [Cruz Lopez](https://github.com/CruzL0924)
## Project Description
  * Why is it important or interesting to you?
    * This game will be a great experience for us and will teach us more about collaborating on a real-world project. We are all interested in fantasy RPG games so it will be great to implement our own and branch out our creativity. Having different types of mythical characters brawling to the death will be a massive hit among fantasy lovers. 
  * What languages/tools/technologies do you plan to use? (This list may change throughout the project)
    * We will use VS code to write our code and GitHub for version control. Our main language for the backend will be C++. Scrum patterns, user stories.
  * What will be the input/output of your project?
    * The menu will ask how many people are playing or single-player mode, and whether or not there will be CPUs playing as well. Users will input their choice of character. Users can see character stats, inventory, and health. The console will output actions and/or damage after turns. As each player is eliminated console will output who defeated who. The console will output the last man standing as the winner. Will input who they want to attack, ally with, or do other actions.
  * What are the features that the project provides?
    * Multiplayer mode: Up to 6 characters will brawl to the death! There can be live players as well as CPUs. Players can form alliances to attack certain players together. Stat changes when alliances are formed. The last man standing takes home the Fantasy Brawl trophy. 
    * Each character will have a set of powers, attributes, inventories, weapons, health, attacks, and skills.
    * Players will roll dice to determine the moves they can make. Will input who they want to attack, or ally with.

### Navigation Diagram
> <img width="955" alt="nav1" src="https://github.com/cs100/final-project-asing241-clope265-btaqu001-schen568/blob/master/ScreenshotPics/Fantasy%20Brawl%20Navigation%20Diagram.png">

At first, the player will be presented with a display of the Title screen. Once the player enters anything they will be able to continue to the next part in which they will be presented with a character select screen. It will loop 4 times, for the 4 players that will be playing the game, and once the user enters 4 values that differ from each other of inputs 1-4, they will be presented with a choose who to attack screen. This screen will show which character is which player, and the user will be prompted with a question on who they would like to attack. Once they have chosen, they will be brought to the battle screen at which point they have 4 options. Choose option 1 and use a basic attack, option 2 to choose a special attack in which they will be sent to the special attack screen and be prompted with which one they would like to use, option 3 the inventory in which they will be sent to their inventory in which they can choose from their inventory, or option 4 to run away like a coward. Once the options have been chosen, the turn will end and go back to the choose who to attack screen. This process will repeat until only 1 player remains with health. Once only 1 player remains, they will receive one last action (to gloat), and then they will be sent to the ending screen in which they can present to the rest of the group. This will then end the game.

### Screen Layouts
> ![Title Screen](https://github.com/cs100/final-project-asing241-clope265-btaqu001-schen568/blob/master/ScreenshotPics/TitleScreen.png)

This screen above is the first screen that the user will see.

> ![Character Select](https://github.com/cs100/final-project-asing241-clope265-btaqu001-schen568/blob/master/ScreenshotPics/CharacterSelect.png)

The screen above will then be prompted with which character they would like to select, this will be repeated with small changes to which player is choosing.

> ![Choose who to Attack](https://github.com/cs100/final-project-asing241-clope265-btaqu001-schen568/blob/master/ScreenshotPics/ChooseMode.png)

The screen above will then be shown to the player prior to choosing an action, and they must commit to whoever they attack, even themselves.

> ![Battle Screen](https://github.com/cs100/final-project-asing241-clope265-btaqu001-schen568/blob/master/ScreenshotPics/BattleScreen.png)

The screen above will then be shown to the player in which they are prompted to choose an action. This screen will be reused for listing attacks and listing inventory of the current player if the options are chosen.

> ![Play Again Screen](https://github.com/cs100/final-project-asing241-clope265-btaqu001-schen568/blob/master/ScreenshotPics/PlayAgain.png)

This screen above will be produced after 3 players have been defeated, displaying their total damage, and health remaining.

## Class Diagram
 > ![cs100 uml diagram](https://github.com/cs100/final-project-asing241-clope265-btaqu001-schen568/blob/master/ScreenshotPics/UMLClassDiagram.png)
 
 > Above is the UML diagram for the Fantasy Brawl project.

A note for the inputs that the player gives, inputs will almost always be 1-4 and if an incorrect input is entered they will be prompted to input the correct corresponding values for their choices from the user-input function within the player-manager class. 

The functionality of the project is largely based on the player management class, this is because of the amount of choices that rely heavily on player input. The player-manager will not only be able to keep track of the statistics of each player (total damage and remaining health) but will also manage their attack. The character class will have the basic character creation once the user has inputted that they want to be a certain character, and then an object of that character will be implemented. Within this implementation, a function will be used to randomize the inventory based on their classes. For example, if the mage class is selected, they will have a higher chance to have potions and buffs toward their special attacks. This character class will be the parent class to the remaining 4 classes in the game, known as mage, archer, knight, and thief. The player will move through multiple screens based on the input given to the menu class. There will be individual functions for each type of screen, to output the correct theme. For example, the choose a character screen will appear and then loop depending on how many characters are inputted from the previous input. Then the character screen will be updated to the next player until there are no more players left to pick. These screens would be updated and changed based on which characters turn it is. This is controlled via a function in the player-manager. This function is playerTurn and will loop when a screen is changed and a player has made their choice.

The players will get to choose who they attack via text and may enter 1 to 4 (yes they can attack themselves), this will be done within the player management class in which they will be able to have an attack choice function. In terms of choices, the players will have four based on their dice roll. The first is the attack choice, which will list all the available attacks, updating the screen to show this. The attacks will be listed via a function within the player management class, but the damage will be calculated separately, relying on the checking of which type of character they are. This will then calculate the damage for a regular attack. The damage function will be incorporated within the player management class. These damage values will also be calculated by the random dice roll given to characters per each turn, through a separate function that is purely for randomized dice rolls. The second option that will occur will be an option to use a special attack. These attacks use special points but will do higher damage, and be class-based. This will be implemented within the attack function and will use the check special points function to check if the player has enough special points to use their attack, if not they will be prompted to either back out or choose a different attack, done from the menu class. The third option is to check inventory, in which the menu class will efficiently move toward the next scene, showing the players' inventory and enabling them to use buffs. If the buff is a defense up or attacks up, the attack function will have a check from the checkBuffs function to accommodate for this. The fourth option is a joke option, that lets you skip your turn and take damage. This option is to run, and you will be given text that states that you have fallen over and are being laughed at for running. In terms of measuring the stats, when any damage is taken or given through the damage function in playerManager, it will update in the stat manager class via a function, and will also be sent to the character object to update their health. This update will also be shown in real-time to the health and special points displayed within the menu class.

At the end of the game, once there is only 1 character with health remaining, they will be rewarded with a victory screen, and the stat manager will provide this to the menu for it to be incorporated for every player. Then the players will be prompted to play again or quit. If they choose the option of quitting the program will end. If they choose to play again, everything will be reset, and be sent back to the title screen.

### Updated Class Diagram Notes

We decided to first separate our player-manager class into multiple other classes. This change was required to make not only cleaner code but to make testing smoother. With this update, we are separating the player-manager class into the attack class, dice roll class, and choice class. This update helped us in providing stable features with proper testing for each of the features being used by the player-manager class. The addition of the dice roll class was not only for simplicity but also reusability so that every class may use this class wherever needed.

The attack class will delegate any of the attacks based on the dice roll that is given. The main solid principle that was used here was the single responsibility principle. Originally this was going to be a function within player-manager but we realized that to improve efficiency and testability it would be advantageous to make a separate class that dealt only with attacks. Calculations of attacks and damage that are given to players are dealt within this class. This change helped us improve on making the code easily testable and bug-free at an earlier state. This class deals with user input and character order selections. We also used the open-closed principle by not changing the functionality of the attack, but allowing for additional access to adding different types of classes and their attacks. Also, they can add more special attacks easily. This increased the amount of code we had to develop, which allowed us to reuse it in many contexts and make it easier to test because it was only handling one task. As a result, flaws are discovered significantly sooner, enabling far more seamless implementation.

An inventory class was added to make sure that the inventory was dealt with for pure focus on buffs and potions. The main solid principle that was used here was the single responsibility principle. Originally this was going to be a function within the player manager but we realized that to improve efficiency and testability it would be advantageous to make a separate class that dealt only with attacks. This change helped us improve on making the code easily testable, specifically with the deletion of items in the players' inventory. The acquisition of only one task made it easy to see the bugs within our code.

The choice class will deal with all user inputs. The single responsibility principle was the primary principle applied in this case. This was originally intended to be a function of player-manager, but we soon recognized that it would be better to create a separate class that dealt just with the player's selections to increase efficiency and testability. The user input and order choices of the characters are dealt with within this class. This not only made us write simpler code but in turn, made the code reusable in multiple situations and made code that easily testable as it deals with one responsibility. This subsequently helps find bugs much earlier on, which allows for much smoother implementation.

The menu class was updated to depend on the abstractions shown above. This applies the dependency inversion principle to the menu class. This was applied by using abstractions of attack, choice, and stat manager classes from the player-manager class. Rather than relying on the components within the player-manager class, the menu class is reliant on the abstractions of the attack, choice, and stat manager classes that are used by the player-manager. This helped in write code that is more testable and allowed us to have much better code maintainability, as it makes low-level modules that may cause problems easier to maintain and modify.

With the character class and subsequent derived classes, we applied the open-closed principle and the Liskov substitution principle. The open-closed principle was applied as it enabled us to add classes in the future, while not needing to adjust the base class itself, while the Liskov substitution principle was applied as the derived classes could easily be used instead of the character base class. This change helped in writing code that was not only reusable but also made the code applicable to add any future classes. This also adds the ability to maintain these classes more easily and to make testing much smoother.

The variables for all classes, functions, and variables had their names cleaned to increase the readability of the code. We did change the way that the player management class and inventory works, by making the inventory switch statements that can be combined depending on if they are attack, health items, or special points items. This allows for an easier way of accessing and using the inventory. We also added better visibility in player management and menu class by creating a basic menu before the choice of attack allowing the player to see which player they were attacking.

 ## Screenshots

 | ![characterChoice](https://github.com/cs100/final-project-asing241-clope265-btaqu001-schen568/blob/master/ScreenshotPics/CharacterSelectInput.png) | 
 |:--:| 
 | The player must choose what character they would like to be, making sure that they do not choose the same character as another player. |
 
 | ![chooseWhoToAttack](https://github.com/cs100/final-project-asing241-clope265-btaqu001-schen568/blob/master/ScreenshotPics/ChooseMode.png) | 
 |:--:| 
 | Once all players have picked their characters, they will receive this screen in which they can see who chose which character and must choose who to attack. This will be outputted after every turn is completed. |

 | ![battleChoice](https://github.com/cs100/final-project-asing241-clope265-btaqu001-schen568/blob/master/ScreenshotPics/BattleScreenInput.png) | 
 |:--:| 
 | The battle screen will appear after they have chosen who to attack. They will have to enter whatever action they would like to commit to. |

 | ![specialAttackChoice](https://github.com/cs100/final-project-asing241-clope265-btaqu001-schen568/blob/master/ScreenshotPics/SpecialAttack.png) | 
 |:--:| 
 | The special attack screen will appear if the player has entered the appropriate action, in which they can view the damage and sp cost of the special attacks. |

 | ![inventoryAttackChoice](https://github.com/cs100/final-project-asing241-clope265-btaqu001-schen568/blob/master/ScreenshotPics/Inventory.png) | 
 |:--:| 
 | The inventory screen will appear if the player has entered the appropriate action, in which they can view their randomized inventory. |

 | ![endingScreen](https://github.com/cs100/final-project-asing241-clope265-btaqu001-schen568/blob/master/ScreenshotPics/PlayAgain.png) | 
 |:--:| 
 | The player will receive an ending in which only 1 player remains with the damages to show for bragging rights. |
 
 ## Installation/Usage
 **To play Fantasy Brawl**
 1. Clone the repository using `git clone https://github.com/cs100/final-project-asing241-clope265-btaqu001-schen568.git`
 2. Run `cd final-project-asing241-clope265-btaqu001-schen568` and `cd Game/`
 3. Run `cmake .` and `make` for this repository
 4. Run the `./Fantasy_Brawl` executable
 5. Make sure you choose only 1 character per player
 6. Enjoy!!!
 ## Testing
Our project was tested using the GoogleTest Framework. For each of the classes that were tested, a folder was created within the test folder. Separate files were created for non-input tests. Each folder has a separate CMake to test each of the classes individually.
