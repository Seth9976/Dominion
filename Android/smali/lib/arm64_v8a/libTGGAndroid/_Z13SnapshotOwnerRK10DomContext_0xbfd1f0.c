// 函数: _Z13SnapshotOwnerRK10DomContext
// 地址: 0xbfd1f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x8 = *(arg1 + 0x80)
int32_t x9 = *x8

if (x9 == 0)
    return zx.q(x8[0xc])

if (x9 == 2)
    return zx.q(x8[4])

if (x9 == 1)
    return zx.q(x8[2])

pthread_kill(pthread_self(), 6)
DomGame* x0_4
int64_t x1
DomContext* x2
int64_t x3
int32_t x4
x0_4, x1, x2, x3, x4 = XNoReturn()
return IsNthCardGained(x0_4, x1, x2, x3, x4) __tailcall
