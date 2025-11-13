// 函数: _Z35StructureSetActiveMaterialVariation11StructureID23MATERIAL_VARIATION_TYPEb
// 地址: 0xfd2864
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x8_4 = ***gpGameData + mulu.dp.d(arg1.d & 0xffff, 0x98) + 0x84
int32_t x9_1 = *x8_4
int32_t x10 = 1 << arg2

if (((((x9_1 & x10) == 0 ? 1 : 0) ^ arg3.d) & 1) != 0)
    return 

int32_t x9_3

if ((arg3.d & 1) != 0)
    x9_3 = x9_1 | x10
else
    x9_3 = x9_1 & not.d(x10)

*x8_4 = x9_3
return StructureUnbindMaterial(arg1) __tailcall
