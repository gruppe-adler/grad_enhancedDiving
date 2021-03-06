#include "script_component.hpp"

GVAR(o2Active) = true;
private _O2ToxColor = ppEffectCreate ["colorCorrections", 1001];
private _O2ToxBlur = ppEffectCreate ["radialBlur", 1002];
private _O2ToxDynBlur = ppEffectCreate ["DynamicBlur", 1003];
private _O2ToxChroma = ppEffectCreate ["chromAberration", 1004];
titleText ["","BLACK OUT",2];

[{
    params ["_args","_handle"];
    _args params ["_O2ToxColor", "_O2ToxBlur", "_O2ToxDynBlur", "_O2ToxChroma"];
    if (GVAR(depth) < (((GVAR(maxppO)/GVAR(percentO2)) -1) *10)) exitWith {
        [_handle] call CBA_fnc_removePerFrameHandler;
        titleText ["","BLACK IN",4];
        ppEffectDestroy _O2ToxBlur;
        ppEffectDestroy _O2ToxDynBlur;
        ppEffectDestroy _O2ToxChroma;
        ppEffectDestroy _O2ToxColor;
        GVAR(o2Active) = false;
    };

    [{
        params ["_O2ToxColor", "_O2ToxBlur", "_O2ToxDynBlur", "_O2ToxChroma"];
        titleText ["","BLACK IN",4];
        _O2ToxColor ppEffectEnable true;
        _O2ToxColor ppEffectAdjust [1, 1, 0, [1.0,0.0,0.0,0.2], [0,1,0,0.5], [0,0,0,0]];
        _O2ToxColor ppEffectCommit 4;
        _O2ToxBlur ppEffectEnable true;
        _O2ToxBlur ppEffectAdjust [0.001,0.001,0.15,0.15];
        _O2ToxDynBlur ppEffectEnable true;
        _O2ToxDynBlur ppEffectAdjust [0.5];
        _O2ToxChroma ppEffectEnable true;
        _O2ToxChroma ppEffectAdjust [0.09,0.09,true];
        _O2ToxChroma ppEffectCommit 4;
        _O2ToxBlur ppEffectCommit 4;
        _O2ToxDynBlur ppEffectCommit 4;

        private _damageVar = ace_player getvariable ["ace_medical_bodyPartStatus", [0,0,0,0,0,0]];
        private _bodyPart = selectRandom ["head", "body", "arm_r", "arm_l", "leg_r", "leg_l"];
        
        [ace_player, _bodyPart, (_damageVar select ([_bodyPart] call ace_medical_fnc_selectionNameToNumber)) + (GVAR(O2TisTot)/6), ace_player, "explosive", -1] call ace_medical_fnc_handleDamage;

        [{titleText ["","BLACK OUT",4];}, _this, 4] call CBA_fnc_waitAndExecute;

    }, [_O2ToxColor, _O2ToxBlur, _O2ToxDynBlur, _O2ToxChroma], 4] call CBA_fnc_waitAndExecute;
}, 8, [_O2ToxColor, _O2ToxBlur, _O2ToxDynBlur, _O2ToxChroma]] call CBA_fnc_addPerFrameHandler;
