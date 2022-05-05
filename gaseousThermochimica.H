
//Ideal Gas Phase
GetSolnPhaseMol(phaseName5, &molesPhase_gas_ideal, &info);
SolnPhaseMol_gas_ideal.push_back(molesPhase_gas_ideal);
//printf("%s fraction as a stable solution phase: %e\n", phaseName5, molesPhase_gas_ideal);
idealGasPhase[i] = molesPhase_gas_ideal;
Info << "Ideal Gas Phase Fraction " << idealGasPhase[i] << nl;

//CsF
GetOutputMolSpeciesPhase(phaseName5, speciesName3, &moleFraction_CsF, &info);
//printf("%s in %s: %e\n", speciesName3, phaseName5, moleFraction_CsF);
molFrac_CsF.push_back(moleFraction_CsF);
vapourPressure_CsF[i] = moleFraction_CsF*(1-phase[i]);
Info << "Vapour Pressure of CsF: " << vapourPressure_CsF[i] << " [Pa]" << nl;

//Cs
GetOutputMolSpeciesPhase(phaseName5, speciesName4, &moleFraction_Cs, &info);
//printf("%s in %s: %e\n", speciesName4, phaseName5, moleFraction_Cs);
molFrac_Cs.push_back(moleFraction_Cs);
vapourPressure_Cs[i] = moleFraction_Cs*(1-phase[i]);
Info << "Vapour Pressure of Cs: " << vapourPressure_Cs[i] << " [Pa]" << nl;

//FLi in Ideal Gas
GetOutputMolSpeciesPhase(phaseName5, speciesName5, &moleFraction_FLi, &info);
molFrac_FLi.push_back(moleFraction_FLi);
vapourPressure_FLi[i] = moleFraction_FLi*(1-phase[i]);
Info << "Vapour Pressure of FLi: " << vapourPressure_FLi[i] << " [Pa]" << nl;

//KF in Ideal Gas
GetOutputMolSpeciesPhase(phaseName5, speciesName2, &moleFraction_KF, &info);
molFrac_KF.push_back(moleFraction_KF);
vapourPressure_KF[i] = moleFraction_KF*(1-phase[i]);
Info << "Vapour Pressure of KF: " << vapourPressure_KF[i] << " [Pa]" << nl;

//KF in Ideal Gas
GetOutputMolSpeciesPhase(phaseName5, speciesName6, &moleFraction_K, &info);
molFrac_K.push_back(moleFraction_K);
vapourPressure_KF[i] = moleFraction_K*(1-phase[i]);
Info << "Vapour Pressure of K: " << vapourPressure_K[i] << " [Pa]" << nl;
