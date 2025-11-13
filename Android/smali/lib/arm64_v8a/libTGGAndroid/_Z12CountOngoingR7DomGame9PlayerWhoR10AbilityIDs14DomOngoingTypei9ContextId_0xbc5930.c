// 函数: _Z12CountOngoingR7DomGame9PlayerWhoR10AbilityIDs14DomOngoingTypei9ContextId
// 地址: 0xbc5930
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x23

if (*(arg3 + 0x400) s< 1)
    x23 = 0
else
    int32_t x20_1 = arg4
    
    if (arg6 == 0)
        int64_t i = 0
        x23 = 0
        
        do
            uint64_t x1_2 = zx.q(*(arg3 + (i << 2)))
            
            if ((x1_2 & 0x30) == 0)
                void* x0_15 = AbilityGetRegistered(arg1, x1_2)
                
                if (*(x0_15 + 0x4c) != 3)
                    void* x0_17 = __emutls_get_address(__emutls_v.gContextStack_tl)
                    void* x8_26 = x0_17 + sx.q(*(x0_17 + 0x13000)) * 0x98
                    *(*(x8_26 - 0x90) + 0x1a28) = 0xffffffff
                    void* x8_27 = *(x8_26 - 0x90)
                    *(x8_27 + 0x1a2c) = *(x8_27 + 0x1a24)
                    XTrace("game thread yield (error)")
                    xco_yield()
                    XTrace("game thread resume (error)")
                
                if (*(x0_15 + 0x50) == x20_1)
                    goto label_bc5bd8
            else if (*(AbilityGetStatic(arg1, x1_2) + 0x18) == x20_1)
            label_bc5bd8:
                uint64_t x1_3 = zx.q(*(arg3 + (i << 2)))
                int32_t* x8_30
                
                if ((x1_3 & 0x30) == 0)
                    void* x0_20 = AbilityGetRegistered(arg1, x1_3)
                    
                    if (*(x0_20 + 0x4c) != 3)
                        void* x0_22 = __emutls_get_address(__emutls_v.gContextStack_tl)
                        void* x8_34 = x0_22 + sx.q(*(x0_22 + 0x13000)) * 0x98
                        *(*(x8_34 - 0x90) + 0x1a28) = 0xffffffff
                        void* x8_35 = *(x8_34 - 0x90)
                        *(x8_35 + 0x1a2c) = *(x8_35 + 0x1a24)
                        XTrace("game thread yield (error)")
                        xco_yield()
                        XTrace("game thread resume (error)")
                    
                    x8_30 = x0_20 + 0x54
                else
                    x8_30 = AbilityGetStatic(arg1, x1_3) + 0xa0
                
                if (*x8_30 == arg5)
                    x23 += 1
            
            i += 1
        while (i s< sx.q(*(arg3 + 0x400)))
    else
        int64_t i_1 = 0
        x23 = 0
        
        do
            uint64_t x1 = zx.q(*(arg3 + (i_1 << 2)))
            
            if ((x1 & 0x30) == 0)
                void* x0_3 = AbilityGetRegistered(arg1, x1)
                
                if (*(x0_3 + 0x4c) != 3)
                    void* x0_5 = __emutls_get_address(__emutls_v.gContextStack_tl)
                    void* x8_9 = x0_5 + sx.q(*(x0_5 + 0x13000)) * 0x98
                    *(*(x8_9 - 0x90) + 0x1a28) = 0xffffffff
                    void* x8_10 = *(x8_9 - 0x90)
                    *(x8_10 + 0x1a2c) = *(x8_10 + 0x1a24)
                    XTrace("game thread yield (error)")
                    xco_yield()
                    XTrace("game thread resume (error)")
                
                if (*(x0_3 + 0x50) == x20_1)
                    goto label_bc5a40
            else if (*(AbilityGetStatic(arg1, x1) + 0x18) == x20_1)
            label_bc5a40:
                uint64_t x1_1 = zx.q(*(arg3 + (i_1 << 2)))
                DomGame& x0_6
                
                if ((x1_1 & 0x30) == 0)
                    if (*(AbilityGetRegistered(arg1, x1_1) + 8) == arg6)
                        x1_1 = zx.q(*(arg3 + (i_1 << 2)))
                        x0_6 = arg1
                        
                        if ((x1_1 & 0x30) != 0)
                            goto label_bc5990
                        
                        goto label_bc5a58
                else
                    x0_6 = arg1
                    void* x8_1
                    
                    if ((x1_1 & 0x30) == 0)
                    label_bc5a58:
                        void* x0_7 = AbilityGetRegistered(x0_6, x1_1)
                        
                        if (*(x0_7 + 0x4c) != 3)
                            void* x0_9 = __emutls_get_address(__emutls_v.gContextStack_tl)
                            void* x8_16 = x0_9 + sx.q(*(x0_9 + 0x13000)) * 0x98
                            *(*(x8_16 - 0x90) + 0x1a28) = 0xffffffff
                            void* x8_17 = *(x8_16 - 0x90)
                            *(x8_17 + 0x1a2c) = *(x8_17 + 0x1a24)
                            XTrace("game thread yield (error)")
                            xco_yield()
                            XTrace("game thread resume (error)")
                        
                        x8_1 = x0_7 + 0x54
                        goto label_bc5998
                    
                label_bc5990:
                    x8_1 = AbilityGetStatic(x0_6, x1_1) + 0xa0
                label_bc5998:
                    
                    if (*x8_1 == arg5)
                        x23 += 1
            
            i_1 += 1
        while (i_1 s< sx.q(*(arg3 + 0x400)))

return zx.q(x23)
