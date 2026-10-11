/*
[MARKER, SIDE] remoteExec ["A3A_fnc_handOverMarker", 2];
Arguments:
    <MARKER> Marker name
    <SIDE> Side to hand over marker to
Return value:
    <BOOL> false if conditions don't match
*/

params ["_targetMarker", "_side"];

if (!isServer) exitWith {false};
if (sidesX getVariable [_targetMarker, sideUnknown] != teamPlayer) exitWith {false};



private _garrison = (garrison getVariable [_targetMarker, []]) select { _x isEqualType "" };
private _hr = count _garrison;
private _money = 0;
{ _money = _money + (server getVariable [_x, 0]) } forEach _garrison;
//garrison setVariable [_targetMarker, [], true];

if (_hr > 0 || {_money > 0}) then {
    [_hr, _money] call A3A_fnc_resourcesFIA;
};


[_side, _targetMarker] call A3A_fnc_markerChange;

true;