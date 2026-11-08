#include "hyrulefieldac_scene.h"

/**
 * Header Child Day (Default)
*/
SceneCmd hyrulefieldac_scene_header00[] = {
    SCENE_CMD_COL_HEADER(&hyrulefieldac_scene_collisionHeader),
    SCENE_CMD_ROOM_LIST(1, hyrulefieldac_scene_roomList),
    SCENE_CMD_SOUND_SETTINGS(0x00, 0x00, NA_BGM_NATURE_AMBIENCE),
    SCENE_CMD_MISC_SETTINGS(0x00, 0x00),
    SCENE_CMD_SPECIAL_FILES(0x00, OBJECT_GAMEPLAY_DANGEON_KEEP),
    SCENE_CMD_SKYBOX_SETTINGS(0x01, 0x00, LIGHT_MODE_TIME),
    SCENE_CMD_ENV_LIGHT_SETTINGS(4, hyrulefieldac_scene_header00_lightSettings),
    SCENE_CMD_SPAWN_LIST(hyrulefieldac_scene_header00_entranceList),
    SCENE_CMD_PLAYER_ENTRY_LIST(1, hyrulefieldac_scene_header00_playerEntryList),
    SCENE_CMD_END(),
};

RomFile hyrulefieldac_scene_roomList[] = {
    { (uintptr_t)_hyrulefieldac_room_0SegmentRomStart, (uintptr_t)_hyrulefieldac_room_0SegmentRomEnd },
};

ActorEntry hyrulefieldac_scene_header00_playerEntryList[] = {
    // Link / Spawn point
    {
        /* Actor ID   */ ACTOR_PLAYER,
        /* Position   */ { -2054, 600, -3331 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(225.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ (0x0F00 | ((0xFF & 0x00FF)))
    },
};

Spawn hyrulefieldac_scene_header00_entranceList[] = {
    // { Spawn Actor List Index, Room Index }
    { 0, 0 },
};

EnvLightSettings hyrulefieldac_scene_header00_lightSettings[4] = {
    // Default Settings (Dawn)
    {
        {    70,    45,    57 },   // Ambient Color
        {    40,   113,    40 },   // Diffuse0 Direction
        {   255,   255,   255 },   // Diffuse0 Color
        {   -73,    73,   -73 },   // Diffuse1 Direction
        {    20,    20,    60 },   // Diffuse1 Color
        {   140,   120,   100 },   // Fog Color
        BLEND_RATE_AND_FOG_NEAR(1, 993), // Blend Rate & Fog Near
        12800,                     // Fog Far
    },
    // Default Settings (Day)
    {
        {   105,    90,    90 },   // Ambient Color
        {    73,   -73,    73 },   // Diffuse0 Direction
        {   255,   255,   240 },   // Diffuse0 Color
        {   -73,    73,   -73 },   // Diffuse1 Direction
        {    50,    50,    90 },   // Diffuse1 Color
        {   100,   100,   120 },   // Fog Color
        BLEND_RATE_AND_FOG_NEAR(1, 996), // Blend Rate & Fog Near
        12800,                     // Fog Far
    },
    // Default Settings (Dusk)
    {
        {   120,    90,     0 },   // Ambient Color
        {    73,   -73,    73 },   // Diffuse0 Direction
        {   250,   135,    50 },   // Diffuse0 Color
        {   -73,    73,   -73 },   // Diffuse1 Direction
        {    30,    30,    60 },   // Diffuse1 Color
        {   120,    70,    50 },   // Fog Color
        BLEND_RATE_AND_FOG_NEAR(1, 995), // Blend Rate & Fog Near
        12800,                     // Fog Far
    },
    // Default Settings (Night)
    {
        {    40,    70,   100 },   // Ambient Color
        {    73,   -73,    73 },   // Diffuse0 Direction
        {    20,    20,    35 },   // Diffuse0 Color
        {   -73,    73,   -73 },   // Diffuse1 Direction
        {    50,    50,   100 },   // Diffuse1 Color
        {     0,     0,    30 },   // Fog Color
        BLEND_RATE_AND_FOG_NEAR(1, 992), // Blend Rate & Fog Near
        12800,                     // Fog Far
    },
};

