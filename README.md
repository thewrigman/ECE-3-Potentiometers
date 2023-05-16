# ECE-3-Potentiometers


## potCode.ino

This file contains code for sensor fusion using the regression. There is a function called model(), and the weights of the regression model are initialized according to the label on the potentiometer used. 

## potData 

This folder contains some data on the 3 potentiometers that works along with a few relevant plots for each one. Note that the working ones are given number names while the currently unoperable ones are given letter names. The python notebook  potscratch2.ipynb contains code that generated the respective regressions. 


## potCalibration.ino

This file contains the code that was used to generate the data later used as "true data" for the regression.

## scratch

This folder contains some earlier work with svm and tree model in C although we opted for a simple polynomial regression. Not very relevant.
