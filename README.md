# About
This is a homebrew game for 1980's era Atari 8-bit XL/XE (NTSC/PAL) computers.

![Quadbination-Screenshot](https://github.com/user-attachments/assets/3e90033c-ef91-45ff-9ff0-7bb33e5ddf62)

# Credits
cc65</br>
Atari FontMaker</br>
RASTER Music Tracker</br>
Altirra</br>
AtariAge

# Reviews

[<img src="https://github.com/supurloop/quadbination/blob/main/zph.jpg">](https://www.youtube.com/watch?v=gL_D6H53BOo)

# Instructions
Quadbination is a 1-4 player cooperative/competitive matching paddle game.

The cooperative goal is to solve the combination as quickly as possible.</br>
The competitive goal is to achieve the highest individual player score.

# Requirements
Atari 8-bit, 64KB RAM, NTSC or PAL</br>
Single and/or Double Paddles in Port 1 and/or Port 2

## Selecting Players
Briefly press the paddle button to enable a player.</br>
Each player is assigned a unique color.
To deactivate a player restart Quadbination.

## Practice Mode
A game has not started if the timer is not counting down, during this time players can practice matching.

## Starting Game
Press and hold down any paddle button for 3 seconds to start a 2 minute game. The timer will start counting down and game music plays.

## Gameplay
Each colored player is randomly assigned a combination digit, a hexadecimal value from 0 to F.</br>
As a player falls towards the combination dial they may move using their paddle.</br>
When a player reaches the combination dial the digit is entered and the player regenerates at the top of the screen.</br>

Turning the paddle left will move the player to the left.</br>
Turning the paddle right will move the player to the right.</br>
Holding the paddle button increases the player's falling speed.</br>
(Paddle may need service if a player does not move smoothly left and right without jitter.)</br>

When a combination dial digit matches the digit directly below, the combination digit is green, else it is red.

A bonus item appears periodcally.</br>
If a player touches the bonus item then it will explode in the same color as the player and at least 1 second is added to the countdown clock.

If time runs out or the combination is solved (all green) then the game ends.

## Scoring

### Player Scoring

Each player starts with 200 points.

Touch the bonus item, gain 30 points.

Set an unset combination dial digit correctly, gain 10 points.</br>
Set an unset combination dial digit incorrectly, lose 20 points. 

Update a set combination dial digit correctly, gain 2 points.</br>
Update a set combination dial digit incorrectly, lose 4 points.

When the game ends, for each correct combination dial digit matching player's color, gain 20 points.</br>
When the game ends, for each incorrect combination dial digit matching player's color, lose 20 points.

Minimum player score 0.</br>
Maximum player score 9900.</br>
High score for each player is tracked.

### Team Scoring

The team starts with 9000 points.</br>
For each second during countdown, lose 75 points.</br>
When the game ends, for each second remaining up to 99, gain 75 points.

Minimum team score 0.</br>
Maximum team score 9900.</br>
High team score is tracked.
