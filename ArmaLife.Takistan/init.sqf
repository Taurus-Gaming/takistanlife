/*
    File: init.sqf
    Author: 
    
    Description:
    
*/
StartProgress = false;

[] execVM "briefing.sqf"; //Load Briefing
[] execVM "KRON_Strings.sqf";
[] execVM "statusBar.sqf";
[] execVM "addons\fn_advancedTowingInit.sqf";

StartProgress = true;