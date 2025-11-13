// 函数: _Z18CalcZoomMouseoverTR6DomGfxf
// 地址: 0xb09df4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v1

if (*(gDomClient + 0x207a4) == 2 && *(arg1 + 0x2c) == 0 && *(arg1 + 0xa4) == 0x3e9
        && *(gDomClient + 0x20758) != 0x2b)
    v1.d = fconvert.s(1f)

if ((*(gDomClient + 0x207a4) == 2 && *(arg1 + 0x2c) == 0 && *(arg1 + 0xa4) == 0x3e9
        && *(gDomClient + 0x20758) != 0x2b && *(arg1 + 0x98) == *(gDomClient + 0x207a8))
        || *(arg1 + 0x21d0) != *(gDomClient + 0x1d01c))
    return 

v1.d = 0f

if (*(arg1 + 0x1f78) == 0)
    return 

int32_t v2 = *(arg1 + 0x1f84)

if (v2 f<= 0f || v2 f>= fconvert.s(1f))
    return 

v1.d = 0f
v1.d = v1.d f- arg2
v1.d = v1.d f* v2
v1.d = v1.d f+ arg2
