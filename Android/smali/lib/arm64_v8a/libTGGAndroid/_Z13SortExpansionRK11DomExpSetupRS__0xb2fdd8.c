// 函数: _Z13SortExpansionRK11DomExpSetupRS_
// 地址: 0xb2fdd8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *arg1
int32_t x9 = *arg2

if (x8 == x9)
    pthread_kill(pthread_self(), 6)
    GameProfile* x0_3
    int64_t x1
    x0_3, x1 = XNoReturn()
    return GetToggledExpansionFlag(x0_3, x1) __tailcall

if (x9 != 0x13)
    return zx.q(x8 != 0x13 ? 1 : 0) & zx.q(x8 s< x9 ? 1 : 0)

return 1
