﻿/****************************************************************************
Copyright (C) 2010 Team ~R3F~
This program is free software under the terms of the GNU General Public License version 3.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
@authors team-r3f.org
@version 1.02
@date 20101018
*****************************************************************************/
#include "R3F_WEIGHT_Configuration.sqf"
R3F_WEIGHT_FNCT_MakeSingleArray = {
	private ["_arr_i","_arr_n", "_arr", "_n", "_nb"];

	_arr_i = (_this select 0) select 0;
	_arr_n = (_this select 0) select 1;
	_arr = [];

	_n = 0;
	{
		_nb = _arr_n select _n;

		for "_i"  from 1 to _nb do{
			_arr set [count _arr,_x];
		};
		_n = _n + 1;

	} count _arr_i;

	_arr;
};

R3F_WEIGHT_FNCT_GetItemWeight = {
	private ["_arr_class", "_total_weight", "_weight","_bagpack","_type"];

	_arr_class = (_this select 0) + (_this select 1);
	if (dayz_onBack != "" && {count _this > 2}) then {
		_arr_class set [count _arr_class, dayz_onBack];
	};
	_total_weight = 0;
	_weight = 0;
	CfgWeight = configFile >> "CfgWeight";
	{
		if(isclass(CfgWeight >> "Weapons" >> _x)) then {
			_weight = getNumber(CfgWeight >> "Weapons" >> _x >> "weight");
			_total_weight = _total_weight + _weight;
		}else{
			if(isclass(CfgWeight >> "Magazines" >> _x)) then {
				_weight = getNumber(CfgWeight >> "Magazines" >> _x >> "weight");
				_total_weight = _total_weight + _weight;
			}else{

				_weight = 0;
				if(isNumber (configFile >> "cfgMagazines" >> _x >> "weight")) then {
					_weight = getNumber(configFile >> "cfgMagazines" >> _x >> "weight");
				};

				if(_weight > 0) then {
					_total_weight = _total_weight + _weight;
				} else {
					// log only if not found
					diag_log format["No R3F weight config for: %1", _x];
				};
			};
		};
	}count _arr_class;

	_bagpack = unitBackpack player;
	if (!isNull _bagpack) then {
		_type = typeof _bagpack;
		if (isclass(CfgWeight >> "Backpacks" >> _type)) then {
			_weight = getNumber(CfgWeight >> "Backpacks" >> _type >> "weight");
			_total_weight = _total_weight + _weight;
		};
	};

	_total_weight;
};

R3F_WEIGHT_FNCT_GetWeight = {
	private ["_bagpack","_bagpack_weapons", "_bagpack_ammo", "_return","_english"];
	_return = 0;
	_bagpack = unitBackpack player;
	if(!isnull(_bagpack)) then {
		_bagpack_weapons = [getWeaponCargo _bagpack] call R3F_WEIGHT_FNCT_MakeSingleArray;
		_bagpack_ammo = [getMagazineCargo _bagpack]  call R3F_WEIGHT_FNCT_MakeSingleArray;
		_return = [_bagpack_weapons, _bagpack_ammo] call R3F_WEIGHT_FNCT_GetItemWeight;
	};
	_return = _return + ([(weapons player), (magazines player), 1] call R3F_WEIGHT_FNCT_GetItemWeight);
	_english = localize "STR_R3F_WEIGHT_English" == "lb";
	if(_english) then {
		_return = _return /  0.45359 ;
		_return = round (_return * 100)/100;
	};
	_return;
};
