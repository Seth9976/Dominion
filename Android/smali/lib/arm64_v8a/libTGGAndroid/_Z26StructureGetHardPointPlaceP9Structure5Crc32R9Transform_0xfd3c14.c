// 函数: _Z26StructureGetHardPointPlaceP9Structure5Crc32R9Transform
// 地址: 0xfd3c14
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0

if (*gHardPointBottom != arg2.d)
    double v1_2
    int128_t v1
    int128_t v3
    int128_t v4
    
    if (*gHardPointCenter != arg2.d)
        if (*gHardPointTop != arg2.d)
            return StructureGetRealHardPointPlace(arg1, arg2, arg3) __tailcall
        
        v0.d = *(arg1 + 0x68)
        v3.q = *(arg1 + 0x10)
        v4.d = *(arg1 + 0x18)
        v1.q = *VY
        v1.d = v1.d f* v0.d
        v1:4.d = v1:4.d f* v0.d
        v0.d = v0.d f* *(VY + 8)
        v1_2 = vadd_f32(v1, v3)
        v0.d = v0.d f+ v4.d
    else
        v0.d = *(arg1 + 0x68)
        v4.q = *(arg1 + 0x10)
        v3.d = 0x3f000000
        v3:4.d = 0x3f000000
        v1.q = *VY
        v1.d = v1.d f* v0.d
        v1:4.d = v1:4.d f* v0.d
        v0.d = v0.d f* *(VY + 8)
        int32_t v2 = *(arg1 + 0x18)
        int128_t v1_1 = vmul_f32(v1, v3, 0)
        v3.d = fconvert.s(0.5f)
        v0.d = v0.d f* v3.d
        v1_2 = vadd_f32(v1_1, v4)
        v0.d = v0.d f+ v2
    *(arg3 + 0x14) = v1_2
    *(arg3 + 0x1c) = v0.d
else
    int64_t x9_1 = *(arg1 + 0x10)
    *(arg3 + 0x1c) = *(arg1 + 0x18)
    *(arg3 + 0x14) = x9_1

v0 = *(arg1 + 0x1c)
*arg3 = 0x3f800000
*(arg3 + 4) = v0
