scriptName _fnc_scriptName;
if (!hasInterface) exitWith {};

private _shopIndex = param [0,0,[0]];
private _listIndex = param [1,0,[0]];

// Get purchase
private _shopList	= EVOR_list_ShopUnit select _shopIndex select {!(_x select 2)};
private _purchase	= _shopList select _listIndex;
private _class		= _purchase param [0,"",[""]];
private _price		= _purchase param [1,0,[0]];
private _text		= _purchase param [4,"%1",[""]];
_text				= format [_text,getText (configFile >> "CfgVehicles" >> _class >> "displayName")];

// Remove previously purchases, abandoned units
EVOR_list_PurchasedUnits = missionNamespace getVariable ["EVOR_list_PurchasedUnits",[]];
{deleteVehicle _x;} forEach (EVOR_list_PurchasedUnits select {!isPlayer leader _x});
EVOR_list_PurchasedUnits = EVOR_list_PurchasedUnits select {alive _x};

if (count EVOR_list_PurchasedUnits >= EVOR_var_MaxUnits) exitWith {
	hintSilent format ["Ви можете винайняти лише %1 найманця зараз!",EVOR_var_MaxUnits];
};

if (isMultiplayer and {score player < _price}) exitWith {hintSilent "Недостатньо коштiв щоб придбати це!";};

private _spawnPos = AGLToASL (player modelToWorld [0,5,0]);
private _spawnDir = getDir player - 180;

[player,_purchase,_spawnPos,_spawnDir] remoteExecCall ["EVOR_fnc_createObjectServer",2,false];
hintSilent format ["%1 придбано за %2 УО!",_text,_price];
playSound "scoreRemoved";
