#ifndef __BATTLEGROUNDTTP_H
#define __BATTLEGROUNDTTP_H

#include "Battleground.h"

enum BattlegroundTTPObjectTypes
{
    BG_TTP_OBJECT_DOOR_1         = 0,
    BG_TTP_OBJECT_DOOR_2         = 1,
    BG_TTP_OBJECT_BUFF_1         = 2,
    BG_TTP_OBJECT_BUFF_2         = 3,
    BG_TTP_OBJECT_MAX            = 4
};

enum BattlegroundTTPObjects
{
    BG_TTP_OBJECT_TYPE_DOOR_1    = 219395,
    BG_TTP_OBJECT_TYPE_DOOR_2    = 219396,
    BG_TTP_OBJECT_TYPE_BUFF_1    = 184663,
    BG_TTP_OBJECT_TYPE_BUFF_2    = 184664
};

class BattlegroundTTPScore : public BattlegroundScore
{
    public:
        BattlegroundTTPScore() {};
        virtual ~BattlegroundTTPScore() {};
};

class BattlegroundTTP : public Battleground
{
    public:
        BattlegroundTTP();
        ~BattlegroundTTP();

        /* inherited from BattlegroundClass */
        void AddPlayer(Player* player);
        void StartingEventCloseDoors();
        void StartingEventOpenDoors();
        void StartingEventDespawnDoors();
        void RemovePlayer(Player* player, uint64 guid, uint32 team);
        void HandleAreaTrigger(Player* player, uint32 Trigger);
        bool SetupBattleground();
        void Reset();
        void FillInitialWorldStates(WorldPacket &d);
        void HandleKillPlayer(Player* player, Player* killer);

        bool HandlePlayerUnderMap(Player* player);
};
#endif