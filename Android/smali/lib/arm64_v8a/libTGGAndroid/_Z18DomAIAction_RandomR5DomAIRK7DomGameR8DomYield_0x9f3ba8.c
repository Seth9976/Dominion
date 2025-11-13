// 函数: _Z18DomAIAction_RandomR5DomAIRK7DomGameR8DomYield
// 地址: 0x9f3ba8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg3 + 4)

if (x8 == 1)
    uint64_t x22_1 = zx.q(*(arg3 + 0x74))
    uint64_t x24_1 = zx.q(*(arg3 + 0x64))
    int32_t var_cd0[0x320]
    
    if (x22_1.d s>= 1)
        memcpy(&var_cd0, arg3 + 0x78, x22_1 << 2)
    
    int64_t x25_1 = sx.q(x24_1.d)
    
    if (x24_1.d s>= 1)
        int64_t x21_1 = 0
        
        do
            int64_t x9_2 = zx.q(RandomIntRange(gRNG, x21_1.d, x22_1.d - 1)) << 0x20 s>> 0x1e
            int32_t x11_1 = var_cd0[x21_1]
            x21_1 += 1
            var_cd0[x21_1] = *(&var_cd0 + x9_2)
            *(&var_cd0 + x9_2) = x11_1
        while (x24_1 != x21_1)
        
        x24_1 = zx.q(*(arg3 + 0x64))
    
    memcpy(arg3 + 0x78, &var_cd0, x25_1 << 2)
    *(arg3 + 0x74) = x24_1.d
else
    if (x8 != 3)
        pthread_kill(pthread_self(), 6)
        return SimGame(XNoReturn()) __tailcall
    
    uint64_t x9_1 = zx.q(*(arg3 + 0x74))
    
    if (x9_1.d s>= 1)
        int32_t x8_1 = *(arg3 + 0xcf8)
        int64_t i_4
        
        if (x9_1.d u>= 8)
            i_4 = x9_1 & 0xfffffff8
            int128_t v0
            v0.d = x8_1
            v0:4.d = x8_1
            v0:8.d = x8_1
            v0:0xc.d = x8_1
            void* __offset(DomYield, 0xd18) x11_2 = arg3 + 0xd18
            int64_t i_3 = i_4
            int64_t i
            
            do
                *(x11_2 - 0x10) = v0
                *x11_2 = v0
                i = i_3
                i_3 -= 8
                x11_2 += 0x20
            while (i != 8)
            
            if (i_4 != x9_1)
                goto label_9f3cb8
        else
            i_4 = 0
        label_9f3cb8:
            void* x11_4 = arg3 + (i_4 << 2) + 0xd08
            int64_t i_2 = x9_1 - i_4
            int64_t i_1
            
            do
                i_1 = i_2
                i_2 -= 1
                *x11_4 = x8_1
                x11_4 += 4
            while (i_1 != 1)
