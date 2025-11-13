// 函数: _Z16TryAddLandscapesP14LandscapeSetupRiRK5Vec2I11DomCardEnum11DomCardType
// 地址: 0xb2d120
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*arg3 s< 1)
    return 

int32_t i = 0

do
    int64_t x8_1 = sx.q(*arg2)
    
    if (x8_1.d s> 3)
        break
    
    int32_t* x8_2 = arg1 + x8_1 * 0x48
    *arg2 = x8_1.d + 1
    *(x8_2 + 8) = arg5
    *x8_2 = 3
    x8_2[1] = arg4
    ClearReferenceCards(&x8_2[4])
    i += 1
while (i s< *arg3)
