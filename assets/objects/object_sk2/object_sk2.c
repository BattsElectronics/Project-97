#include "object_sk2.h"

#include "array_count.h"
#include "gfx.h"
#include "sys_matrix.h"
#include "ultra64.h"

s16 gStalfosFlinchFromHitBehindFrameData[] = {
#include "assets/objects/object_sk2/gStalfosFlinchFromHitBehindFrameData.inc.c"
};

JointIndex gStalfosFlinchFromHitBehindJointIndices[] = {
#include "assets/objects/object_sk2/gStalfosFlinchFromHitBehindJointIndices.inc.c"
};

AnimationHeader gStalfosFlinchFromHitBehindAnim = {
#include "assets/objects/object_sk2/gStalfosFlinchFromHitBehindAnim.inc.c"
};

u8 object_sk2_zeros_000454[12] = { 0 };

s16 gStalfosFallOverBackwardsFrameData[] = {
#include "assets/objects/object_sk2/gStalfosFallOverBackwardsFrameData.inc.c"
};

JointIndex gStalfosFallOverBackwardsJointIndices[] = {
#include "assets/objects/object_sk2/gStalfosFallOverBackwardsJointIndices.inc.c"
};

AnimationHeader gStalfosFallOverBackwardsAnim = {
#include "assets/objects/object_sk2/gStalfosFallOverBackwardsAnim.inc.c"
};

s16 gStalfosJumpBackwardsFrameData[] = {
#include "assets/objects/object_sk2/gStalfosJumpBackwardsFrameData.inc.c"
};

JointIndex gStalfosJumpBackwardsJointIndices[] = {
#include "assets/objects/object_sk2/gStalfosJumpBackwardsJointIndices.inc.c"
};

AnimationHeader gStalfosJumpBackwardsAnim = {
#include "assets/objects/object_sk2/gStalfosJumpBackwardsAnim.inc.c"
};

u8 object_sk2_zeros_001988[8] = { 0 };

s16 gStalfosBlockWithShieldFrameData[] = {
#include "assets/objects/object_sk2/gStalfosBlockWithShieldFrameData.inc.c"
};

JointIndex gStalfosBlockWithShieldJointIndices[] = {
#include "assets/objects/object_sk2/gStalfosBlockWithShieldJointIndices.inc.c"
};

AnimationHeader gStalfosBlockWithShieldAnim = {
#include "assets/objects/object_sk2/gStalfosBlockWithShieldAnim.inc.c"
};

s16 gStalfosStandAttentionFrameData[] = {
#include "assets/objects/object_sk2/gStalfosStandAttentionFrameData.inc.c"
};

JointIndex gStalfosStandAttentionJointIndices[] = {
#include "assets/objects/object_sk2/gStalfosStandAttentionJointIndices.inc.c"
};

AnimationHeader gStalfosStandAttentionAnim = {
#include "assets/objects/object_sk2/gStalfosStandAttentionAnim.inc.c"
};

u8 object_sk2_zeros_002198[8] = { 0 };

s16 gStalfosFastAdvanceFrameData[] = {
#include "assets/objects/object_sk2/gStalfosFastAdvanceFrameData.inc.c"
};

JointIndex gStalfosFastAdvanceJointIndices[] = {
#include "assets/objects/object_sk2/gStalfosFastAdvanceJointIndices.inc.c"
};

AnimationHeader gStalfosFastAdvanceAnim = {
#include "assets/objects/object_sk2/gStalfosFastAdvanceAnim.inc.c"
};

u8 object_sk2_zeros_0026E4[12] = { 0 };

s16 gStalfosMiddleGuardFrameData[] = {
#include "assets/objects/object_sk2/gStalfosMiddleGuardFrameData.inc.c"
};

JointIndex gStalfosMiddleGuardJointIndices[] = {
#include "assets/objects/object_sk2/gStalfosMiddleGuardJointIndices.inc.c"
};

AnimationHeader gStalfosMiddleGuardAnim = {
#include "assets/objects/object_sk2/gStalfosMiddleGuardAnim.inc.c"
};

u8 object_sk2_zeros_00317C[4] = { 0 };

Vtx gStalfosSkullVtx[] = {
#include "assets/objects/object_sk2/gStalfosSkullVtx.inc.c"
};

Vtx gStalfosUpperCoreVtx[] = {
#include "assets/objects/object_sk2/gStalfosUpperCoreVtx.inc.c"
};

