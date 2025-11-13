// 函数: _Z14UI2ModelUpdateR3UI2f
// 地址: 0x1023cd0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XAsset* x21 = *(arg1 + 0x14a8)

if (x21 == 0)
    return 

XAsset* x22_1 = *(arg1 + 0x14a0)
Structure* x0_1 = StructureTryToGet(zx.q(*(arg1 + 0x13ec)))
Structure* x20_1 = x0_1

if (x0_1 == 0)
    Structure* x0_3 = StructureCreate(x22_1)
    x20_1 = x0_3
    AnimationPlay(x0_3, x21, 0, 0, 0, 0f, fconvert.s(0.5f))

StructureUpdate(x20_1)
UI2& i = arg1

do
    *(i + 0x1378) = 2
    i = *(i + 0x17d0)
while (i != 0)

*(arg1 + 0x13ec) = StructureGetID(x20_1).d
