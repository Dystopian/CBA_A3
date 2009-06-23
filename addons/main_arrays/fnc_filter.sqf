/* ----------------------------------------------------------------------------
Function: CBA_fnc_filter

Description:
	Filter each element of an array via a function.

Example:
(begin code)
	[[1, 2, 3], { (_this select 0) + 1 }] call CBA_fnc_filter;
	// ===> [2, 3, 4]
(end code)
  
Parameters:
	_array - Array of key-value pairs to create Hash from [Array, defaults to []]
	_filter - Function to filter each element [Function]
	_inPlace - True to alter the array itself, rather than create a new one [Boolean, defaults to false]
	
Returns:
	Filtered array [Array]
---------------------------------------------------------------------------- */

#include "script_component.hpp"

SCRIPT(filter);

// -----------------------------------------------------------------------------

PARAMS_2(_array,_filter);
DEFAULT_PARAM(2,_inPlace,false);

private "_arrayOut";

if _inPlace then
{
	_arrayOut = _array;
}
else
{
	_arrayOut = [];
	_arrayOut resize (count _array);
};

for "_i" from 0 to ((count _array) - 1) do
{
	_arrayOut set [_i, [_array select _i] call _filter];
};

_arrayOut;