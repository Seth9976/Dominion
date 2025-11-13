// 函数: _Z17IsNthActionPlayedR7DomGame6CardIDRK10DomContext9PlayerWhoi
// 地址: 0xbfd6c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x8 = *(arg3 + 0x80)
int32_t x9 = *x8

if (x9 == 0)
    if (x8[0xc] != arg4)
        return 0
else if (x9 != 2)
    if (x9 != 1)
        pthread_kill(pthread_self(), 6)
        DomGame* x0_4
        int64_t x1
        int64_t x2
        x0_4, x1, x2 = XNoReturn()
        return IsFirstTreasurePlayed(x0_4, x1, x2) __tailcall
    
    if (x8[2] != arg4)
        return 0
else if (x8[4] != arg4)
    return 0

if ((zx.d(x8[6].b) & 4) != 0)
    return zx.q(x8[8] == arg5 - 1 ? 1 : 0)

return 0
