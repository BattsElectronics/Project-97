#include "triforceroom_scene.h"

RoomShapeNormal triforceroom_room_0_shapeHeader = {
    ROOM_SHAPE_TYPE_NORMAL,
    ARRAY_COUNT(triforceroom_room_0_shapeDListsEntry),
    triforceroom_room_0_shapeDListsEntry,
    triforceroom_room_0_shapeDListsEntry + ARRAY_COUNT(triforceroom_room_0_shapeDListsEntry)
};

RoomShapeDListsEntry triforceroom_room_0_shapeDListsEntry[1] = {
    { triforceroom_room_0_shapeHeader_entry_0_opaque, NULL }
};

