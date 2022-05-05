    volScalarField SALTsoln
    (
        IOobject
        (
            "Liquid",
            runTime.timeName(),
            mesh,
            IOobject::NO_READ,
            IOobject::AUTO_WRITE
        ),
        mesh,
        dimensionedScalar("", dimless, 0)
    );

    volScalarField solid1
    (
        IOobject
        (
            "solid1",
            runTime.timeName(),
            mesh,
            IOobject::NO_READ,
            IOobject::AUTO_WRITE
        ),
        mesh,
        dimensionedScalar("", dimless, 0)
    );

    volScalarField NaF_KF
    (
        IOobject
        (
            "NaF_KF",
            runTime.timeName(),
            mesh,
            IOobject::NO_READ,
            IOobject::AUTO_WRITE
        ),
        mesh,
        dimensionedScalar("", dimless, 0)
    );

    volScalarField LiF_NaF
    (
        IOobject
        (
            "LiF_NaF",
            runTime.timeName(),
            mesh,
            IOobject::NO_READ,
            IOobject::AUTO_WRITE
        ),
        mesh,
        dimensionedScalar("", dimless, 0)
    );
