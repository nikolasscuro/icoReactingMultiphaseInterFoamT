# OpenFOAM-and-Thermochimica-Coupling
A numerical coupling between OpenFOAM as a CFD tool and Thermochimica as a CT tool

Install OpenFOAM v2106

Before compiling this code, please install Thermochimica following instructios from https://nuclear.ontariotechu.ca/piro/thermochimica/getting-started.php

sudo apt-get install gfortran
sudo apt install libblas-dev liblapack-dev
git clone https://github.com/ORNL-CEES/thermochimica
Make


To compile the coupling solver do the following:

*I suggest to rename the folder to OFCT instead of icoReactingMultiphaseInterFoamT, this name is too long and will result in errors
* Modify location of libthermoc.a and libthermochimica.a libraries in file "options" inside folder "Make".
*Change ThermochimicaCalc.H according to your own chemistry calculation (1st line)
*You will have to call and store values from Thermochimica to separate vectors and double variables (as you may see) to your case, and create specific fields in createXXXXXXThermochimicaFields.
*Try to be as more organized as you can. I separated everything into gaseous and solidus folders, because this same solver can be used for solidification/melting and evaporation/condensation phenomena.
*Call phases in ThermochimicaCalc.H "like   char phaseName1[25] = "solid1";  for solid1 phase. The name under "" should match the exact name in the database.dat
*Rename adress for the database in ThermochimicaCalc.H "const char filename[120] = "/home/username/Documents/OFTC/thermochimica/data/nameOfTheDatabase.dat";"

After it, compile the OF solver:

openfoam2106
wclean
wmake

Enjoy
