#include "hyrulefieldac_scene.h"

/**
 * Header Child Day (Default)
*/
SceneCmd hyrulefieldac_room_0_header00[] = {
    SCENE_CMD_ROOM_SHAPE(&hyrulefieldac_room_0_shapeHeader),
    SCENE_CMD_ECHO_SETTINGS(0x00),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 10),
    SCENE_CMD_END(),
};

