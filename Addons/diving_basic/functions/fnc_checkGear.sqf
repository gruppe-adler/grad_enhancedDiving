#include "script_component.hpp"

private _obj = backpack player;
private _container = format [QGVAR(Dive_Gas%1), GVAR(selectedTank)];
private _value = _obj getVariable _container;
hint format ["CheckGear Container: %1, Object: %2, Value: %3", _container, _obj, _value];

if (isNil "_value") exitWith {diag_log "ED: No values found";};

_value params ["_bar", "_percentO2", "_percentN2", "_percentHe"];

//Check if gear has valid percentages for breathing gas
if ((_percentO2 +_percentN2 +_percentHe) != 1) exitWith {
	systemChat "ED: Error in init argument: Sum of breathing gasses should equal 1";
	systemChat format ["ED: O2 percentage: %1, N2 percentage: %2, HE percentage: %3", _percentO2, _percentN2, _percentHe];
};

if (_percentO2 < 0.09) exitWith {systemChat format ["ED: Error in init argument: You need at least 9% O2 in your tank. O2 percentage = %1", _percentO2];};

//Setting the global Variables
GVAR(bar) = _bar;
GVAR(percentO2) = _percentO2;
GVAR(percentN2) = _percentN2;
GVAR(percentHe) = _percentHe;

private _tankSize = format [QGVAR(tankSize%1), GVAR(selectedTank)];
private _maxBar = format [QGVAR(maxBar%1), GVAR(selectedTank)];

GVAR(maxBar) = getNumber (configFile >> "CfgVehicles" >> _obj >> _maxBar);
GVAR(filling) = (getNumber (configFile >> "CfgVehicles" >> _obj >> _tankSize)) * GVAR(bar);