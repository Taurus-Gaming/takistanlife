/*
//--By Repentz for altisLifeRPG
*/

#include "..\..\script_macros.hpp"
/*
	fn_seatBelt.sqf
*/
//playSound "seatbelt"; //--Enable this to play a sound when you put your seatbelt on
if(!life_seatbelt) then {
	life_seatbelt = true;
	playSound "LockSeatbelt"; //--Enable this to play a sound when you put your seatbelt on
} else {
	life_seatbelt = false;
	playSound "UnlockSeatbelt"; //--Enable this to play a sound when you put your seatbelt on
};

//[] call life_fnc_hudUpdate; //--Enable this if you are putting a hud option to display when your seatbelt is on.