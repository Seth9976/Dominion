// 函数: _Z10IsNearEdgeRK4Vec3
// 地址: 0xc1637c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v0 = *arg1

if (v0 < float.s(0x3ccccccd) || v0 > float.s(0x3ffccccd))
    return 1

v0 = *(arg1 + 4)

if (v0 >= float.s(0x3ccccccd))
    return zx.q(v0 > float.s(0x3f79999a) ? 1 : 0)

return 1