Vtx gStalfosRightUpperArmVtx[] = {
#include "assets/objects/object_sk2/gStalfosRightUpperArmVtx.inc.c"
};

Vtx gStalfosLowerCoreVtx[] = {
#include "assets/objects/object_sk2/gStalfosLowerCoreVtx.inc.c"
};

Vtx gStalfosRightThighVtx[] = {
#include "assets/objects/object_sk2/gStalfosRightThighVtx.inc.c"
};

Vtx gStalfosRightHandVtx[] = {
#include "assets/objects/object_sk2/gStalfosRightHandVtx.inc.c"
};

Vtx gStalfosChestVtx[] = {
#include "assets/objects/object_sk2/gStalfosChestVtx.inc.c"
};

Vtx gStalfosJawVtx[] = {
#include "assets/objects/object_sk2/gStalfosJawVtx.inc.c"
};

Vtx gStalfosUpperNeckVtx[] = {
#include "assets/objects/object_sk2/gStalfosUpperNeckVtx.inc.c"
};

Vtx gStalfosLowerNeckVtx[] = {
#include "assets/objects/object_sk2/gStalfosLowerNeckVtx.inc.c"
};

Vtx gStalfosShieldVtx[] = {
#include "assets/objects/object_sk2/gStalfosShieldVtx.inc.c"
};

Vtx gStalfosWaistVtx[] = {
#include "assets/objects/object_sk2/gStalfosWaistVtx.inc.c"
};

Vtx gStalfosRightLowerLegVtx[] = {
#include "assets/objects/object_sk2/gStalfosRightLowerLegVtx.inc.c"
};

Vtx gStalfosRightForearmVtx[] = {
#include "assets/objects/object_sk2/gStalfosRightForearmVtx.inc.c"
};

Vtx gStalfosRightFootVtx[] = {
#include "assets/objects/object_sk2/gStalfosRightFootVtx.inc.c"
};

Vtx gStalfosRightShoulderArmorVtx[] = {
#include "assets/objects/object_sk2/gStalfosRightShoulderArmorVtx.inc.c"
};

Vtx gStalfosLeftUpperArmVtx[] = {
#include "assets/objects/object_sk2/gStalfosLeftUpperArmVtx.inc.c"
};

Vtx gStalfosLeftShoulderArmorVtx[] = {
#include "assets/objects/object_sk2/gStalfosLeftShoulderArmorVtx.inc.c"
};

Vtx gStalfosLeftFootVtx[] = {
#include "assets/objects/object_sk2/gStalfosLeftFootVtx.inc.c"
};

Vtx gStalfosLeftForearmVtx[] = {
#include "assets/objects/object_sk2/gStalfosLeftForearmVtx.inc.c"
};

Vtx gStalfosLeftLowerLegVtx[] = {
#include "assets/objects/object_sk2/gStalfosLeftLowerLegVtx.inc.c"
};

Vtx gStalfosLeftThighVtx[] = {
#include "assets/objects/object_sk2/gStalfosLeftThighVtx.inc.c"
};

Vtx gStalfosLeftHandVtx[] = {
#include "assets/objects/object_sk2/gStalfosLeftHandVtx.inc.c"
};

Vtx gStalfosSwordVtx[] = {
#include "assets/objects/object_sk2/gStalfosSwordVtx.inc.c"
};

Gfx gStalfosSkullDL[106] = {
#include "assets/objects/object_sk2/gStalfosSkullDL.inc.c"
};

Gfx gStalfosUpperCoreDL[19] = {
#include "assets/objects/object_sk2/gStalfosUpperCoreDL.inc.c"
};

Gfx gStalfosRightUpperArmDL[27] = {
#include "assets/objects/object_sk2/gStalfosRightUpperArmDL.inc.c"
};

Gfx gStalfosLowerCoreDL[28] = {
#include "assets/objects/object_sk2/gStalfosLowerCoreDL.inc.c"
};

Gfx gStalfosRightThighDL[21] = {
#include "assets/objects/object_sk2/gStalfosRightThighDL.inc.c"
};

Gfx gStalfosRightHandDL[24] = {
#include "assets/objects/object_sk2/gStalfosRightHandDL.inc.c"
};

Gfx gStalfosChestDL[23] = {
#include "assets/objects/object_sk2/gStalfosChestDL.inc.c"
};

Gfx gStalfosJawDL[29] = {
#include "assets/objects/object_sk2/gStalfosJawDL.inc.c"
};

