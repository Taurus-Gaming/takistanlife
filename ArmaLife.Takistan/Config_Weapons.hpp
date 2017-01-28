/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*
*    items: { Classname, Itemname, BuyPrice, SellPrice }
*
*    Itemname only needs to be filled if you want to rename the original object name.
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        license = "gun";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 6500, 500 },
            { "hgun_Pistol_heavy_02_F", "", 9850, -1 },
            { "hgun_ACPC2_F", "", 11500, -1 },
            { "hgun_PDW2000_F", "", 20000, -1 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 2500 }
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_TRG20_F", "", 25000, 2500 },
            { "arifle_Katiba_F", "", 30000, 5000 },
            { "srifle_DMR_01_F", "", 50000, -1 },
            { "arifle_SDAR_F", "", 20000, 7500 }
        };
        mags[] = {
            { "30Rnd_556x45_Stanag", "", 300 },
            { "30Rnd_65x39_caseless_green", "", 275 },
            { "10Rnd_762x54_Mag", "", 500 },
            { "20Rnd_556x45_UW_mag", "", 125 }
        };
        accs[] = {
            { "optic_ACO_grn", "", 3500 },
            { "optic_Holosight", "", 3600 },
            { "optic_Hamr", "", 7500 },
            { "acc_flashlight", "", 1000 }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 1500, 500 },
            { "hgun_Pistol_heavy_02_F", "", 2500, -1 },
            { "hgun_ACPC2_F", "", 4500, -1 },
            { "hgun_PDW2000_F", "", 9500, -1 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 950 }
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ItemMap", "", 50, 35 },
            { "ItemCompass", "", 50, 25 },
            { "ItemWatch", "", 50, -1 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 2000, 980 },
            { "Chemlight_red", "", 300, -1 },
            { "Chemlight_yellow", "", 300, 50 },
            { "Chemlight_green", "", 300, 50 },
            { "Chemlight_blue", "", 300, 50 }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 750, -1 },
            { "ItemGPS", "", 500, 45 },
            { "ItemMap", "", 250, 35 },
            { "ItemCompass", "", 250, 25 },
            { "ItemWatch", "", 250, -1 },
            { "FirstAidKit", "", 750, 65 },
            { "NVGoggles", "", 10000, 980 },
            { "Chemlight_red", "", 1500, -1 },
            { "Chemlight_yellow", "", 1500, 50 },
            { "Chemlight_green", "", 1500, 50 },
            { "Chemlight_blue", "", 1500, 50 }
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "Altis Cop Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 1, "" };
        items[] = {
            { "arifle_sdar_F", "Taser Rifle", 20000, 7500 },
            { "hgun_P07_snds_F", "Stun Pistol", 2000, 650 },
            { "hgun_P07_F", "", 7500, 1500 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 2000, 980 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "20Rnd_556x45_UW_mag", "Taser Rifle Magazine", 45 }
        };
        accs[] = {
            { "muzzle_snds_L", "", 650 }
        };
    };
	class us_shop_basic {
		name = "US-Army Anwärter Ausrüstung";
		side = "cop";
		license = "";
		level[] = { "life_coplevel", "SCALAR", -1, "" };
		items[] = {
			// Anwärter
			{ "hgun_mas_usp_F", "", 1680, 336}, // - Pistolen
			{ "hgun_mas_glocksf_F", "", 1680, 336}, 
			{ "hgun_mas_glock_F", "", 1680, 336},
			{ "SmokeShell", "", 100, 20}, // - Grenades
			{ "SmokeShellPurple", "", 100, 20},
			{ "SmokeShellRed", "", 100, 20},
			{ "SmokeShellOrange", "", 100, 20},
			{ "SmokeShellGreen", "", 100, 20},
			{ "SmokeShellYellow", "", 100, 20},
			{ "SmokeShellBlue", "", 100, 20},
			{ "ACE_HandFlare_White", "", 100, 20},
			{ "ACE_HandFlare_Red", "", 100, 20},
			{ "ACE_HandFlare_Green", "", 100, 20},
			{ "ACE_HandFlare_Yellow", "", 100, 20},
			{ "ACE_EarPlugs", "", 5, 0} // - Ausrüstung
		};
	};
	class us_shop_sl {
		name = "US-Army Second Lieutenant Ausrüstung";
		side = "cop";
		license = "";
		level[] = { "life_coplevel", "SCALAR", 2, "" };
		items[] = {
			// Second Lieutenant
			{ "hgun_mas_m9_F", "", 1700, 336}, // - Pistolen
			{ "hgun_mas_usp_F", "", 1700, 336},
			{ "hgun_mas_glocksf_F", "", 1700, 336},
			{ "hgun_mas_glock_F", "", 1700, 340},
			{ "hgun_mas_p226_F", "", 1700, 340},
			{ "arifle_mas_m1014", "", 2000, 400}, // - Gewehre
			{ "SmokeShell", "", 100, 20}, // - Granaten
			{ "SmokeShellPurple", "", 100, 20},
			{ "SmokeShellRed", "", 100, 20},
			{ "SmokeShellOrange", "", 100, 20},
			{ "SmokeShellGreen", "", 100, 20},
			{ "SmokeShellYellow", "", 100, 20},
			{ "SmokeShellBlue", "", 100, 20},
			{ "ACE_HandFlare_White", "", 100, 20},
			{ "ACE_HandFlare_Red", "", 100, 20},
			{ "ACE_HandFlare_Green", "", 100, 20},
			{ "ACE_HandFlare_Yellow", "", 100, 20},
			{ "ACE_M84", "", 160, 32},
			{ "ACE_EarPlugs", "", 5, 0} // - Ausrüstung
		};
	};
	class us_shop_fl {
		name = "US-Army First Lieutenant Ausrüstung";
		side = "cop";
		license = "";
		level[] = { "life_coplevel", "SCALAR", 3, "" };
		items[] = {
			// First Lieutenant
			{ "hgun_mas_m9_F", "", 1800, 360}, // - Pistolen
			{ "hgun_mas_acp_F", "", 1800, 360},
			{ "hgun_mas_m23_F", "", 1800, 360},
			{ "hgun_mas_usp_F", "", 1800, 360},
			{ "hgun_mas_glocksf_F", "", 2000, 400},
			{ "hgun_mas_glock_F", "", 2000, 400},
			{ "hgun_mas_p226_F", "", 2000, 400},
			{ "arifle_mas_m1014", "", 2500, 500}, // - Gewehre
			{ "SMG_05_F", "", 3000, 600},
			{ "arifle_mas_mp5sd", "", 3500, 700},
			{ "hgun_mas_mp7_F", "", 4000, 800},
			{ "SmokeShell", "", 100, 20}, // - Granaten
			{ "SmokeShellPurple", "", 100, 20},
			{ "SmokeShellRed", "", 100, 20},
			{ "SmokeShellOrange", "", 100, 20},
			{ "SmokeShellGreen", "", 100, 20},
			{ "SmokeShellYellow", "", 100, 20},
			{ "SmokeShellBlue", "", 100, 20},
			{ "ACE_HandFlare_White", "", 100, 20},
			{ "ACE_HandFlare_Red", "", 100, 20},
			{ "ACE_HandFlare_Green", "", 100, 20},
			{ "ACE_HandFlare_Yellow", "", 100, 20},
			{ "ACE_M84", "", 200, 40},
			{ "MiniGrenade", "", 1000, 200},
			{ "HandGrenade", "", 2000, 400},
			{ "ACE_EarPlugs", "", 5, 0} // - Ausrüstung
		};
	};
	class us_shop_captain {
		name = "US-Army Captain Ausrüstung";
		side = "cop";
		license = "";
		level[] = { "life_coplevel", "SCALAR", 4, "" };
		items[] = {
			// Captain
		 	{ "hgun_mas_m9_F", "", 1900, 380}, // - Pistolen
			{ "hgun_mas_acp_F", "", 1900, 380},
			{ "hgun_mas_m23_F", "", 1900, 380},
			{ "hgun_mas_usp_F", "", 1900, 380},
			{ "hgun_mas_glocksf_F", "", 1900, 380},
			{ "hgun_mas_glock_F", "", 1900, 380},
			{ "hgun_mas_p226_F", "", 1900, 380},
			{ "arifle_mas_m1014", "", 3000, 600}, // - Gewehre
			{ "SMG_05_F", "", 3500, 700},
			{ "arifle_mas_mp5sd", "", 4000, 800},
			{ "hgun_mas_mp7_F", "", 4500, 900},
			{ "arifle_mas_hk416", "", 5000, 1000},
			{ "arifle_mas_hk416_d", "", 5000, 1000},
			{ "arifle_mas_m16", "", 5000, 1000},
			{ "arifle_mas_m16a2", "", 5000, 1000},
			{ "srifle_mas_ebr", "", 5000, 1000},
			{ "arifle_mas_mk17", "", 6500, 1300},
			{ "arifle_mas_mk16_l", "", 6500, 1000},
			{ "arifle_mas_m4vlt", "", 5000, 1000},
			{ "arifle_mas_m4", "", 5000, 1000},
			{ "arifle_mas_m4_d", "", 5000, 1000},
			{ "SmokeShell", "", 100, 20}, // - Granaten
			{ "SmokeShellPurple", "", 100, 20},
			{ "SmokeShellRed", "",  100, 20},
			{ "SmokeShellOrange", "", 100, 20},
			{ "SmokeShellGreen", "", 100, 20},
			{ "SmokeShellYellow", "", 100, 20},
			{ "SmokeShellBlue", "", 100, 20},
			{ "ACE_HandFlare_White", "", 100, 20},
			{ "ACE_HandFlare_Red", "", 100, 20},
			{ "ACE_HandFlare_Green", "", 100, 20},
			{ "ACE_HandFlare_Yellow", "", 100, 20},
			{ "ACE_M84", "", 250, 50},
			{ "MiniGrenade", "", 1000, 200},
			{ "HandGrenade", "", 2000, 400},
			{ "ACE_M14", "", 3000, 600},
			{ "ACE_EarPlugs", "", 5, 0} // - Ausrüstung
		};
	};	
	class us_shop_major {
		name = "US-Army Major Ausrüstung";
		side = "cop";
		license = "";
		level[] = { "life_coplevel", "SCALAR", 5, "" };
		items[] = {
			// Captain
			{ "hgun_mas_m9_F", "", 2000, 400}, // - Pistolen
			{ "hgun_mas_acp_F", "", 2000, 400},
			{ "hgun_mas_m23_F", "", 2000, 400},
			{ "hgun_mas_usp_F", "", 2000, 400},
			{ "hgun_mas_glocksf_F", "", 2000, 400},
			{ "hgun_mas_glock_F", "", 2000, 400},
			{ "hgun_mas_p226_F", "", 2000, 400},
			{ "arifle_mas_m1014", "", 3500, 700}, // - Gewehre
			{ "SMG_05_F", "", 4000, 800},
			{ "arifle_mas_mp5sd", "", 4500, 900},
			{ "hgun_mas_mp7_F", "", 5000, 1000},
			{ "arifle_mas_hk416", "", 5500, 1100},
			{ "arifle_mas_hk416_d", "", 5500, 1100},
			{ "arifle_mas_m16", "", 5500, 1100},
			{ "arifle_mas_m16a2", "", 5500, 1100},
			{ "srifle_mas_ebr", "", 5500, 1100},
			{ "arifle_mas_mk17", "", 6500, 1300},
			{ "arifle_mas_mk16_l", "", 6500, 1300},
			{ "arifle_mas_m4vlt", "", 5500, 1100},
			{ "arifle_mas_m4", "", 5500, 1100},
			{ "arifle_mas_m4_d", "", 5500, 1100},
			{ "arifle_mas_hk416c", "", 5500, 1100},
			{ "arifle_mas_hk416c_d", "", 5500, 1100},
			{ "arifle_mas_m4c", "", 5500, 1100},
			{ "arifle_mas_m4c_d", "", 5500, 1100},
			{ "SmokeShell", "", 100, 20}, // - Granaten
			{ "SmokeShellPurple", "", 100, 20},
			{ "SmokeShellRed", "", 100, 20},
			{ "SmokeShellOrange", "", 100, 20},
			{ "SmokeShellGreen", "", 100, 20},
			{ "SmokeShellYellow", "", 100, 20},
			{ "SmokeShellBlue", "", 100, 20},
			{ "ACE_HandFlare_White", "", 100, 20},
			{ "ACE_HandFlare_Red", "", 100, 20},
			{ "ACE_HandFlare_Green", "", 100, 20},
			{ "ACE_HandFlare_Yellow", "", 100, 20},
			{ "ACE_M84", "", 300, 60},
			{ "MiniGrenade", "", 1000, 200},
			{ "HandGrenade", "", 2000, 400},
			{ "ACE_M14", "", 3500, 700},
			{ "ACE_EarPlugs", "", 5, 0} // - Ausrüstung
		};	
	};
	class us_shop_lc{
		name = "US-Army Lieutenant Colonel Ausrüstung";
		side = "cop";
		license = "";
		level[] = { "life_coplevel", "SCALAR", 6, "" };
		items[] = {
			// Captain
			{ "hgun_mas_m9_F", "", 9000, 2250}, // - Pistolen
			{ "hgun_mas_acp_F", "", 9000, 2250},
			{ "hgun_mas_m23_F", "", 8400, 2100},
			{ "hgun_mas_usp_F", "", 8400, 2100},
			{ "hgun_mas_glocksf_F", "", 8400, 2100},
			{ "hgun_mas_glock_F", "", 8400, 2100},
			{ "hgun_mas_p226_F", "", 8400, 2100},
			{ "arifle_mas_m1014", "", 35000, 8750}, // - Gewehre
			{ "SMG_05_F", "", 35000, 8750},
			{ "arifle_mas_mp5sd", "", 35000, 8750},
			{ "hgun_mas_mp7_F", "", 35000, 8750},
			{ "arifle_mas_hk416", "", 35000, 8750},
			{ "arifle_mas_hk416_d", "", 35000, 8750},
			{ "arifle_mas_m16", "", 35000, 8750},
			{ "arifle_mas_m16a2", "", 35000, 8750},
			{ "srifle_mas_ebr", "", 35000, 8750},
			{ "arifle_mas_mk17", "", 35000, 8750},
			{ "arifle_mas_mk16_l", "", 35000, 8750},
			{ "arifle_mas_m4vlt", "", 35000, 8750},
			{ "arifle_mas_m4", "", 35000, 8750},
			{ "arifle_mas_m4_d", "", 35000, 8750},
			{ "arifle_mas_hk416c", "", 35000, 8750},
			{ "arifle_mas_hk416c_d", "", 35000, 8750},
			{ "arifle_mas_m4c", "", 35000, 8750},
			{ "arifle_mas_m4c_d", "", 35000, 8750},
			{ "SmokeShell", "", 500, 125}, // - Granaten
			{ "SmokeShellPurple", "", 500, 125},
			{ "SmokeShellRed", "", 500, 125},
			{ "SmokeShellOrange", "", 500, 125},
			{ "SmokeShellGreen", "", 500, 125},
			{ "SmokeShellYellow", "", 500, 125},
			{ "SmokeShellBlue", "", 500, 125},
			{ "ACE_HandFlare_White", "", 500, 125},
			{ "ACE_HandFlare_Red", "", 500, 125},
			{ "ACE_HandFlare_Green", "", 500, 125},
			{ "ACE_HandFlare_Yellow", "", 500, 125},
			{ "ACE_M84", "", 800, 200},
			{ "MiniGrenade", "", 800, 200},
			{ "HandGrenade", "", 800, 200},
			{ "ACE_M14", "", 800, 200},
			{ "ACE_EarPlugs", "", 5, 0} // - Ausrüstung
		};	
	};
	class us_shop_colonel{
		name = "US-Army Colonel Ausrüstung";
		side = "cop";
		license = "";
		level[] = { "life_coplevel", "SCALAR", 7, "" };
		items[] = {
			// Captain
			{ "hgun_mas_m9_F", "", 9000, 2250}, // - Pistolen
			{ "hgun_mas_acp_F", "", 9000, 2250},
			{ "hgun_mas_m23_F", "", 8400, 2100},
			{ "hgun_mas_usp_F", "", 8400, 2100},
			{ "hgun_mas_glocksf_F", "", 8400, 2100},
			{ "hgun_mas_glock_F", "", 8400, 2100},
			{ "hgun_mas_p226_F", "", 8400, 2100},
			{ "arifle_mas_m1014", "", 35000, 8750}, // - Gewehre
			{ "SMG_05_F", "", 35000, 8750},
			{ "arifle_mas_mp5sd", "", 35000, 8750},
			{ "hgun_mas_mp7_F", "", 35000, 8750},
			{ "arifle_mas_hk416", "", 35000, 8750},
			{ "arifle_mas_hk416_d", "", 35000, 8750},
			{ "arifle_mas_m16", "", 35000, 8750},
			{ "arifle_mas_m16a2", "", 35000, 8750},
			{ "srifle_mas_ebr", "", 35000, 8750},
			{ "arifle_mas_mk17", "", 35000, 8750},
			{ "arifle_mas_mk16_l", "", 35000, 8750},
			{ "arifle_mas_m4vlt", "", 35000, 8750},
			{ "arifle_mas_m4", "", 35000, 8750},
			{ "arifle_mas_m4_d", "", 35000, 8750},
			{ "arifle_mas_hk416c", "", 35000, 8750},
			{ "arifle_mas_hk416c_d", "", 35000, 8750},
			{ "arifle_mas_m4c", "", 35000, 8750},
			{ "arifle_mas_m4c_d", "", 35000, 8750},
			{ "srifle_mas_ebr", "", 35000, 8750},
			{ "SmokeShell", "", 500, 125}, // - Granaten
			{ "SmokeShellPurple", "", 500, 125},
			{ "SmokeShellRed", "", 500, 125},
			{ "SmokeShellOrange", "", 500, 125},
			{ "SmokeShellGreen", "", 500, 125},
			{ "SmokeShellYellow", "", 500, 125},
			{ "SmokeShellBlue", "", 500, 125},
			{ "ACE_HandFlare_White", "", 500, 125},
			{ "ACE_HandFlare_Red", "", 500, 125},
			{ "ACE_HandFlare_Green", "", 500, 125},
			{ "ACE_HandFlare_Yellow", "", 500, 125},
			{ "ACE_M84", "", 800, 200},
			{ "MiniGrenade", "", 800, 200},
			{ "HandGrenade", "", 800, 200},
			{ "ACE_M14", "", 800, 200},
			{ "ACE_EarPlugs", "", 5, 0} // - Ausrüstung
		};	
	};
	class us_shop_bg{
		name = "US-Army Brigadier General Ausrüstung";
		side = "cop";
		license = "";
		level[] = { "life_coplevel", "SCALAR", 8, "" };
		items[] = {
			// Captain
			{ "hgun_mas_m9_F", "", 9000, 2250}, // - Pistolen
			{ "hgun_mas_acp_F", "", 9000, 2250},
			{ "hgun_mas_m23_F", "", 8400, 2100},
			{ "hgun_mas_usp_F", "", 8400, 2100},
			{ "hgun_mas_glocksf_F", "", 8400, 2100},
			{ "hgun_mas_glock_F", "", 8400, 2100},
			{ "hgun_mas_p226_F", "", 8400, 2100},
			{ "arifle_mas_m1014", "", 35000, 8750}, // - Gewehre
			{ "SMG_05_F", "", 35000, 8750},
			{ "arifle_mas_mp5sd", "", 35000, 8750},
			{ "hgun_mas_mp7_F", "", 35000, 8750},
			{ "arifle_mas_hk416", "", 35000, 8750},
			{ "arifle_mas_hk416_d", "", 35000, 8750},
			{ "arifle_mas_m16", "", 35000, 8750},
			{ "arifle_mas_m16a2", "", 35000, 8750},
			{ "srifle_mas_ebr", "", 35000, 8750},
			{ "arifle_mas_mk17", "", 35000, 8750},
			{ "arifle_mas_mk16_l", "", 35000, 8750},
			{ "arifle_mas_m4vlt", "", 35000, 8750},
			{ "arifle_mas_m4", "", 35000, 8750},
			{ "arifle_mas_m4_d", "", 35000, 8750},
			{ "arifle_mas_hk416c", "", 35000, 8750},
			{ "arifle_mas_hk416c_d", "", 35000, 8750},
			{ "arifle_mas_m4c", "", 35000, 8750},
			{ "arifle_mas_m4c_d", "", 35000, 8750},
			{ "srifle_mas_ebr", "", 35000, 8750},
			{ "LMG_mas_m240_F", "", 35000, 8750},
			{ "LMG_mas_M249a_F", "", 35000, 8750},
			{ "LMG_mas_M249_F_d", "", 35000, 8750},
			{ "SmokeShell", "", 500, 125}, // - Granaten
			{ "SmokeShellPurple", "", 500, 125},
			{ "SmokeShellRed", "", 500, 125},
			{ "SmokeShellOrange", "", 500, 125},
			{ "SmokeShellGreen", "", 500, 125},
			{ "SmokeShellYellow", "", 500, 125},
			{ "SmokeShellBlue", "", 500, 125},
			{ "ACE_HandFlare_White", "", 500, 125},
			{ "ACE_HandFlare_Red", "", 500, 125},
			{ "ACE_HandFlare_Green", "", 500, 125},
			{ "ACE_HandFlare_Yellow", "", 500, 125},
			{ "ACE_M84", "", 800, 200},
			{ "MiniGrenade", "", 800, 200},
			{ "HandGrenade", "", 800, 200},
			{ "ACE_M14", "", 800, 200},
			{ "ACE_EarPlugs", "", 5, 0} // - Ausrüstung
		};
	};
	class us_shop_mg{
		name = "US-Army Major General Ausrüstung";
		side = "cop";
		license = "";
		level[] = { "life_coplevel", "SCALAR", 9, "" };
		items[] = {
			// Captain
			{ "hgun_mas_m9_F", "", 9000, 2250}, // - Pistolen
			{ "hgun_mas_acp_F", "", 9000, 2250},
			{ "hgun_mas_m23_F", "", 8400, 2100},
			{ "hgun_mas_usp_F", "", 8400, 2100},
			{ "hgun_mas_glocksf_F", "", 8400, 2100},
			{ "hgun_mas_glock_F", "", 8400, 2100},
			{ "hgun_mas_p226_F", "", 8400, 2100},
			{ "arifle_mas_m1014", "", 35000, 8750}, // - Gewehre
			{ "SMG_05_F", "", 35000, 8750},
			{ "arifle_mas_mp5sd", "", 35000, 8750},
			{ "hgun_mas_mp7_F", "", 35000, 8750},
			{ "arifle_mas_hk416", "", 35000, 8750},
			{ "arifle_mas_hk416_d", "", 35000, 8750},
			{ "arifle_mas_m16", "", 35000, 8750},
			{ "arifle_mas_m16a2", "", 35000, 8750},
			{ "srifle_mas_ebr", "", 35000, 8750},
			{ "arifle_mas_mk17", "", 35000, 8750},
			{ "arifle_mas_mk16_l", "", 35000, 8750},
			{ "arifle_mas_m4vlt", "", 35000, 8750},
			{ "arifle_mas_m4", "", 35000, 8750},
			{ "arifle_mas_m4_d", "", 35000, 8750},
			{ "arifle_mas_hk416c", "", 35000, 8750},
			{ "arifle_mas_hk416c_d", "", 35000, 8750},
			{ "arifle_mas_m4c", "", 35000, 8750},
			{ "arifle_mas_m4c_d", "", 35000, 8750},
			{ "srifle_mas_ebr", "", 35000, 8750},
			{ "srifle_mas_m24", "", 35000, 8750},
			{ "srifle_mas_m24_d", "", 35000, 8750},
			{ "LMG_mas_m240_F", "", 35000, 8750},
			{ "LMG_mas_M249a_F", "", 35000, 8750},
			{ "LMG_mas_M249_F_d", "", 35000, 8750},
			{ "SmokeShell", "", 500, 125}, // - Granaten
			{ "SmokeShellPurple", "", 500, 125},
			{ "SmokeShellRed", "", 500, 125},
			{ "SmokeShellOrange", "", 500, 125},
			{ "SmokeShellGreen", "", 500, 125},
			{ "SmokeShellYellow", "", 500, 125},
			{ "SmokeShellBlue", "", 500, 125},
			{ "ACE_HandFlare_White", "", 500, 125},
			{ "ACE_HandFlare_Red", "", 500, 125},
			{ "ACE_HandFlare_Green", "", 500, 125},
			{ "ACE_HandFlare_Yellow", "", 500, 125},
			{ "ACE_M84", "", 800, 200},
			{ "MiniGrenade", "", 800, 200},
			{ "HandGrenade", "", 800, 200},
			{ "ACE_M14", "", 800, 200},
			{ "ACE_EarPlugs", "", 5, 0} // - Ausrüstung
		};
	};
	class us_shop_lg{
		name = "US-Army Lieutenant General Ausrüstung";
		side = "cop";
		license = "";
		level[] = { "life_coplevel", "SCALAR", 10, "" };
		items[] = {
			// Captain
			{ "hgun_mas_m9_F", "", 9000, 2250}, // - Pistolen
			{ "hgun_mas_acp_F", "", 9000, 2250},
			{ "hgun_mas_m23_F", "", 8400, 2100},
			{ "hgun_mas_usp_F", "", 8400, 2100},
			{ "hgun_mas_glocksf_F", "", 8400, 2100},
			{ "hgun_mas_glock_F", "", 8400, 2100},
			{ "hgun_mas_p226_F", "", 8400, 2100},
			{ "arifle_mas_m1014", "", 35000, 8750}, // - Gewehre
			{ "SMG_05_F", "", 35000, 8750},
			{ "arifle_mas_mp5sd", "", 35000, 8750},
			{ "hgun_mas_mp7_F", "", 35000, 8750},
			{ "arifle_mas_hk416", "", 35000, 8750},
			{ "arifle_mas_hk416_d", "", 35000, 8750},
			{ "arifle_mas_m16", "", 35000, 8750},
			{ "arifle_mas_m16a2", "", 35000, 8750},
			{ "srifle_mas_ebr", "", 35000, 8750},
			{ "arifle_mas_mk17", "", 35000, 8750},
			{ "arifle_mas_mk16_l", "", 35000, 8750},
			{ "arifle_mas_m4vlt", "", 35000, 8750},
			{ "arifle_mas_m4", "", 35000, 8750},
			{ "arifle_mas_m4_d", "", 35000, 8750},
			{ "arifle_mas_hk416c", "", 35000, 8750},
			{ "arifle_mas_hk416c_d", "", 35000, 8750},
			{ "arifle_mas_m4c", "", 35000, 8750},
			{ "arifle_mas_m4c_d", "", 35000, 8750},
			{ "srifle_mas_ebr", "", 35000, 8750},
			{ "srifle_mas_m24", "", 35000, 8750},
			{ "srifle_mas_m24_d", "", 35000, 8750},
			{ "LMG_mas_m240_F", "", 35000, 8750},
			{ "LMG_mas_M249a_F", "", 35000, 8750},
			{ "LMG_mas_M249_F_d", "", 35000, 8750},
			{ "LMG_mas_mk48_F", "", 35000, 8750},
			{ "LMG_mas_mk48_F_d", "", 35000, 8750},
			{ "LMG_mas_mg3_F", "", 35000, 8750},
			{ "SmokeShell", "", 500, 125}, // - Granaten
			{ "SmokeShellPurple", "", 500, 125},
			{ "SmokeShellRed", "", 500, 125},
			{ "SmokeShellOrange", "", 500, 125},
			{ "SmokeShellGreen", "", 500, 125},
			{ "SmokeShellYellow", "", 500, 125},
			{ "SmokeShellBlue", "", 500, 125},
			{ "ACE_HandFlare_White", "", 500, 125},
			{ "ACE_HandFlare_Red", "", 500, 125},
			{ "ACE_HandFlare_Green", "", 500, 125},
			{ "ACE_HandFlare_Yellow", "", 500, 125},
			{ "ACE_M84", "", 800, 200},
			{ "MiniGrenade", "", 800, 200},
			{ "HandGrenade", "", 800, 200},
			{ "ACE_M14", "", 800, 200},
			{ "ACE_EarPlugs", "", 5, 0} // - Ausrüstung
		};
	};
	class us_shop_general{
		name = "US-Army General Ausrüstung";
		side = "cop";
		license = "";
		level[] = { "life_coplevel", "SCALAR", 11, "" };
		items[] = {
			// Captain
			{ "hgun_mas_m9_F", "", 9000, 2250}, // - Pistolen
			{ "hgun_mas_acp_F", "", 9000, 2250},
			{ "hgun_mas_m23_F", "", 8400, 2100},
			{ "hgun_mas_usp_F", "", 8400, 2100},
			{ "hgun_mas_glocksf_F", "", 8400, 2100},
			{ "hgun_mas_glock_F", "", 8400, 2100},
			{ "hgun_mas_p226_F", "", 8400, 2100},
			{ "arifle_mas_m1014", "", 35000, 8750}, // - Gewehre
			{ "SMG_05_F", "", 35000, 8750},
			{ "arifle_mas_mp5sd", "", 35000, 8750},
			{ "hgun_mas_mp7_F", "", 35000, 8750},
			{ "arifle_mas_hk416", "", 35000, 8750},
			{ "arifle_mas_hk416_d", "", 35000, 8750},
			{ "arifle_mas_m16", "", 35000, 8750},
			{ "arifle_mas_m16a2", "", 35000, 8750},
			{ "srifle_mas_ebr", "", 35000, 8750},
			{ "arifle_mas_mk17", "", 35000, 8750},
			{ "arifle_mas_mk16_l", "", 35000, 8750},
			{ "arifle_mas_m4vlt", "", 35000, 8750},
			{ "arifle_mas_m4", "", 35000, 8750},
			{ "arifle_mas_m4_d", "", 35000, 8750},
			{ "arifle_mas_hk416c", "", 35000, 8750},
			{ "arifle_mas_hk416c_d", "", 35000, 8750},
			{ "arifle_mas_m4c", "", 35000, 8750},
			{ "arifle_mas_m4c_d", "", 35000, 8750},
			{ "srifle_mas_ebr", "", 35000, 8750},
			{ "srifle_mas_m24", "", 35000, 8750},
			{ "srifle_mas_m24_d", "", 35000, 8750},
			{ "srifle_mas_m107", "", 35000, 8750},
			{ "srifle_mas_m107_d", "", 35000, 8750},
			{ "srifle_mas_lrr", "", 35000, 8750},
			{ "srifle_mas_ksvk", "", 35000, 8750},
			{ "srifle_mas_ksvk_c", "", 35000, 8750},
			{ "srifle_mas_m110", "", 35000, 8750},
			{ "LMG_mas_m240_F", "", 35000, 8750},
			{ "LMG_mas_M249a_F", "", 35000, 8750},
			{ "LMG_mas_M249_F_d", "", 35000, 8750},
			{ "LMG_mas_mk48_F", "", 35000, 8750},
			{ "LMG_mas_mk48_F_d", "", 35000, 8750},
			{ "LMG_mas_mg3_F", "", 35000, 8750},
			{ "LMG_mas_m60_F", "", 35000, 8750},
			{ "LMG_Zafir_F", "", 35000, 8750},
			{ "SmokeShell", "", 500, 125}, // - Granaten
			{ "SmokeShellPurple", "", 500, 125},
			{ "SmokeShellRed", "", 500, 125},
			{ "SmokeShellOrange", "", 500, 125},
			{ "SmokeShellGreen", "", 500, 125},
			{ "SmokeShellYellow", "", 500, 125},
			{ "SmokeShellBlue", "", 500, 125},
			{ "ACE_HandFlare_White", "", 500, 125},
			{ "ACE_HandFlare_Red", "", 500, 125},
			{ "ACE_HandFlare_Green", "", 500, 125},
			{ "ACE_HandFlare_Yellow", "", 500, 125},
			{ "ACE_M84", "", 800, 200},
			{ "MiniGrenade", "", 800, 200},
			{ "HandGrenade", "", 800, 200},
			{ "ACE_M14", "", 800, 200},
			{ "ACE_EarPlugs", "", 5, 0^^} // - Ausrüstung
		};
	};

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "ItemGPS", "", 100, 45 },
            { "Binocular", "", 150, -1 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 1200, 980 }
        };
        mags[] = {};
        accs[] = {};
    };
};
