#include "cbase.h"
#include "asw_weapon_energy_shield_shared.h"

// memdbgon must be the last include file in a .cpp file!!!
#include "tier0/memdbgon.h"


#ifdef RD_7A_WEAPONS
IMPLEMENT_NETWORKCLASS_ALIASED( ASW_Weapon_Energy_Shield, DT_ASW_Weapon_Energy_Shield );

BEGIN_NETWORK_TABLE( CASW_Weapon_Energy_Shield, DT_ASW_Weapon_Energy_Shield )
END_NETWORK_TABLE()

BEGIN_PREDICTION_DATA( CASW_Weapon_Energy_Shield )
END_PREDICTION_DATA()

LINK_ENTITY_TO_CLASS( asw_weapon_energy_shield, CASW_Weapon_Energy_Shield );
PRECACHE_WEAPON_REGISTER( asw_weapon_energy_shield );

#ifndef CLIENT_DLL
BEGIN_DATADESC( CASW_Weapon_Energy_Shield )
END_DATADESC()
#endif

// TODO: m_iEnergyShieldProjectilesDestroyed
#endif
