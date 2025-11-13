// 函数: _Z23TriggerAbilityTestValidR7DomGame9PlayerWho9AbilityID6CardID16TriggerEventFlagS1_PK11TriggerInfo
// 地址: 0xbd24e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19_3

if (arg3.d == 0xffffffff)
    x19_3 = 0
else
    int32_t fp_1 = arg5
    int32_t x22_1 = arg2
    int64_t x24_1 = arg3 & 0xffffffff
    int64_t x8_15
    
    if ((arg3 & 0x30) == 0)
        void* x0_16 = AbilityGetRegistered(arg1, x24_1)
        
        if (*(x0_16 + 0x60) != 0)
            if (*(x0_16 + 0x4c) != 2)
                void* x0_18 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_20 = x0_18 + sx.q(*(x0_18 + 0x13000)) * 0x98
                *(*(x8_20 - 0x90) + 0x1a28) = 0xffffffff
                void* x8_21 = *(x8_20 - 0x90)
                *(x8_21 + 0x1a2c) = *(x8_21 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                XTrace("game thread resume (error)")
            
            void* x0_20 = DomPushAbilityContext(arg1, zx.q(x22_1), x24_1)
            int64_t x8_22 = *(x0_16 + 0x38)
            *(x0_20 + 0x5c) = 0xffffffff
            void var_ce0
            *(x0_20 + 0x60) = &var_ce0
            *(x0_20 + 0x68) = x8_22
            *(x0_20 + 0x70) = *(x0_16 + 0x84)
            int32_t x8_24 = *(x0_16 + 0x88)
            *(x0_20 + 0x88) = fp_1
            *(x0_20 + 0x80) = arg7
            *(x0_20 + 0x74) = x8_24
            *(x0_20 + 0x78) = arg6
            x8_15 = *(x0_16 + 0x60)
            goto label_bd277c
        
        x19_3 = 1
    else
        int32_t* x0_1 = AbilityGetStatic(arg1, x24_1)
        int32_t x0_3 = AbilitySource(arg1, x24_1)
        
        if (x0_3 == 0)
        label_bd2638:
            
            if (*x0_1 != 6)
                void* x0_12 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_12 = x0_12 + sx.q(*(x0_12 + 0x13000)) * 0x98
                *(*(x8_12 - 0x90) + 0x1a28) = 0xffffffff
                void* x8_13 = *(x8_12 - 0x90)
                *(x8_13 + 0x1a2c) = *(x8_13 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                XTrace("game thread resume (error)")
            
            if (*(x0_1 + 0xa8) == 0)
                x19_3 = 1
            else
                void* x0_14 = DomPushAbilityContext(arg1, zx.q(x22_1), x24_1)
                *(x0_14 + 0x88) = fp_1
                *(x0_14 + 0x80) = arg7
                x8_15 = *(x0_1 + 0xa8)
            label_bd277c:
                x19_3 = x8_15(zx.q(arg4))
                int32_t* x8_25 = __emutls_get_address(__emutls_v.gContextStack_tl) + 0x13000
                *x8_25 -= 1
        else
            int32_t x27_1 = *(arg1 + 0xd50)
            int32_t x8_5 = (x0_3 + (x27_1 << 0x10)) s% 0x3e5
            int32_t* x9_1 = *(&data_1838a20 + (sx.q(x8_5) << 3))
            
            if (x9_1 != 0)
                while (*x9_1 != x0_3 || x9_1[1] != x27_1)
                    x9_1 = *(x9_1 + 0x10)
                    
                    if (x9_1 == 0)
                        goto label_bd25a0
                
                if ((zx.d(*(*(x9_1 + 8) + 0xcc)) & 0x40) == 0)
                    goto label_bd2638
                
                goto label_bd2628
            
        label_bd25a0:
            DomDefGetSlow(zx.q(x0_3), zx.q(x27_1))
            int32_t* x0_5 = malloc(0x18)
            int64_t x8_6 = sx.q(x8_5) << 3
            int64_t x9_2 = *(&data_1838a20 + x8_6)
            *x0_5 = x0_3
            x0_5[1] = x27_1
            *(&data_1838a20 + x8_6) = x0_5
            *(x0_5 + 0x10) = x9_2
            void* x0_7 = DomDefGetSlow(zx.q(x0_3), zx.q(x27_1))
            *(x0_5 + 8) = x0_7
            
            if ((zx.d(*(x0_7 + 0xcc)) & 0x40) == 0)
                goto label_bd2638
            
        label_bd2628:
            
            if ((HasEnoughFavor(arg1, zx.q(x22_1), zx.q(x0_3)) & 1) != 0)
                goto label_bd2638
            
            x19_3 = 0

return zx.q(x19_3) & 1
