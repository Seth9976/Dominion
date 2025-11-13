// 函数: _Z17GetScoreStyleFlagRK14DomSetupConfig
// 地址: 0xb00f24
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = zx.q(*(arg1 + 0x16f8))

if (x9.d u> 4)
    pthread_kill(pthread_self(), 6)
    DomGame* x0_5
    DomSetupConfig* x1
    x0_5, x1 = XNoReturn()
    return GetLogStyleFlag(x0_5, x1) __tailcall

switch (x9)
    case 0
        return 1
    case 1, 2
        return 2
    case 3
        return 0
    case 4
        return zx.q(*(arg1 + 0x1708))
