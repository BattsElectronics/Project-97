#include "hyrulefieldac_scene.h"

RoomShapeNormal hyrulefieldac_room_0_shapeHeader = {
    ROOM_SHAPE_TYPE_NORMAL,
    ARRAY_COUNT(hyrulefieldac_room_0_shapeDListsEntry),
    hyrulefieldac_room_0_shapeDListsEntry,
    hyrulefieldac_room_0_shapeDListsEntry + ARRAY_COUNT(hyrulefieldac_room_0_shapeDListsEntry)
};

RoomShapeDListsEntry hyrulefieldac_room_0_shapeDListsEntry[1] = {
    { hyrulefieldac_room_0_shapeHeader_entry_0_opaque, NULL }
};

