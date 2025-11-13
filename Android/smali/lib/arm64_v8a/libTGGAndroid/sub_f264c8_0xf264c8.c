// 函数: sub_f264c8
// 地址: 0xf264c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x10_2 = zx.d(arg2[2])
uint32_t x8 = zx.d(*arg2)
uint32_t x9 = zx.d(arg2[1])
uint32_t x11 = zx.d(arg2[3])
uint32_t x12 = zx.d(arg2[4])
int128_t v3
v3.d = float.s(x8 u>> 3)
v3:1.b = (0xffffffe3 & x9 u>> 6) | (7 & x8) << 2
v3:2.b = x9 u>> 1 & 0x1f
v3:3.b = (0xffffffef & x10_2 u>> 4) | (1 & x9) << 4
v3:4.b = (0xffffffe1 & x11 u>> 7) | (0xf & x10_2) << 1
v3:5.b = x11 u>> 2 & 0x1f
v3:6.b = (0xffffffe7 & x12 u>> 5) | (3 & x11) << 3
int128_t v0
v0.b = 0xe6
v0:1.b = 0xe6
v0:2.b = 0xe6
v0:3.b = 0xe6
v0:4.b = 0xe6
v0:5.b = 0xe6
v0:6.b = 0xe6
v0:7.b = 0xe6
v3:7.b = x12 & 0x1f
int128_t v1
v1.b = 0x41
v1:1.b = 0x41
v1:2.b = 0x41
v1:3.b = 0x41
v1:4.b = 0x41
v1:5.b = 0x41
v1:6.b = 0x41
v1:7.b = 0x41
int128_t v2
v2.b = 0x18
v2:1.b = 0x18
v2:2.b = 0x18
v2:3.b = 0x18
v2:4.b = 0x18
v2:5.b = 0x18
v2:6.b = 0x18
v2:7.b = 0x18
int128_t v0_1
v0_1.b = (v3 + v0).b s>> 7
v0_1:1.b s>>= 7
v0_1:2.b s>>= 7
v0_1:3.b s>>= 7
v0_1:4.b s>>= 7
v0_1:5.b s>>= 7
v0_1:6.b s>>= 7
v0_1:7.b s>>= 7
uint64_t result = vbsl_s8(v0_1, v3 + v1, v3 + v2)
*arg1 = result
return result
