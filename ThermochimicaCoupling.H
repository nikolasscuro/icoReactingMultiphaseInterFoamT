forAll(T, i)
{
	T[i];
	Info << endl << "Cell N°: " << i << endl;
	Info<< "Time = " << runTime.timeName() << endl;
  Info <<  "Temperature = " << T[i] << " K" << nl;

	#include "ThermochimicaCalc.H"

}
