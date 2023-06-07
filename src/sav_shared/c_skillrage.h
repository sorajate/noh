// (C)2006 S2 Games
// c_skillrage.h
//
//=============================================================================
#ifndef __C_SKILLRAGE_H__
#define __C_SKILLRAGE_H__

//=============================================================================
// Headers
//=============================================================================
#include "i_skillselfbuff.h"
//=============================================================================

//=============================================================================
// CSkillRage
//=============================================================================
class CSkillRage : public ISkillSelfBuff
{
private:
    DECLARE_ENT_ALLOCATOR2(Skill, Rage);

public:
    ~CSkillRage() {}
    CSkillRage() :
    ISkillSelfBuff(GetEntityConfig()) {}
};
//=============================================================================

#endif //__C_SKILLRAGE_H__