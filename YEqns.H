{
    for (phaseModel& phase : fluid.phases())
    {
        PtrList<volScalarField>& Y = phase.Y();

        if (!Y.empty())
        {
            //- Su phase source terms
            PtrList<volScalarField::Internal> Sus(Y.size());
            //- Sp phase source terms
            PtrList<volScalarField::Internal> Sps(Y.size());

            forAll(Sus, i)
            {
                Sus.set
                (
                    i,
                    new volScalarField::Internal
                    (
                        IOobject
                        (
                            "Su" + phase.name(),
                            mesh.time().timeName(),
                            mesh
                        ),
                        mesh,
                        dimensionedScalar(dimless/dimTime, Zero)
                    )
                );
                Sps.set
                (
                    i,
                    new volScalarField::Internal
                    (
                        IOobject
                        (
                            "Sp" + phase.name(),
                            mesh.time().timeName(),
                            mesh
                        ),
                        mesh,
                        dimensionedScalar(dimless/dimTime, Zero)
                    )
                );
            }

            phase.solveYi(Sus, Sps);
        }




    }

}
