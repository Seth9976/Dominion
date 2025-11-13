// 函数: _Z11CapsuleDraw4Vec2fS_fRK10ColorRgbaIS2_P6XAsset
// 地址: 0xc1d528
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

ColorRgbaI* x20 = arg1
float var_28 = arg2
float var_24 = arg4
float entry_v3
float var_68 = entry_v3
int128_t entry_v4
int32_t var_64 = entry_v4.d

if (*(GetLocalSettings() + 0x3c) != 4 && *(GetLocalSettings() + 0x3c) != 5)
    void* x0_3
    Vec2* x2
    x0_3, x2 = GetLocalSettings()
    int32_t x22_1 = *(x0_3 + 0x3c)
    int64_t result
    XAsset* x2_1
    int128_t entry_v2
    result, x2_1 = Line2Draw(&var_28, &var_68, x2, x20, arg5, nullptr, entry_v2.d f+ entry_v2.d)
    
    if (x22_1 == 3)
        return result
    
    XAsset* x2_2 = CircleDraw(zx.q(*x20), arg5, x2_1, arg2)
    return CircleDraw(zx.q(*arg3), arg5, x2_2, entry_v3) __tailcall

float var_78 = arg2
int32_t var_74_1 = arg4.d
float var_70_1 = entry_v3
int32_t var_6c_1 = entry_v4.d
return DrawRectSolid(&var_78, x20)
