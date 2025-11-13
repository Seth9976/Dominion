// 函数: _ZNKSt6__ndk16__loopIcE12__exec_splitEbRNS_7__stateIcEE
// 地址: 0xf173b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* entry_x2
*entry_x2 = 0xfffffc1e

if (zx.d(*(arg1 + 0x34)) == (arg2.d & 1))
    *(entry_x2 + 0x50) = *(arg1 + 0x10)
    return 

int64_t x9_1 = *(entry_x2 + 0x38)
int64_t x10_1 = *(entry_x2 + 0x10)
*(entry_x2 + 0x50) = *(arg1 + 8)
*(x9_1 + (zx.q(*(arg1 + 0x28)) << 4) + 8) = x10_1
int32_t x8_5 = *(arg1 + 0x2c)

if (x8_5 == *(arg1 + 0x30))
    return 

uint64_t i = zx.q(x8_5 - 1)
uint64_t x9_4 = (i + (zx.q(i.d) << 1)) << 3

do
    i += 1
    *(*(entry_x2 + 0x20) + x9_4) = *(entry_x2 + 0x18)
    *(*(entry_x2 + 0x20) + x9_4 + 8) = *(entry_x2 + 0x18)
    *(*(entry_x2 + 0x20) + x9_4 + 0x10) = 0
    x9_4 += 0x18
while (i != zx.q(*(arg1 + 0x30) - 1))