Gfx gStalfosUpperNeckDL[18] = {
#include "assets/objects/object_sk2/gStalfosUpperNeckDL.inc.c"
};

Gfx gStalfosLowerNeckDL[19] = {
#include "assets/objects/object_sk2/gStalfosLowerNeckDL.inc.c"
};

Gfx gStalfosShieldDL[32] = {
#include "assets/objects/object_sk2/gStalfosShieldDL.inc.c"
};

Gfx gStalfosWaistDL[33] = {
#include "assets/objects/object_sk2/gStalfosWaistDL.inc.c"
};

Gfx gStalfosRightLowerLegDL[45] = {
#include "assets/objects/object_sk2/gStalfosRightLowerLegDL.inc.c"
};

Gfx gStalfosRightForearmDL[31] = {
#include "assets/objects/object_sk2/gStalfosRightForearmDL.inc.c"
};

Gfx gStalfosRightFootDL[32] = {
#include "assets/objects/object_sk2/gStalfosRightFootDL.inc.c"
};

Gfx gStalfosRightShoulderArmorDL[26] = {
#include "assets/objects/object_sk2/gStalfosRightShoulderArmorDL.inc.c"
};

Gfx gStalfosLeftUpperArmDL[27] = {
#include "assets/objects/object_sk2/gStalfosLeftUpperArmDL.inc.c"
};

Gfx gStalfosLeftShoulderArmorDL[26] = {
#include "assets/objects/object_sk2/gStalfosLeftShoulderArmorDL.inc.c"
};

Gfx gStalfosLeftFootDL[32] = {
#include "assets/objects/object_sk2/gStalfosLeftFootDL.inc.c"
};

Gfx gStalfosLeftForearmDL[31] = {
#include "assets/objects/object_sk2/gStalfosLeftForearmDL.inc.c"
};

Gfx gStalfosLeftLowerLegDL[45] = {
#include "assets/objects/object_sk2/gStalfosLeftLowerLegDL.inc.c"
};

Gfx gStalfosLeftThighDL[21] = {
#include "assets/objects/object_sk2/gStalfosLeftThighDL.inc.c"
};

Gfx gStalfosLeftHandDL[24] = {
#include "assets/objects/object_sk2/gStalfosLeftHandDL.inc.c"
};

Gfx gStalfosSwordDL[44] = {
#include "assets/objects/object_sk2/gStalfosSwordDL.inc.c"
};

u64 gStalfosEyeSocketTex[TEX_LEN(u64, gStalfosEyeSocketTex_WIDTH, gStalfosEyeSocketTex_HEIGHT, 16)] = {
#include "assets/objects/object_sk2/gStalfosEyeSocketTex.rgba16.inc.c"
};

u64 gStalfosEyeTex[TEX_LEN(u64, gStalfosEyeTex_WIDTH, gStalfosEyeTex_HEIGHT, 16)] = {
#include "assets/objects/object_sk2/gStalfosEyeTex.rgba16.inc.c"
};

u64 gStalfosBoneGradientTex[TEX_LEN(u64, gStalfosBoneGradientTex_WIDTH, gStalfosBoneGradientTex_HEIGHT, 16)] = {
#include "assets/objects/object_sk2/gStalfosBoneGradientTex.rgba16.inc.c"
};

u64 gStalfosNostrilTex[TEX_LEN(u64, gStalfosNostrilTex_WIDTH, gStalfosNostrilTex_HEIGHT, 16)] = {
#include "assets/objects/object_sk2/gStalfosNostrilTex.rgba16.inc.c"
};

u64 gStalfosBoneDetailTex[TEX_LEN(u64, gStalfosBoneDetailTex_WIDTH, gStalfosBoneDetailTex_HEIGHT, 16)] = {
#include "assets/objects/object_sk2/gStalfosBoneDetailTex.rgba16.inc.c"
};

u64 gStalfosRibTex[TEX_LEN(u64, gStalfosRibTex_WIDTH, gStalfosRibTex_HEIGHT, 16)] = {
#include "assets/objects/object_sk2/gStalfosRibTex.rgba16.inc.c"
};

u64 gStalfosTrousersSideTex[TEX_LEN(u64, gStalfosTrousersSideTex_WIDTH, gStalfosTrousersSideTex_HEIGHT, 16)] = {
#include "assets/objects/object_sk2/gStalfosTrousersSideTex.rgba16.inc.c"
};

