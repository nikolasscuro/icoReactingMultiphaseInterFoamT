//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

//LiF-NaF-KF (solid1)
GetSolnPhaseMol(phaseName1, &molesPhase_solid1, &info);
SolnPhaseMol_solid1.push_back(molesPhase_solid1);
//printf("%s fraction as a stable solution phase: %e\n", phaseName1, molesPhase_solid1);
solid1[i] = molesPhase_solid1;
//Info << "LiF-NaF-KF = " << solid1[i] << " [mol]" << nl;

//LiF
GetOutputMolSpeciesPhase(phaseName1, speciesName1, &moleFraction_LiF, &info);
molFrac_LiF.push_back(moleFraction_LiF);
LiF[i] = moleFraction_LiF*solid1[i];
//Info << "LiF = " << LiF[i] << " [mol]" << nl;

//NaF
GetOutputMolSpeciesPhase(phaseName1, speciesName5, &moleFraction_NaF, &info);
molFrac_KF.push_back(moleFraction_KF);
NaF[i] = moleFraction_NaF*solid1[i];
//Info << "NaF = " << NaF[i] << " [mol]" << nl;

//KF
GetOutputMolSpeciesPhase(phaseName1, speciesName2, &moleFraction_KF, &info);
molFrac_KF.push_back(moleFraction_KF);
KF[i] = moleFraction_KF*solid1[i];
//Info << "KF = " << KF[i] << " [mol]" << nl;

//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

//NaF-KF
GetSolnPhaseMol(phaseName6, &molesPhase_NaF_KF, &info);
SolnPhaseMol_NaF_KF.push_back(molesPhase_NaF_KF);
NaF_KF[i] = molesPhase_NaF_KF;
//Info << "NaF_KF = " << NaF_KF[i] << nl;

//NaF
GetOutputMolSpeciesPhase(phaseName6, speciesName5, &moleFraction_NaF, &info);
molFrac_KF.push_back(moleFraction_KF);
NaF[i] = NaF[i] + moleFraction_NaF*NaF_KF[i];
//Info << "NaF = " << NaF[i] << " [mol]" << nl;

//KF
GetOutputMolSpeciesPhase(phaseName6, speciesName2, &moleFraction_KF, &info);
molFrac_KF.push_back(moleFraction_KF);
KF[i] = KF[i] + moleFraction_KF*NaF_KF[i];
//Info << "Total KF = " << KF[i] << " [mol]" << nl;

//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

//LiF-NaF
GetSolnPhaseMol(phaseName2, &molesPhase_LiF_NaF, &info);
SolnPhaseMol_LiF_NaF.push_back(molesPhase_LiF_NaF);
LiF_NaF[i] = molesPhase_LiF_NaF;
//Info << "LiF_NaF = " << LiF_NaF[i] << " [mol]" << nl;

//NaF
GetOutputMolSpeciesPhase(phaseName2, speciesName5, &moleFraction_NaF, &info);
molFrac_KF.push_back(moleFraction_KF);
NaF[i] = NaF[i] + moleFraction_NaF*LiF_NaF[i];
//Info << "Total NaF = " << NaF[i] << " [mol]" << nl;

//LiF
GetOutputMolSpeciesPhase(phaseName2, speciesName1, &moleFraction_LiF, &info);
molFrac_LiF.push_back(moleFraction_LiF);
LiF[i] = LiF[i] + moleFraction_LiF*LiF_NaF[i];
//Info << "Total LiF = " << LiF[i] << " [mol]" << nl;

//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

//LaK3F6_solid
GetPureConPhaseMol(phaseName7, &molesPhase_LaK3F6, &info);
SolnPhaseMol_LaK3F6.push_back(molesPhase_LaK3F6);
LaK3F6[i] = molesPhase_LaK3F6;
//Info << "LaK3F6 = " << LaK3F6[i] << nl;

//CeF3_solid
GetPureConPhaseMol(phaseName8, &molesPhase_CeF3, &info);
SolnPhaseMol_CeF3.push_back(molesPhase_CeF3);
CeF3[i] = molesPhase_CeF3;
//Info << "CeF3 = " << CeF3[i] << nl;

//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

FLiNaK_Solid[i] = solid1[i] + NaF_KF[i] + LiF_NaF[i] + LaK3F6[i] + CeF3[i];
//Info << "Total Solid FLiNaK = " << FLiNaK_Solid[i] << " [mol]" << nl;

//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

//K_liquid
GetPureConPhaseMol(phaseName9, &molesPhase_K_liquid, &info);
SolnPhaseMol_K_liquid.push_back(molesPhase_K_liquid);
K_liquid[i] = molesPhase_K_liquid;
//Info << "K_liquid = " << K_liquid[i] << nl;

//SALTsoln
GetSolnPhaseMol(phaseName4, &molesPhase_SALTsoln, &info);
SolnPhaseMol_SALTsoln.push_back(molesPhase_SALTsoln);
//printf("%s SALTsoln Phase Fraction: %e\n", phaseName4, molesPhase_SALTsoln);
FLiNaK_Liquid[i] = molesPhase_SALTsoln + K_liquid[i];
//Info << "Total Liquid FLiNaK= " << FLiNaK_Liquid[i] << " [mol]" << nl;
