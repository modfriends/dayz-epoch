class WeaponHolderBase;
class WoodenArrowF : WeaponHolderBase {
	scope = public;
	displayName = $STR_ITEMWOODENARROW_CODE_NAME;
	model = "\dayz_weapons\models\bolt";
	destrType = "DestructNo";

	class eventHandlers
	{
		init = "[(_this select 0),'cfgMagazines','1Rnd_Arrow_Wood'] spawn object_pickupAction;";
	};
};
class WeaponHolder_ItemCrowbar: WeaponHolderBase
{
	scope=2;
	displayName=$STR_EQUIP_NAME_CROWBAR;
	model="\dayz_equip\models\crowbar.p3d";
	destrType = "DestructNo";
	
	class eventHandlers
	{
		init="[(_this select 0),'cfgWeapons','ItemCrowbar'] spawn object_pickupAction;";
	};
};
class WeaponHolder_ItemPickaxe: WeaponHolderBase
{
	scope=2;
	displayName = $STR_EQUIP_NAME_PICKAXE;
	model = "z\addons\dayz_communityweapons\models\pickaxe\pickaxe.p3d";
	destrType = "DestructNo";
	
	class eventHandlers
	{
		init="[(_this select 0),'cfgWeapons','ItemPickaxe'] spawn object_pickupAction;";
	};
};
class WeaponHolder_ItemPickaxeBroken: WeaponHolder_ItemPickaxe
{
	displayName = $STR_name_ItemPickaxeBroken;
	
	class eventHandlers
	{
		init="[(_this select 0),'cfgWeapons','ItemPickaxeBroken'] spawn object_pickupAction;";
	};
};
class WeaponHolder_ItemSledge : WeaponHolderBase { // Epoch class. Needed for player_dropWeapon
	scope = public;
	displayName = $STR_EQUIP_NAME_SledgeHammer;
	model="\z\addons\dayz_epoch\models\sledge_mag.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgWeapons','ItemSledge'] spawn object_pickupAction;";
	};
};
/*
class WeaponHolder_MeleeBaseBallBat: WeaponHolderBase
{
	scope=2;
	displayName=$STR_EQUIP_NAME_BASEBALLBAT;
	model="\z\addons\dayz_communityassets\models\baseball_bat.p3d";
	destrType = "DestructNo";
	
	class eventHandlers
	{
		init="[(_this select 0),'cfgWeapons','MeleeBaseBallBat'] spawn object_pickupAction;";
	};
};
class WeaponHolder_MeleeBatBarbed: WeaponHolderBase
{
	scope=2;
	displayName=$STR_CRAFT_NAME_BaseBallBatBarbed;
	model="\z\addons\dayz_communityassets\models\baseball_bat.p3d";
	destrType = "DestructNo";
	
	class eventHandlers
	{
		init="[(_this select 0),'cfgWeapons','MeleeBaseBallBatBarbed'] spawn object_pickupAction;";
	};
};
class WeaponHolder_MeleeBaseBallBatNails: WeaponHolderBase
{
	scope=2;
	displayName=$STR_CRAFT_NAME_NailedBaseballBat;
	model="\z\addons\dayz_communityassets\models\baseball_bat_nails.p3d";
	destrType = "DestructNo";
	
	class eventHandlers
	{
		init="[(_this select 0),'cfgWeapons','MeleeBaseBallBatNails'] spawn object_pickupAction;";
	};
};
*/
class WeaponHolder_MeleeMachete: WeaponHolderBase
{
	scope=2;
	displayName=$STR_EQUIP_NAME_MACHETE;
	model="\z\addons\dayz_communityassets\models\machete.p3d";
	destrType = "DestructNo";
	
	class eventHandlers
	{
		init="[(_this select 0),'cfgWeapons','MeleeMachete'] spawn object_pickupAction;";
	};
};
class WeaponHolder_ItemJerrycanEmpty : WeaponHolderBase {
	scope = public;
	displayName = "$STR_EQUIP_NAME_39";
	model = "\dayz_equip\proxy\jerrycan_side.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemJerrycanEmpty'] spawn object_pickupAction;";
	};
};
class WeaponHolder_ItemFuelcanEmpty : WeaponHolderBase {
	scope = public;
	displayName = $STR_ITEM_NAME_FUELCAN_EMPTY;
	model = "z\addons\dayz_communityassets\models\fuelcan.p3d";
	destrType = "DestructNo";

	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemFuelcanEmpty'] spawn object_pickupAction;";
	};
};
class WeaponHolder_ItemFuelcan : WeaponHolderBase {
	scope = public;
	displayName = $STR_ITEM_NAME_FUELCAN;
	model = "z\addons\dayz_communityassets\models\fuelcan.p3d";
	destrType = "DestructNo";

	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemFuelcan'] spawn object_pickupAction;";
	};
};
class WeaponHolder_ItemCamoNet : WeaponHolderBase {
	scope = public;
	displayName = $STR_ITEM_NAME_CAMONET;
//	model = "dayz_equip\proxy\tentbag.p3d"; // was models\tentbag_gear.prd ...
	model = "z\addons\dayz_communityassets\models\packed_net_green.p3d"; // was models\tentbag_gear.prd ...
	destrType = "DestructNo";

	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','forest_net_kit'] spawn object_pickupAction;";
	};
};

class WeaponHolder_ItemDomeTent : WeaponHolderBase {
	scope = public;
	displayName = $STR_VEH_NAME_DOME_TENT;
	model = "\dayz_equip\proxy\tentbag.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemDomeTent'] spawn object_pickupAction;";
	};
};

class WeaponHolder_ItemDesertTent : WeaponHolderBase {
	scope = public;
	displayName = $STR_VEH_NAME_DESERT_TENT;
	model = "\dayz_equip\proxy\tentbag.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemDesertTent'] spawn object_pickupAction;";
	};
};

class WeaponHolder_ItemCrate : WeaponHolderBase {
	scope = public;
	displayName = $STR_ITEM_NAME_equip_crate;
	model = "\z\addons\dayz_communityassets\models\crate.p3d";
	destrType = "DestructNo";
		
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','equip_crate'] spawn object_pickupAction;";
	};
};
