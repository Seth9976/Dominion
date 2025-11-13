// 函数: _Z18CalcThingsToTurnOn14TGGEntitlementP13ThingToTurnOni
// 地址: 0x9ed48c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x0 = EntitlementLookup(arg1)
uint64_t x19 = zx.q(x0[2])

if (x19.d u> 5)
    pthread_kill(pthread_self(), 6)
    DomSetupConfig* x0_5
    int64_t x1_1
    int64_t x2_1
    x0_5, x1_1, x2_1 = XNoReturn()
    return FindOrAddExpSetup(x0_5, x1_1, x2_1) __tailcall

switch (x19)
    case 1, 5
        int64_t i = 0
        x19 = 0
        
        do
            uint64_t x0_1 = zx.q(*(&x0[3] + i))
            
            if (x0_1.d == 0)
                break
            
            i += 4
            x19 = zx.q(CalcThingsToTurnOn(x0_1, arg2 + (sx.q(x19.d) << 3), arg3 - x19.d) + x19.d)
        while (i != 0x100)
    case 2
        x19 = 1
        *arg2 = 1
        *(arg2 + 4) = x0[3]
    case 3
        *arg2 = 3
        *(arg2 + 4) = x0[3]
        x19 = 1
    case 4
        *arg2 = 2
        x19 = 1
        uint64_t x8_4 = zx.q(*x0 - 0x2101)
        
        if (x8_4.d u<= 8)
            switch (x8_4)
                case 0
                    x19 = 1
                    *(arg2 + 4) = 1
                case 1
                    *(arg2 + 4) = 2
                    x19 = 1
                case 2
                    *(arg2 + 4) = 4
                    x19 = 1
                case 8
                    *(arg2 + 4) = 8
                    x19 = 1

return zx.q(x19.d)
