 # Fantasy Brawl
 > Authors: [Burhanuddin Taquee](https://github.com/btaquee), [Amandeep Singh](https://github.com/AmandepSingh180d), [Shasha Chen](https://github.com/ShashaChen616), [Cruz Lopez](https://github.com/CruzL0924)
## Project Description
 > * Why is it important or interesting to you?
 >   * This game will be a great experience for us and will teach us more about collaborating on a real-world project. We are all interested in fantasy RPG games so it will be great to implement our own, and branch out our creativity. Having different types of mythical characters brawling to the death will be a massive hit among fantasy lovers. 
 > * What languages/tools/technologies do you plan to use? (This list may change over the course of the project)
 >   * We will use VS code to write our code and GitHub for version control. Our main language for the backend will be C++. Scrum patterns, user stories.
 > * What will be the input/output of your project?
>   * Menu will ask how many people are playing or single-player mode, and whether or not there will be CPUs playing as well. Users will input their choice of character. Users can see character stats, inventory, and health. Console will output actions and/or damage after turns. As each player is eliminated console will output who defeated who. Console will output the last man standing as the winner. Will input who they want to attack, ally with, or other actions.
 > * What are the features that the project provides?
>   * Single-player mode: User will choose a character, and begin quest to the top of the Fantasy Brawl tower, battling progressively difficult adversaries to win the Fantasy Brawl trophy.
>   * Multiplayer mode: Up to 6 characters will brawl to the death! There can be live players as well as CPUs. Players can form alliances to attack certain players together. Stat changes when alliances are     formed. Last man standing takes home the Fantasy Brawl trophy. 
>   * Each character will have a set of powers, attributes, inventories, weapons, health, attacks, and skills.
>   * Players will roll dice to determine the moves they can make. Will input who they want to attack, or ally with.
 > This description should be in enough detail that the TA/instructor can determine the complexity of the project and if it is sufficient for the team members to complete in the time allotted. 

### Navigation Diagram
> <img width="955" alt="nav1" src="https://github.com/cs100/final-project-asing241-clope265-btaqu001-schen568/blob/master/navDiagram.png">

> User  starts at title screen. Chooses single or multiplayer mode. 
 
 > * Multiplayer - User is prompted to input number of players, once done is then sent to choose character screen to choose one of 4 different characters with all stats appearing. This will repeat for how many players that are playing with a slight difference to Player _ is choosing. Players will roll to determine turn order. Then game begins at battle screen, where battle is looped for each players turns until there is only on player standing. Each turn players will choose to attack or add to inventory based on dice outcome. Once a player chooses an action, that action will pop up a new menu liting the different kinds of actions or even the inventory screen. Once the action is chosen, the battle screen will loop, but with the next players' name. Once winner is determined user will be taken to trophy screen. User wil then be sent to the play again or quit game screen. Once an action is chosen, the program will end or it will loop back to the title screen depending on the action chosen by the player. 
 
 > * Singleplayer -  Choose character screen to choose one of 4 different characters. Then game begins at battle screen, where battle is looped for the player until the big bad guy is defeated. Each turn players will choose to attack or add to inventory based on dice outcome. Once a player chooses an action, that action will pop up a new menu liting the different kinds of actions or even the inventory screen. Once the action is chosen, the battle screen will loop, but with the npc choosing their actions. Alternatively if the player fails and lands at 0 health, they will be sent to a gameover screen. If the player suceeds and defeats the big bad guy then they will be sent to obtain the trophy.User wil then be sent to the play again or quit game screen. Once an action is chosen, the program will end or it will loop back to the title screen depending on the action chosen by the player. 
### Screen Layouts
> ![Title Screen](https://github.com/cs100/final-project-asing241-clope265-btaqu001-schen568/blob/master/ScreenshotPics/TitleScreen.PNG)

> * This is the first screen that the user will see.

> ![Choose Mode](https://github.com/cs100/final-project-asing241-clope265-btaqu001-schen568/blob/master/ScreenshotPics/ChooseMode.PNG)

> * The user will then be prompted with whether they would like to play multiplayer or singleplayer.

> ![Character Select](https://github.com/cs100/final-project-asing241-clope265-btaqu001-schen568/blob/master/ScreenshotPics/CharacterSelect.PNG)

> * They will then be prompted with which character they would like to select, this will be repeated with small changes to which player is choosing.

> ![Battle Screen](https://github.com/cs100/final-project-asing241-clope265-btaqu001-schen568/blob/master/ScreenshotPics/BattleScreen.PNG)

> * The battle screen will then be shown to the player in which they are prompted to choose an action. This screen will be reused for listing attacks and listing inventory of the current player if the options are chosen.

> ![Trophy Screen](https://github.com/cs100/final-project-asing241-clope265-btaqu001-schen568/blob/master/ScreenshotPics/PlayerWins.PNG)

> * This screen will appear to the player when 3 out of the 4 players have 0 health or if in single player, they have defeated the big bad guy. Displaying both stats and the winner.

> ![Game Over Screen](https://github.com/cs100/final-project-asing241-clope265-btaqu001-schen568/blob/master/ScreenshotPics/GameOver.PNG)

> * This screen will appear when singleplayer is chosen and the player has 0 health and has not defeated the big bad guy.

> ![Play Again Screen](https://github.com/cs100/final-project-asing241-clope265-btaqu001-schen568/blob/master/ScreenshotPics/PlayAgain.PNG)

> * This screen will be produced either after the trophy screen, or after the game over screen, prompting the player to restart or quit.

> ![Roll Dice Screen](https://github.com/cs100/final-project-asing241-clope265-btaqu001-schen568/blob/master/ScreenshotPics/RollDice.PNG)

> * This screen will show the players rolling dice, and will be edited with showing the number of the character and what they rolled, once the player enters confirm.

## Class Diagram
 > Include a **class diagram(s)** for your project and a **description** of the diagram(s). Your class diagram(s) should include all the main classes you plan for the project. This should be in sufficient detail that another group could pick up the project this point and successfully complete it. Use proper UML notation (as discussed in the course slides).
 
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
