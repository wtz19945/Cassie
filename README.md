
# Cassie controller implementation

## Controller
Code for publication Real-time Dynamic Bipedal Avoidance: https://ieeexplore.ieee.org/abstract/document/10341951
Support Video: https://www.youtube.com/watch?v=NoBImCZjB5g

## Requirement
- Please follow the instructions from Agility website: https://github.com/agilityrobotics/cassie-doc/wiki
- The code is implemented and tested in Matlab 2017b, Windows10

## Repo Folders
- Cassie: Simulation files provided by Agility
- Controller: Generated MPC code, state estimator and etc.
- Functions : Generated kinematics, dynamics and etc.
- osqp      : All the optimizations in this work are solved by OSQP
- Run_Sim   : Run simluations
- ShortCuts&Submodules ： Helper functions provided by Agility
- Videos    : Simulation videos

## Simulations
Run start_up.m to add this repo to Matlab path.

Check the folder Run_Sim, this folder contain following example. Note different tasks are included in seperate folders for convenience.
- Adaptive_StepTime    : Cassie adjust step time on the fly to avoid fast obstacles
- Avoidance_ModeSwitch : Cassie changes avoidance mode (avoidance in stance mode and avoidance in stepping mode)
- Walking_Avoidance    : Cassie avoids multiple obstacles during walking

All the simulation results are in the Videos folder

## Note
- Cassie hardware test requires additional codes (the MPC is implemented in C++ on a secondary computer, currently not included in this repo). Thus, the MPC codes
used for generating mex files are not included.
- Currently, keyboard/gamepad interface controller is not implemented for Simulation. 
- A more stable version with more functionalities is implemented on Agility Digit robot. Please check this link https://github.com/wtz19945/Digit_Main