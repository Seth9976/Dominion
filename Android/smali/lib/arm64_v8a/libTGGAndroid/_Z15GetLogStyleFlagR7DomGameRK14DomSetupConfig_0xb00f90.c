// 函数: _Z15GetLogStyleFlagR7DomGameRK14DomSetupConfig
// 地址: 0xb00f90
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (zx.d(*(arg1 + 0x1a0c)) != 0)
    return 0

uint64_t x8_1 = zx.q(*(arg2 + 0x16f8))

if (x8_1.d u<= 4)
    switch (x8_1)
        case 0, 3
            return 1
        case 1, 2
            return 0
        case 4
            int32_t x8_2 = *(arg2 + 0x1704)
            
            if (x8_2 == 0)
                return 1
            
            if (x8_2 == 1)
                return 0

pthread_kill(pthread_self(), 6)
XNoReturn()
return DeckHasShadows() __tailcall
