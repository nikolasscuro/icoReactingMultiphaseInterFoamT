volScalarField idealGasPhase
(
    IOobject
    (
        "idealGasPhase",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::AUTO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

    volScalarField vapourPressure_Cs
    (
        IOobject
        (
            "vapourPressure_Cs",
            runTime.timeName(),
            mesh,
            IOobject::NO_READ,
            IOobject::AUTO_WRITE
        ),
        mesh,
        dimensionedScalar("", dimPressure, 0)
    );

    volScalarField vapourPressure_CsF
    (
        IOobject
        (
            "vapourPressure_CsF",
            runTime.timeName(),
            mesh,
            IOobject::NO_READ,
            IOobject::AUTO_WRITE
        ),
        mesh,
        dimensionedScalar("", dimPressure, 0)
    );

    volScalarField vapourPressure_KF
    (
        IOobject
        (
            "vapourPressure_KF",
            runTime.timeName(),
            mesh,
            IOobject::NO_READ,
            IOobject::AUTO_WRITE
        ),
        mesh,
        dimensionedScalar("", dimPressure, 0)
    );

    volScalarField vapourPressure_K
    (
        IOobject
        (
            "vapourPressure_K",
            runTime.timeName(),
            mesh,
            IOobject::NO_READ,
            IOobject::AUTO_WRITE
        ),
        mesh,
        dimensionedScalar("", dimPressure, 0)
    );

    volScalarField vapourPressure_FLi
    (
        IOobject
        (
            "vapourPressure_FLi",
            runTime.timeName(),
            mesh,
            IOobject::NO_READ,
            IOobject::AUTO_WRITE
        ),
        mesh,
        dimensionedScalar("", dimless, 0)
    );
