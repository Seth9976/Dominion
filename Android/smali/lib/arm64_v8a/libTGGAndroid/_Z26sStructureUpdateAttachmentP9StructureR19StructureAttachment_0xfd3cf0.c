// 函数: _Z26sStructureUpdateAttachmentP9StructureR19StructureAttachment
// 地址: 0xfd3cf0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Transform var_30
int64_t result
int128_t v0
result, v0 = StructureGetHardPointPlace(arg1, zx.q(*arg2), &var_30)

if (*(arg2 + 0x10) != 2)
    return XTrace("Unknown attachment type")

void* x8_4 = ***gpGameData + zx.q(*(arg2 + 0x14)) * 0x98
int32_t var_14
*(x8_4 + 0x18) = var_14
int64_t var_1c
*(x8_4 + 0x10) = var_1c
int128_t var_2c
*(x8_4 + 0x1c) = var_2c
return result
