// 函数: _Z16TryForceFateDrawR7DomGame11DomCardEnumS1_R6CardID
// 地址: 0xbead30
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg3 != 0)
    int32_t x22_1 = arg2
    
    if (arg2 != 0xd30 && x22_1 != 0xd3d)
        void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
        *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_4 = *(x8_3 - 0x90)
        *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
    
    int32_t i
    
    if (arg2 == 0xd30 || x22_1 == 0xd3d || x22_1 != 0)
        int64_t x8_5 = 0
        int64_t x9_3 = -0x3e100000000
        void* __offset(DomGame, 0x15a0) x10_1 = arg1 + 0x15a0
        
        while (true)
            if (*(x10_1 - 4) != x22_1 && *x10_1 != x22_1)
                x8_5 -= 1
                x9_3 += 0x100000000
                x10_1 += 0x10
                
                if (x8_5 != -0x41)
                    continue
                
                x22_1 = 0
                break
            
            x22_1 = 7 - x8_5.d
            
            if (x22_1 u> 0x48)
                i = *(arg1 + (x9_3 s>> 0x1e) + 0x12538)
                
                if (i == 0)
                    goto label_beaf40
                
                goto label_beaf3c
            
            if (x8_5.d == 0xffffffbf)
                void* x0_3 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_8 = x0_3 + sx.q(*(x0_3 + 0x13000)) * 0x98
                *(*(x8_8 - 0x90) + 0x1a28) = 0xffffffff
                void* x8_9 = *(x8_8 - 0x90)
                *(x8_9 + 0x1a2c) = *(x8_9 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                XTrace("game thread resume (error)")
                x22_1 = 0x48
            
            goto label_beae88
    
label_beae88:
    i = *(arg1 + (zx.q(x22_1) << 4) + 0x1534)
    
    if (i != 0)
    label_beaf3c:
        
        do
            int32_t x19_2 = i & 0xffff
            
            if (x19_2 u>= 0x320)
                void* x0_5 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_16 = x0_5 + sx.q(*(x0_5 + 0x13000)) * 0x98
                *(*(x8_16 - 0x90) + 0x1a28) = 0xffffffff
                void* x8_17 = *(x8_16 - 0x90)
                *(x8_17 + 0x1a2c) = *(x8_17 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                XTrace("game thread resume (error)")
            
            if (*(arg1 + mulu.dp.d(x19_2, 0x68) + 0x1a70) == arg3)
                CardRemove(arg1, zx.q(i), nullptr)
                CardAddHead(arg1, zx.q(i), zx.q(x22_1), 0xffffffff)
                *arg4 = i
                return 1
            
            i = *(arg1 + zx.q(x19_2) * 0x68 + 0x1ac8)
        while (i != 0)

label_beaf40:
return 0
