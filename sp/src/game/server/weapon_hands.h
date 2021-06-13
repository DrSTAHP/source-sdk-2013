//========= Copyright Valve Corporation, All rights reserved. ============//
//
// Purpose:
//
//=============================================================================//

#ifndef WEAPON_HANDS_H
#define WEAPON_HANDS_H

#include "basebludgeonweapon.h"

#if defined( _WIN32 )
#pragma once
#endif

#define	HANDS_RANGE	75.0f
#define	HANDS_REFIRE	0.4f

//-----------------------------------------------------------------------------
// CWeaponCrowbar
//-----------------------------------------------------------------------------

class CWeaponHands : public CBaseHLBludgeonWeapon
{
public:
	DECLARE_CLASS(CWeaponHands, CBaseHLBludgeonWeapon);

	DECLARE_SERVERCLASS();
	DECLARE_ACTTABLE();

	CWeaponHands();

	float		GetRange(void)		{ return	HANDS_RANGE; }
	float		GetFireRate(void)		{ return	HANDS_REFIRE; }

	virtual void		SecondaryAttack(void);
	virtual	void	PrimaryAttack(void);

	// Animation event
	virtual void Operator_HandleAnimEvent(animevent_t *pEvent, CBaseCombatCharacter *pOperator);

private:
	// Animation event handlers
	void HandleAnimEventMeleeHit(animevent_t *pEvent, CBaseCombatCharacter *pOperator);
};

#endif // WEAPON_HANDS_H
