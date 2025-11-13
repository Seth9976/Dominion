// 函数: _Z14SetPropertyRecRK3UI29UI2Attribb7Recurse
// 地址: 0x1035024
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x1688) != *(gUI2Editor + 0x6008))
    return 

int32_t x22_1 = arg4
uint32_t x21_1 = arg2

if (arg4 != 1)
    AttribMap* x0_1 = GetEdittedMap(arg1, zx.q(x21_1))
    AttribMapSetBool(*gUI2AttribTable, x0_1, x21_1, arg3 & 1)
    UI2 const& i = arg1
    
    do
        *(i + 0x1378) = 2
        i = *(i + 0x17d0)
    while (i != 0)
    
    UI2 const& i_1 = arg1
    
    do
        *(i_1 + 0x1370) = 0
        *(i_1 + 0x1710) = 0x3f800000
        i_1 = *(i_1 + 0x17d0)
    while (i_1 != 0)

if (arg4 != 1 && x22_1 == 0)
    return 

int32_t x23_1 = *(arg1 + 0x1970)

if (x23_1 == 0)
    return 

uint64_t x24_1 = 0
bool cond:0_1

do
    SetPropertyRec(*gUI2 + zx.q(*(arg1 + (x24_1 << 0x20 s>> 0x1e) + 0x1870)) * 0x19a8, zx.q(x21_1), 
        arg3 & 1, zx.q((x22_1 == 2 ? 1 : 0) << 1))
    cond:0_1 = x23_1 != x24_1.d + 1
    x24_1 = zx.q(x24_1.d + 1)
while (cond:0_1)