u64 gStalfosShieldTex[TEX_LEN(u64, gStalfosShieldTex_WIDTH, gStalfosShieldTex_HEIGHT, 16)] = {
#include "assets/objects/object_sk2/gStalfosShieldTex.rgba16.inc.c"
};

u64 gStalfosLimbArmorTex[TEX_LEN(u64, gStalfosLimbArmorTex_WIDTH, gStalfosLimbArmorTex_HEIGHT, 16)] = {
#include "assets/objects/object_sk2/gStalfosLimbArmorTex.rgba16.inc.c"
};

u64 gStalfosArmorBackTex[TEX_LEN(u64, gStalfosArmorBackTex_WIDTH, gStalfosArmorBackTex_HEIGHT, 16)] = {
#include "assets/objects/object_sk2/gStalfosArmorBackTex.rgba16.inc.c"
};

u64 gStalfosSwordBladeTex[TEX_LEN(u64, gStalfosSwordBladeTex_WIDTH, gStalfosSwordBladeTex_HEIGHT, 16)] = {
#include "assets/objects/object_sk2/gStalfosSwordBladeTex.rgba16.inc.c"
};

u64 gStalfosTrousersTopTex[TEX_LEN(u64, gStalfosTrousersTopTex_WIDTH, gStalfosTrousersTopTex_HEIGHT, 16)] = {
#include "assets/objects/object_sk2/gStalfosTrousersTopTex.rgba16.inc.c"
};

























































































































s16 gStalfosSlowAdvanceFrameData[] = {
#include "assets/objects/object_sk2/gStalfosSlowAdvanceFrameData.inc.c"
};

JointIndex gStalfosSlowAdvanceJointIndices[] = {
#include "assets/objects/object_sk2/gStalfosSlowAdvanceJointIndices.inc.c"
};

AnimationHeader gStalfosSlowAdvanceAnim = {
#include "assets/objects/object_sk2/gStalfosSlowAdvanceAnim.inc.c"
};

u8 object_sk2_zeros_0081C4[12] = { 0 };

s16 gStalfosFlinchFromHitFrontFrameData[] = {
#include "assets/objects/object_sk2/gStalfosFlinchFromHitFrontFrameData.inc.c"
};

JointIndex gStalfosFlinchFromHitFrontJointIndices[] = {
#include "assets/objects/object_sk2/gStalfosFlinchFromHitFrontJointIndices.inc.c"
};

AnimationHeader gStalfosFlinchFromHitFrontAnim = {
#include "assets/objects/object_sk2/gStalfosFlinchFromHitFrontAnim.inc.c"
};

u8 object_sk2_zeros_008614[12] = { 0 };

s16 gStalfosFallOverForwardsFrameData[] = {
#include "assets/objects/object_sk2/gStalfosFallOverForwardsFrameData.inc.c"
};

JointIndex gStalfosFallOverForwardsJointIndices[] = {
#include "assets/objects/object_sk2/gStalfosFallOverForwardsJointIndices.inc.c"
};

AnimationHeader gStalfosFallOverForwardsAnim = {
#include "assets/objects/object_sk2/gStalfosFallOverForwardsAnim.inc.c"
};

s16 gStalfosLeapFrameData[] = {
#include "assets/objects/object_sk2/gStalfosLeapFrameData.inc.c"
};

JointIndex gStalfosLeapJointIndices[] = {
#include "assets/objects/object_sk2/gStalfosLeapJointIndices.inc.c"
};

AnimationHeader gStalfosLeapAnim = {
#include "assets/objects/object_sk2/gStalfosLeapAnim.inc.c"
};

s16 gStalfosJumpFrameData[] = {
#include "assets/objects/object_sk2/gStalfosJumpFrameData.inc.c"
};

JointIndex gStalfosJumpJointIndices[] = {
#include "assets/objects/object_sk2/gStalfosJumpJointIndices.inc.c"
};

AnimationHeader gStalfosJumpAnim = {
#include "assets/objects/object_sk2/gStalfosJumpAnim.inc.c"
};

u8 object_sk2_zeros_00A334[12] = { 0 };

s16 gStalfosJumpslashFrameData[] = {
#include "assets/objects/object_sk2/gStalfosJumpslashFrameData.inc.c"
};

JointIndex gStalfosJumpslashJointIndices[] = {
#include "assets/objects/object_sk2/gStalfosJumpslashJointIndices.inc.c"
};

