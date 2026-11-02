#ifndef TRIFORCEROOM_SCENE_H
#define TRIFORCEROOM_SCENE_H

#include "ultra64.h"
#include "romfile.h"
#include "array_count.h"
#include "sequence.h"
#include "actor_profile.h"
#include "bgcheck.h"
#include "camera.h"
#include "cutscene.h"
#include "cutscene_commands.h"
#include "environment.h"
#include "z_math.h"
#include "object.h"
#include "ocarina.h"
#include "path.h"
#include "player.h"
#include "room.h"
#include "scene.h"
#include "event_manager.h"
#include "animated_materials.h"
#include "save.h"

// For older decomp versions
#ifndef SCENE_CMD_PLAYER_ENTRY_LIST
#define SCENE_CMD_PLAYER_ENTRY_LIST(length, playerEntryList) \
    { SCENE_CMD_ID_SPAWN_LIST, length, CMD_PTR(playerEntryList) }
#undef SCENE_CMD_SPAWN_LIST
#define SCENE_CMD_SPAWN_LIST(spawnList) \
    { SCENE_CMD_ID_ENTRANCE_LIST, 0, CMD_PTR(spawnList) }
#endif

#ifndef BLEND_RATE_AND_FOG_NEAR
#define BLEND_RATE_AND_FOG_NEAR(blendRate, fogNear) (s16)((((blendRate) / 4) << 10) | (fogNear))
#endif

extern SceneCmd triforceroom_scene_header00[];
extern RomFile triforceroom_scene_roomList[];
extern u8 _triforceroom_room_0SegmentRomStart[];
extern u8 _triforceroom_room_0SegmentRomEnd[];
extern ActorEntry triforceroom_scene_header00_playerEntryList[];
extern Spawn triforceroom_scene_header00_entranceList[];
extern EnvLightSettings triforceroom_scene_header00_lightSettings[1];
extern BgCamInfo triforceroom_scene_bgCamInfo[];
extern SurfaceType triforceroom_scene_polygonTypes[6];
extern Vec3s triforceroom_scene_vertices[150];
extern CollisionPoly triforceroom_scene_polygons[223];
extern CollisionHeader triforceroom_scene_collisionHeader;
extern SceneCmd triforceroom_room_0_header00[];
extern Gfx triforceroom_room_0_shapeHeader_entry_0_opaque[];
extern u64 triforceroom_room_0_dl_triforcetilel_rgba16[];
extern u64 triforceroom_room_0_dl_triforcewall_rgba16[];
extern u64 triforceroom_room_0_dl_triforcewall2_rgba16[];
extern u64 triforceroom_room_0_dl_gHilite3Tex_i8_rgba16[];
extern Vtx triforceroom_room_0_dl_Plane_mesh_layer_Opaque_vtx_cull[8];
extern Vtx triforceroom_room_0_dl_Plane_mesh_layer_Opaque_vtx_0[32];
extern Gfx triforceroom_room_0_dl_Plane_mesh_layer_Opaque_tri_0[];
extern Vtx triforceroom_room_0_dl_Plane_mesh_layer_Opaque_vtx_1[154];
extern Gfx triforceroom_room_0_dl_Plane_mesh_layer_Opaque_tri_1[];
extern Vtx triforceroom_room_0_dl_Plane_mesh_layer_Opaque_vtx_2[17];
extern Gfx triforceroom_room_0_dl_Plane_mesh_layer_Opaque_tri_2[];
extern Vtx triforceroom_room_0_dl_Plane_mesh_layer_Opaque_vtx_3[32];
extern Gfx triforceroom_room_0_dl_Plane_mesh_layer_Opaque_tri_3[];
extern Vtx triforceroom_room_0_dl_Plane_mesh_layer_Opaque_vtx_4[64];
extern Gfx triforceroom_room_0_dl_Plane_mesh_layer_Opaque_tri_4[];
extern Vtx triforceroom_room_0_dl_Plane_mesh_layer_Opaque_vtx_5[16];
extern Gfx triforceroom_room_0_dl_Plane_mesh_layer_Opaque_tri_5[];
extern Gfx mat_triforceroom_room_0_dl_f3dlite_material_layerOpaque[];
extern Gfx mat_triforceroom_room_0_dl_f3dlite_material_001_layerOpaque[];
extern Gfx mat_triforceroom_room_0_dl_f3dlite_material_002_layerOpaque[];
extern Gfx mat_triforceroom_room_0_dl_f3dlite_material_003_layerOpaque[];
extern Gfx mat_triforceroom_room_0_dl_f3dlite_material_004_layerOpaque[];
extern Gfx mat_triforceroom_room_0_dl_f3dlite_material_005_layerOpaque[];
extern Gfx triforceroom_room_0_dl_Plane_mesh_layer_Opaque[];
extern RoomShapeNormal triforceroom_room_0_shapeHeader;
extern RoomShapeDListsEntry triforceroom_room_0_shapeDListsEntry[1];

#endif
