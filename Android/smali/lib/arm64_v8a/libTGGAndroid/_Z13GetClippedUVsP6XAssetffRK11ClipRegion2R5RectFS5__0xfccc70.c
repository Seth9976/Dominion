// 函数: _Z13GetClippedUVsP6XAssetffRK11ClipRegion2R5RectFS5_
// 地址: 0xfccc70
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float*** x8 = *arg1
float v8 = arg3
float v9 = arg2

if (x8 == 0)
    if (*(arg1 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(arg1, false, true)
    x8 = *arg1

float* x8_3 = **x8
arg3 = *x8_3
float v2 = x8_3[1]
float v4 = x8_3[2]
float v3 = x8_3[3]
*arg6 = (data_71ae80).d.o
*arg5 = v9
*(arg5 + 4) = v8
arg2 = float.s(arg3)
arg3 = float.s(v2)
v2 = v3 * v4
arg2 = v2 * arg2
v2 = v2 * arg3
arg3 = arg2 + v9
arg2 = v2 + v8
*(arg5 + 8) = arg3
*(arg5 + 0xc) = arg2
int32_t x8_4 = *(arg4 + 0x10)

if ((x8_4 & 1) != 0)
    v2 = *(arg4 + 8)
    
    if (not(arg3 <= v2))
        *(arg6 + 8) = (v2 - v9) / (arg3 - v9)
        *(arg5 + 8) = *(arg4 + 8)
        x8_4 = *(arg4 + 0x10)

if ((x8_4 & 2) != 0)
    v2 = *arg4
    
    if (not(v2 <= v9))
        *arg6 = (v2 - v9) / (arg3 - v9)
        *arg5 = *arg4
        x8_4 = *(arg4 + 0x10)

if ((x8_4 & 4) != 0)
    arg3 = *(arg4 + 4)
    
    if (not(arg3 <= v8))
        *(arg6 + 4) = (arg3 - v8) / (arg2 - v8)
        *(arg5 + 4) = *(arg4 + 4)
        x8_4 = *(arg4 + 0x10)

if ((x8_4 & 8) != 0)
    arg3 = *(arg4 + 0xc)
    
    if (not(arg2 <= arg3))
        *(arg6 + 0xc) = (arg3 - v8) / (arg2 - v8)
        *(arg5 + 0xc) = *(arg4 + 0xc)

return zx.q(*arg6 < *(arg6 + 8) ? 1 : 0) & zx.q(*(arg6 + 4) < *(arg6 + 0xc) ? 1 : 0)
