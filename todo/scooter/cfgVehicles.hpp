class CfgVehicles
{
  /*
  class Boat_F;
  class GA_Underwater_Scooter: Boat_F {

  radarType = 8;
  verticalTurnCoef = 0.05;
  turnCoef = 0.5;
  steerAheadSimul = 0.5;
  steerAheadPlan = 0.35;
  predictTurnPlan = 0.8;
  predictTurnSimul = 0.6;
  brakeDistance = 25;
  acceleration = 15;
  maxSpeed = 30;
  waterSpeedFactor = 1;
  periscopeDepth = 1.2;
  idleRpm = 200;
  redRpm = 1200;
  thrustDelay = 2;
  formationX = 15;
  formationZ = 15;
  simulation = "submarinex";
  overSpeedBrakeCoef = 0.8;
  enginePower = 45;
  engineShiftY = 0.4;
  waterLeakiness = 0;
  waterResistanceCoef = 0.015;
  waterLinearDampingCoefX = 2;
  waterLinearDampingCoefY = 0.8;
  waterAngularDampingCoef = 1;
  rudderForceCoef = 0.2;
  rudderForceCoefAtMaxSpeed = 0.05;

  simulation = "shipx";                                                         // all ships should have this simulation
    maxSpeed = 90;                                                                    // top speed of the vehicle
    overSpeedBrakeCoef = 0.8;                                                          // how much does the vehicle itself brake in case it goes faster than maxSpeed
    enginePower = 235;                                                                // power of engine in kW
    engineShiftY = 0.1;                                                                // relative virtual position of engine for PhysX, affects lateral ship slope during turns
  waterLeakiness = 1.0;                                                              // amount of litres per second that leaks into ship if under water, destroyed or turned upside down
    turnCoef = 0.25;                                                                 // how well is the ship able to turn
    thrustDelay = 2;                                                                  // initial delay to cause lesser slip when on 1st gear - thrust goes from zero to full in this time
    waterLinearDampingCoefY = 2;                                                      // affect how fast does the ship go through waves down - higher values make it drift more on top of waves
    waterLinearDampingCoefX = 2.0;                                                    // affects sliding of the ship in turns
    waterAngularDampingCoef = 1.2;                                                    // increase this for smoother movement, but beware too high values
    waterResistanceCoef = 0.015;                                                    // how much does water slow the ship down
    rudderForceCoef    = 0.100000;                                                      // increase this to gain more turning on lower speeds
    rudderForceCoefAtMaxSpeed    = 0.003000;                                            // increase this to gain more turning on higher speeds
    idleRpm = 200;                                                                              // revolutions per minute at which the engine idles
    redRpm = 1200;                                                                              // maximum revolutions per minute of the engine

    class complexGearbox
    {
        GearboxRatios[]    = {"R1",-0.782,"N",0,"D1",2.0,"D2",1.85,"D3",1.75};
        TransmissionRatios[] = {"High",1.0};                                        // Optional: defines transmission ratios (for example, High and Low range as commonly found in offroad vehicles)
        gearBoxMode        = "auto";                                                //gearbox can be of type: full-auto (only requires 'W' or 'S'), auto (requires shift between drive and reverse), semi-auto, manual
        moveOffGear        = 1;                                                     // defines what gear an automatic or semi-automatic gearbox will move off from stationary in. 1 by default.
        driveString        = "D";                                                   // string to display in the HUD for forward gears.
        neutralString      = "N";                                                   // string to display in the HUD for neutral gear.
        reverseString      = "R";                                                   // string to display in the HUD for reverse gears.
    };

    waterEffectSpeed = 5;
    engineEffectSpeed = 5;
    waterFastEffectSpeed = 28;

    leftEngineEffect = "LEngEffectsSmall";                                           // Particle effect class for engine particles
    rightEngineEffect = "REngEffectsSmall";
    leftFastWaterEffect      = "LFastWaterEffects";                                      // defines what class of water effect is going to be used while sailing fast
    rightFastWaterEffect      = "RFastWaterEffects";                                      // defines what class of water effect is going to be used while sailing fast

    // These are points in the memory LOD that represent the spawning points for water particle FX. The first ones represent bow FX,
    // the last ones represent the foam generated by the engine propeller
           memoryPointsLeftWaterEffect = "waterEffectR";
           memoryPointsRightWaterEffect = "waterEffectL";
           memoryPointsLeftEngineEffect = "EngineEffectL";
           memoryPointsRightEngineEffect = "EngineEffectR";

    brakeDistance     = 3;                                                           // how many internal waypoints should the AI plan braking in advance
    slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
  };
  */
};

class CfgFactionClasses
{

};
