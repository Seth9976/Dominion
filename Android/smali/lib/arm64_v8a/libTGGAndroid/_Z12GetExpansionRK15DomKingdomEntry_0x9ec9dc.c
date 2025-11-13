// 函数: _Z12GetExpansionRK15DomKingdomEntry
// 地址: 0x9ec9dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*arg1)

if (x8.d u<= 3)
    switch (x8)
        case 1
            int32_t x8_1 = *(arg1 + 4)
            int32_t x8_2
            
            if (x8_1 s< 0)
                x8_2 = x8_1 + 0xff
            else
                x8_2 = x8_1
            
            return zx.q(x8_2 s>> 8)
        case 2
            return zx.q(*(arg1 + 8))

pthread_kill(pthread_self(), 6)
DomSetupConfig* x0_3
ExpansionsBitsetFlags* x1
x0_3, x1 = XNoReturn()
return DomSetupConfigToExpansionBitset(x0_3, x1) __tailcall