AnimationHeader gStalfosJumpslashAnim = {
#include "assets/objects/object_sk2/gStalfosJumpslashAnim.inc.c"
};

u8 object_sk2_zeros_00A9AC[4] = { 0 };

s16 gStalfosDownSlashFrameData[] = {
#include "assets/objects/object_sk2/gStalfosDownSlashFrameData.inc.c"
};

JointIndex gStalfosDownSlashJointIndices[] = {
#include "assets/objects/object_sk2/gStalfosDownSlashJointIndices.inc.c"
};

AnimationHeader gStalfosDownSlashAnim = {
#include "assets/objects/object_sk2/gStalfosDownSlashAnim.inc.c"
};

u8 object_sk2_zeros_00B01C[4] = { 0 };

s16 gStalfosRecoverFromDownSlashFrameData[] = {
#include "assets/objects/object_sk2/gStalfosRecoverFromDownSlashFrameData.inc.c"
};

JointIndex gStalfosRecoverFromDownSlashJointIndices[] = {
#include "assets/objects/object_sk2/gStalfosRecoverFromDownSlashJointIndices.inc.c"
};

AnimationHeader gStalfosRecoverFromDownSlashAnim = {
#include "assets/objects/object_sk2/gStalfosRecoverFromDownSlashAnim.inc.c"
};

u8 object_sk2_zeros_00B4F4[12] = { 0 };

s16 gStalfosUpSlashFrameData[] = {
#include "assets/objects/object_sk2/gStalfosUpSlashFrameData.inc.c"
};

JointIndex gStalfosUpSlashJointIndices[] = {
#include "assets/objects/object_sk2/gStalfosUpSlashJointIndices.inc.c"
};

AnimationHeader gStalfosUpSlashAnim = {
#include "assets/objects/object_sk2/gStalfosUpSlashAnim.inc.c"
};

u8 object_sk2_zeros_00BE5C[4] = { 0 };

s16 gStalfosLandFromLeapFrameData[] = {
#include "assets/objects/object_sk2/gStalfosLandFromLeapFrameData.inc.c"
};

JointIndex gStalfosLandFromLeapJointIndices[] = {
#include "assets/objects/object_sk2/gStalfosLandFromLeapJointIndices.inc.c"
};

AnimationHeader gStalfosLandFromLeapAnim = {
#include "assets/objects/object_sk2/gStalfosLandFromLeapAnim.inc.c"
};

u8 object_sk2_zeros_00C448[8] = { 0 };

s16 gStalfosLaughFrameData[] = {
#include "assets/objects/object_sk2/gStalfosLaughFrameData.inc.c"
};

JointIndex gStalfosLaughJointIndices[] = {
#include "assets/objects/object_sk2/gStalfosLaughJointIndices.inc.c"
};

AnimationHeader gStalfosLaughAnim = {
#include "assets/objects/object_sk2/gStalfosLaughAnim.inc.c"
};

s16 gStalfosLookAroundFrameData[] = {
#include "assets/objects/object_sk2/gStalfosLookAroundFrameData.inc.c"
};

JointIndex gStalfosLookAroundJointIndices[] = {
#include "assets/objects/object_sk2/gStalfosLookAroundJointIndices.inc.c"
};

AnimationHeader gStalfosLookAroundAnim = {
#include "assets/objects/object_sk2/gStalfosLookAroundAnim.inc.c"
};

s16 gStalfosSidestepFrameData[] = {
#include "assets/objects/object_sk2/gStalfosSidestepFrameData.inc.c"
};

JointIndex gStalfosSidestepJointIndices[] = {
#include "assets/objects/object_sk2/gStalfosSidestepJointIndices.inc.c"
};

AnimationHeader gStalfosSidestepAnim = {
#include "assets/objects/object_sk2/gStalfosSidestepAnim.inc.c"
};

s16 gStalfosReleaseAttentionFrameData[] = {
#include "assets/objects/object_sk2/gStalfosReleaseAttentionFrameData.inc.c"
};

JointIndex gStalfosReleaseAttentionJointIndices[] = {
#include "assets/objects/object_sk2/gStalfosReleaseAttentionJointIndices.inc.c"
};

AnimationHeader gStalfosReleaseAttentionAnim = {
#include "assets/objects/object_sk2/gStalfosReleaseAttentionAnim.inc.c"
};

u8 object_sk2_zeros_00E7F4[12] = { 0 };


#include "gStalfosSkel.c"
