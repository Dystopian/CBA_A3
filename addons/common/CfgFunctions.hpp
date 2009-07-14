// -----------------------------------------------------------------------------
// Automatically generated by 'functions_config.rb'
// DO NOT MANUALLY EDIT THIS FILE!
// -----------------------------------------------------------------------------

class CfgFunctions
{
	class CBA
	{
		class Misc
		{
			// CBA_fnc_removeWeapon
			class removeWeapon
			{
				description = "Remove a weapon.";
				file = "\x\cba\addons\common\fnc_removeWeapon.sqf";
			};
			// CBA_fnc_players
			class players
			{
				description = "Get a list of current player objects.";
				file = "\x\cba\addons\common\fnc_players.sqf";
			};
			// CBA_fnc_determineMuzzles
			class determineMuzzles
			{
				description = "Gets the list of possible muzzles for a weapon.";
				file = "\x\cba\addons\common\fnc_determineMuzzles.sqf";
			};
			// CBA_fnc_addWeaponCargo
			class addWeaponCargo
			{
				description = "Add weapon(s) to vehicle cargo.";
				file = "\x\cba\addons\common\fnc_addWeaponCargo.sqf";
			};
			// CBA_fnc_addMagazineVerified
			class addMagazineVerified
			{
				description = "Add a magazine, but verify that it was successful without over-burdening the recipient.";
				file = "\x\cba\addons\common\fnc_addMagazineVerified.sqf";
			};
			// CBA_fnc_addMagazineCargo
			class addMagazineCargo
			{
				description = "Add magazine to a vehicle cargo.";
				file = "\x\cba\addons\common\fnc_addMagazineCargo.sqf";
			};
			// CBA_fnc_removeMagazine
			class removeMagazine
			{
				description = "Remove a magazine.";
				file = "\x\cba\addons\common\fnc_removeMagazine.sqf";
			};
			// CBA_fnc_getPistol
			class getPistol
			{
				description = "Returns first found Pistol in unit's weaponList.";
				file = "\x\cba\addons\common\fnc_getPistol.sqf";
			};
			// CBA_fnc_getGroupIndex
			class getGroupIndex
			{
				description = "Finds out the actual ID number of a person within his group as assigned by the game and used in the squad leader's command menu, not just the order within the units of his group (this order can change due to players joining and leaving the game, deaths or promotions).";
				file = "\x\cba\addons\common\fnc_getGroupIndex.sqf";
			};
			// CBA_fnc_createMarker
			class createMarker
			{
				description = "Creates a marker all at once.";
				file = "\x\cba\addons\common\fnc_createMarker.sqf";
			};
			// CBA_fnc_defaultParam
			class defaultParam
			{
				description = "Gets a value from parameters list (usually _this) with a default.";
				file = "\x\cba\addons\common\fnc_defaultParam.sqf";
			};
			// CBA_fnc_addMagazine
			class addMagazine
			{
				description = "Add magazine to a vehicle/unit.";
				file = "\x\cba\addons\common\fnc_addMagazine.sqf";
			};
			// CBA_fnc_selectWeapon
			class selectWeapon
			{
				description = "Selects weapon, if the player has the weapon, including correctly selecting a muzzle, if any.";
				file = "\x\cba\addons\common\fnc_selectWeapon.sqf";
			};
			// CBA_fnc_inheritsFrom
			class inheritsFrom
			{
				description = "Checks whether a config entry inherits, directly or indirectly, from another one.";
				file = "\x\cba\addons\common\fnc_inheritsFrom.sqf";
			};
			// CBA_fnc_getUnitDeathAnim
			class getUnitDeathAnim
			{
				description = "Get death animation for a unit.";
				file = "\x\cba\addons\common\fnc_getUnitDeathAnim.sqf";
			};
			// CBA_fnc_getUnitAnim
			class getUnitAnim
			{
				description = "Get information about a unit's stance and speed.";
				file = "\x\cba\addons\common\fnc_getUnitAnim.sqf";
			};
			// CBA_fnc_getArg
			class getArg
			{
				description = "Get default named argument from list.";
				file = "\x\cba\addons\common\fnc_getArg.sqf";
			};
			// CBA_fnc_dropWeapon
			class dropWeapon
			{
				description = "Drops a weapon.";
				file = "\x\cba\addons\common\fnc_dropWeapon.sqf";
			};
			// CBA_fnc_addPlayerAction
			class addPlayerAction
			{
				description = "Adds persistent action to player (which will also be available in vehicles and after respawn or teamswitch).";
				file = "\x\cba\addons\common\fnc_addPlayerAction.sqf";
			};
			// CBA_fnc_getAnimType
			class getAnimType
			{
				description = "Used to determine which weapon unit is currently holding and return proper animation type.";
				file = "\x\cba\addons\common\fnc_getAnimType.sqf";
			};
			// CBA_fnc_dropMagazine
			class dropMagazine
			{
				description = "Drop a magazine.";
				file = "\x\cba\addons\common\fnc_dropMagazine.sqf";
			};
			// CBA_fnc_parseYAML
			class parseYAML
			{
				description = "Parses a YAML file into a nested array/Hash structure.";
				file = "\x\cba\addons\common\fnc_parseYAML.sqf";
			};
			// CBA_fnc_objectRandom
			class objectRandom
			{
				description = "Creates a ""random"" number 0-9 based on an object's velocity";
				file = "\x\cba\addons\common\fnc_objectRandom.sqf";
			};
			// CBA_fnc_headDir
			class headDir
			{
				description = "Get the direction of a unit's head.";
				file = "\x\cba\addons\common\fnc_headDir.sqf";
			};
			// CBA_fnc_getConfigEntry
			class getConfigEntry
			{
				description = "Gets a configuration entry.";
				file = "\x\cba\addons\common\fnc_getConfigEntry.sqf";
			};
			// CBA_fnc_realHeight
			class realHeight
			{
				description = "Real z coordinate of an object, for placing stuff on roofs, etc.";
				file = "\x\cba\addons\common\fnc_realHeight.sqf";
			};
			// CBA_fnc_switchPlayer
			class switchPlayer
			{
				description = "Switch player to another unit.";
				file = "\x\cba\addons\common\fnc_switchPlayer.sqf";
			};
			// CBA_fnc_createTrigger
			class createTrigger
			{
				description = "Create a trigger all at once.";
				file = "\x\cba\addons\common\fnc_createTrigger.sqf";
			};
			// CBA_fnc_removePlayerAction
			class removePlayerAction
			{
				description = "Removes player action previously added with <CBA_fnc_addPlayerAction>.";
				file = "\x\cba\addons\common\fnc_removePlayerAction.sqf";
			};
			// CBA_fnc_nearPlayer
			class nearPlayer
			{
				description = "Check whether these are any players within a certain distance of a unit.";
				file = "\x\cba\addons\common\fnc_nearPlayer.sqf";
			};
			// CBA_fnc_addWeapon
			class addWeapon
			{
				description = "Add a weapon to a unit.";
				file = "\x\cba\addons\common\fnc_addWeapon.sqf";
			};
			// CBA_fnc_isTurnedOut
			class isTurnedOut
			{
				description = "Checks whether a unit is turned out in a vehicle or not.";
				file = "\x\cba\addons\common\fnc_isTurnedOut.sqf";
			};
		};
	};
};
