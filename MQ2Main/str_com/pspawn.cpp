#include <stdio.h>
#include "../MQ2Plugin.h"

#define KS(x)  printf("/* 0x%04x */ \n", &p->x)

main()
{
struct _SPAWNINFO *p = NULL;

KS(vtable);
KS(pPrev);
KS(pNext);
KS(Unknown0xc);
KS(Lastname);
KS(Unknown0x30);
KS(Y);
KS(X);
KS(Z);
KS(SpeedY);
KS(SpeedX);
KS(SpeedZ);
KS(SpeedRun);
KS(Heading);
KS(SpeedHeading);
KS(Unknown0x60);
KS(CameraAngle);
KS(SpawnID);
KS(Unknown0x70);
KS(Name);
KS(DisplayedName);
KS(IsABoat);
KS(Unknown0xf5);
KS(Mount);
KS(Unknown0x100);
KS(SpeedMultiplier);
KS(Unknown0x118);
KS(TimeStamp);
KS(Unknown0x12c);
KS(UnderWater);
KS(Unknown0x131);
KS(FeetWet);
KS(Unknown0x13e);
KS(Unknown0x13f);
KS(Type);
KS(Unknown0x141);
KS(BodyType);
KS(Unknown0x145);
KS(AvatarHeight);
KS(Unknown0x14c);
KS(Linkdead);
KS(Unknown0x15d);
KS(Level);
KS(Unknown0x166);
KS(PvPFlag);
KS(Unknown0x172);
KS(StandState);
KS(Unknown0x1e7);
KS(Title);
KS(Unknown0x20c);
KS(Sneak);
KS(Unknown0x21d);
KS(pCharInfo);
KS(Unknown0x234);
KS(PetID);
KS(GuildID);
KS(HPCurrent);
KS(Unknown0x24c);
KS(RunSpeed);
KS(Suffix);
KS(Holding);
KS(Unknown0x290);
KS(HideMode);
KS(Unknown0x299);
KS(LFG);
KS(Unknown0x2a9);
KS(GM);
KS(Unknown0x2cd);
KS(FishingEvent);
KS(Unknown0x389);
KS(Anon);
KS(Unknown0x398);
KS(Trader);
KS(Unknown0x3c4);
KS(WalkSpeed);
KS(Unknown0x3d0);
KS(AFK);
KS(Unknown0x3dc);
KS(Deity);
KS(Unknown0x3e4);
KS(MasterID);
KS(Unknown0x3ec);
KS(LastTick);
KS(Light);
KS(Unknown0x405);
KS(Class);
KS(Unknown0x40d);
KS(HPMax);
KS(Unknown0x428);
KS(Zone);
KS(Instance);
KS(Unknown0x438);
KS(GuildStatus);
KS(SpellETA);
KS(CastingSpellID);
KS(CastingAnimation);
KS(Unknown0x44c);
KS(CastingY);
KS(CastingX);
KS(FishingETA);
KS(Unknown0x474);
KS(WhoFollowing);
KS(pGroupAssistNPC);
KS(pRaidAssistNPC);
KS(pGroupMarkNPC);
KS(pRaidMarkNPC);
KS(pTargetOfTarget);
KS(Unknown0xdd4);
KS(InNonPCRaceIllusion);
KS(Unknown0xe05);
KS(FaceHair);
KS(HairColor);
KS(BeardColor);
KS(EyesColor);
KS(EyesType);
KS(HairType);
KS(BeardType);
KS(Unknown0xe0d);
KS(Race);
KS(Gender);
KS(ActorDef);
KS(Unknown0xe55);
KS(Equipment);
KS(ArmorColor);
KS(Unknown0xea0);
KS(pcactorex);
KS(Unknown0xee0);
KS(FaceRelatedActorStruct);
KS(Unknown0xee8);
KS(Animation);
KS(Unknown0xf58);
KS(Model);
KS(Unknown0xfc0);
KS(InvitedToGroup);
KS(Unknown0x1041);
KS(AARank);
KS(Unknown0x11a8);
KS(vtable2);
KS(Unknown0x1220);
KS(pSpawn);
KS(Levitate);
KS(Unknown0x122c);

}
