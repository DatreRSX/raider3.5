#pragma once

#include "GameModeBase.hpp"

class GameModePlayground : public AbstractGameModeBase
{
public:
    GameModePlayground()
        : GameModePlayground("FortPlaylistAthena Playlist_Playground.Playlist_Playground")
    {
    }

    GameModePlayground(std::string PlaylistName)
        : AbstractGameModeBase(PlaylistName, true, 1, false, true)
    {
        LOG_INFO("Initializing GameMode Playground!");
        auto GameMode = static_cast<AFortGameModeAthena*>(GetWorld()->AuthorityGameMode);
        if (GameMode)
        {
            GameMode->bSafeZoneActive = false;
            GameMode->bSafeZonePaused = true;
        }
    }

    void OnPlayerJoined(AFortPlayerControllerAthena* Controller) override
    {
        this->Teams->AddPlayerToRandomTeam(Controller);
    }

    void InitializeGameplay()
    {
    }

    /*void OnPlayerKilled(AFortPlayerControllerAthena*& Controller) override
    {
    }*/
};
