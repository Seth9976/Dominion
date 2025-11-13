// 函数: _Z21RTreeDrawIntersectRecRK9RTreeNodeRK13FrustumPlanes
// 地址: 0xfa50f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x20) == 0)
    ColorRgba* x2
    
    if ((FrustumIntersectBox(arg2, arg1) & 1) == 0)
        x2 = gRgbaCyan
    else
        x2 = gRgbaYellow
    
    return Draw3DBBox(arg1, TI, x2) __tailcall

RTreeDrawIntersectRec(*(arg1 + 0x20), arg2)
RTreeDrawIntersectRec(*(arg1 + 0x28), arg2)
int32_t x0_3
int128_t v0
x0_3, v0 = FrustumIntersectBox(arg2, arg1)

if ((x0_3 & 1) == 0)
    v0 = data_71c400
else
    v0 = data_71c410

int128_t var_30 = v0
return Draw3DBBox(arg1, TI, &var_30)
