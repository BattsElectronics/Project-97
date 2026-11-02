#include "triforceroom_scene.h"

/**
 * Header Child Day (Default)
*/
SceneCmd triforceroom_scene_header00[] = {
    SCENE_CMD_COL_HEADER(&triforceroom_scene_collisionHeader),
    SCENE_CMD_ROOM_LIST(1, triforceroom_scene_roomList),
    SCENE_CMD_SOUND_SETTINGS(0x00, 0x00, NA_BGM_FIELD_LOGIC),
    SCENE_CMD_MISC_SETTINGS(0x00, 0x00),
    SCENE_CMD_SPECIAL_FILES(0x00, OBJECT_GAMEPLAY_DANGEON_KEEP),
    SCENE_CMD_SKYBOX_SETTINGS(0x00, 0x00, LIGHT_MODE_SETTINGS),
    SCENE_CMD_ENV_LIGHT_SETTINGS(1, triforceroom_scene_header00_lightSettings),
    SCENE_CMD_SPAWN_LIST(triforceroom_scene_header00_entranceList),
    SCENE_CMD_PLAYER_ENTRY_LIST(1, triforceroom_scene_header00_playerEntryList),
    SCENE_CMD_END(),
};

RomFile triforceroom_scene_roomList[] = {
    { (uintptr_t)_triforceroom_room_0SegmentRomStart, (uintptr_t)_triforceroom_room_0SegmentRomEnd },
};

ActorEntry triforceroom_scene_header00_playerEntryList[] = {
    // Link / Spawn point
    {
        /* Actor ID   */ ACTOR_PLAYER,
        /* Position   */ { 0, -120, 0 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ (0x0F00 | ((0xFF & 0x00FF)))
    },
};

Spawn triforceroom_scene_header00_entranceList[] = {
    // { Spawn Actor List Index, Room Index }
    { 0, 0 },
};

EnvLightSettings triforceroom_scene_header00_lightSettings[1] = {
    // Indoor No. 1
    {
        {    70,    70,    70 },   // Ambient Color
        {     0,   114,   -55 },   // Diffuse0 Direction
        {   181,   181,   181 },   // Diffuse0 Color
        {   -73,    81,    64 },   // Diffuse1 Direction
        {   162,   162,   162 },   // Diffuse1 Color
        {   120,   120,   120 },   // Fog Color
        BLEND_RATE_AND_FOG_NEAR(1, 993), // Blend Rate & Fog Near
        12800,                     // Fog Far
    },
};

