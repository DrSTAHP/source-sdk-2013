//========= Copyright Valve Corporation, All rights reserved. ============//
//
// Purpose:		Crowbar - an old favorite
//
// $NoKeywords: $
//=============================================================================//

#include "cbase.h"
#include "basehlcombatweapon.h"
#include "player.h"
#include "gamerules.h"
#include "ammodef.h"
#include "mathlib/mathlib.h"
#include "in_buttons.h"
#include "soundent.h"
#include "basebludgeonweapon.h"
#include "vstdlib/random.h"
#include "npcevent.h"
#include "ai_basenpc.h"
#include "weapon_hands.h"

// memdbgon must be the last include file in a .cpp file!!!
#include "tier0/memdbgon.h"

//-----------------------------------------------------------------------------
// CWeaponCrowbar
//-----------------------------------------------------------------------------

IMPLEMENT_SERVERCLASS_ST(CWeaponHands, DT_WeaponHands)
END_SEND_TABLE()

#ifndef HL2MP
LINK_ENTITY_TO_CLASS(weapon_hands, CWeaponHands);
PRECACHE_WEAPON_REGISTER(weapon_hands);
#endif

acttable_t CWeaponHands::m_acttable[] =
{
	{ ACT_MELEE_ATTACK1, ACT_MELEE_ATTACK_SWING, true },
	{ ACT_IDLE, ACT_IDLE_ANGRY_MELEE, false },
	{ ACT_IDLE_ANGRY, ACT_IDLE_ANGRY_MELEE, false },
};

IMPLEMENT_ACTTABLE(CWeaponHands);

//-----------------------------------------------------------------------------
// Constructor
//-----------------------------------------------------------------------------
CWeaponHands::CWeaponHands(void)
{

}

//-----------------------------------------------------------------------------
// Purpose: Add in a view kick for this weapon
//-----------------------------------------------------------------------------


//-----------------------------------------------------------------------------
// Attempt to lead the target (needed because citizens can't hit manhacks with the crowbar!)
//-----------------------------------------------------------------------------


//-----------------------------------------------------------------------------
// Animation event handlers
//-----------------------------------------------------------------------------
void CWeaponHands::HandleAnimEventMeleeHit(animevent_t *pEvent, CBaseCombatCharacter *pOperator)
{
	
}


//-----------------------------------------------------------------------------
// Animation event
//-----------------------------------------------------------------------------
void CWeaponHands::Operator_HandleAnimEvent(animevent_t *pEvent, CBaseCombatCharacter *pOperator)
{
	
}

void CWeaponHands::PrimaryAttack(void)
{

}

void CWeaponHands::SecondaryAttack(void)
{

}
