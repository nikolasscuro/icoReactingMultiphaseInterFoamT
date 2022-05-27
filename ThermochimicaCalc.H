const char filename[120] = "/home/nikolas/Documents/OFTC3_V2/thermochimica/data/JRC-2021-fluoride-noSUBM.dat";

std::vector<double> SolnPhaseMol_SALTsoln;
std::vector<double> SolnPhaseMol_LiF_NaF;
std::vector<double> SolnPhaseMol_solid1;
std::vector<double> SolnPhaseMol_LiF_KF;
std::vector<double> SolnPhaseMol_NaF_KF;

std::vector<double> SolnPhaseMol_LaK3F6;
std::vector<double> SolnPhaseMol_CeF3;
std::vector<double> SolnPhaseMol_K_liquid;

std::vector<double> SolnPhaseMol_gas_ideal;
std::vector<double> SolnPhaseMol_NaF_solids;

std::vector<double> molFrac_KF;
std::vector<double> molFrac_K;
std::vector<double> molFrac_NaF;
std::vector<double> molFrac_LiF;
std::vector<double> molFrac_CsF;
std::vector<double> molFrac_Cs;
std::vector<double> molFrac_FLi;

SetThermoFilename(filename);
FORTRAN_CALL(setstandardunits)();
int iElement = 0;
double dMass = 0.0;
//double dHeatCapacity = 0.0;

FORTRAN_CALL(setelementmass)(&iElement, &dMass);
iElement = 3;
dMass = 0.465;
FORTRAN_CALL(setelementmass)(&iElement, &dMass);
iElement = 11;
dMass = 0.115;
FORTRAN_CALL(setelementmass)(&iElement, &dMass);
iElement = 19;
dMass = 0.420;
FORTRAN_CALL(setelementmass)(&iElement, &dMass);
iElement = 9;
dMass = 1.000;
FORTRAN_CALL(setelementmass)(&iElement, &dMass);

double dTemperature = T[i];
double dPressure = 1;   //[atm]
FORTRAN_CALL(settemperaturepressure)(&dTemperature, &dPressure);
FORTRAN_CALL(ssparsecsdatafile)();
FORTRAN_CALL(thermochimica)();

int iflag;
FORTRAN_CALL(checkinfothermo)(&iflag);
//printf("Debug flag: %i\n",iflag);
int iPrintMode = 2;

FORTRAN_CALL(setprintresultsmode)(&iPrintMode);
//FORTRAN_CALL(printresults)();

//FORTRAN_CALL(heatcapacity)(&dHeatCapacity);
//HeatCapacity(dHeatCapacity);
//printf(dHeatCapacity);

char phaseName1[25] = "solid1";
char phaseName2[25] = "LiF-NaF";
//char phaseName3[25] = "NaF_solid(s)";
char phaseName4[25] = "SALTsoln";
//char phaseName5[25] = "gas_ideal";
char phaseName6[25] = "NaF-KF";

char phaseName7[25] = "LaK3F6_solid";
char phaseName8[25] = "CeF3_solid";
char phaseName9[25] = "K_liquid";


double molesPhase_solid1;
double molesPhase_LiF_NaF;
//double molesPhase_NaF_solids;
double molesPhase_SALTsoln;
//double molesPhase_gas_ideal;
double molesPhase_NaF_KF;

double molesPhase_LaK3F6;
double molesPhase_CeF3;
double molesPhase_K_liquid;

char speciesName1[8] = "LiF";
char speciesName2[8] = "KF";
//char speciesName3[8] = "CsF";
//char speciesName4[8] = "Cs";
char speciesName5[8] = "NaF";
//char speciesName6[8] = "K";

double moleFraction_NaF;
double moleFraction_LiF;
//double moleFraction_ThF4;
//double moleFraction_FLi;
//double moleFraction_CsF;
//double moleFraction_Cs;
double moleFraction_KF;
//double moleFraction_K;

int info;
FORTRAN_CALL(checkinfothermo)(&info);
//printf("Information: %i\n",info);


#include "solidusThermochimica.H"

//#include "gaseousThermochimica.H"



FORTRAN_CALL(resetthermoall)();
