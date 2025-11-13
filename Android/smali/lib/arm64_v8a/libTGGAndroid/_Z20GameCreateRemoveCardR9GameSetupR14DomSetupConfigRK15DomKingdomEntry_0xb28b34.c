// 函数: _Z20GameCreateRemoveCardR9GameSetupR14DomSetupConfigRK15DomKingdomEntry
// 地址: 0xb28b34
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *arg3

if (x8 == 3)
    int64_t x8_3 = *(arg3 + 8)
    
    if (x8_3 s<= 0x1fffffff)
        if (x8_3 == 0x400)
            int32_t x8_10 = *(arg2 + 0xbd4)
            *(arg2 + 0xbd0) -= 1
            
            if (x8_10 != 2)
                *(arg2 + 0xbd4) = x8_10 - 1
        else if (x8_3 == 0x8000000)
            int32_t x8_12 = *(arg2 + 0xbe4)
            *(arg2 + 0xbe0) -= 1
            
            if (x8_12 != 2)
                *(arg2 + 0xbe4) = x8_12 - 1
        else
            if (x8_3 != 0x10000000)
                goto label_b28f70
            
            int32_t x9_6 = *(arg2 + 0xbec)
            *(arg2 + 0xbe8) -= 1
            
            if (x9_6 != 1)
                *(arg2 + 0xbec) = x9_6 - 1
    else if (x8_3 s> 0xffffffffff)
        if (x8_3 == 0x10000000000)
            int32_t x8_14 = *(arg2 + 0xbf4)
            *(arg2 + 0xbf0) -= 1
            
            if (x8_14 != 2)
                *(arg2 + 0xbf4) = x8_14 - 1
        else
            if (x8_3 != 0x80000000000)
                goto label_b28f70
            
            *(arg2 + 0xbf9) = 0
    else if (x8_3 == 0x20000000)
        int32_t x8_8 = *(arg2 + 0xbdc)
        *(arg2 + 0xbd8) -= 1
        
        if (x8_8 != 2)
            *(arg2 + 0xbdc) = x8_8 - 1
    else
        if (x8_3 != 0x4000000000)
            goto label_b28f70
        
        *(arg2 + 0xbf8) = 0
else
    void* __offset(DomSetupConfig, 0x178) result
    
    if (x8 == 2)
        result = ProfileHasEntitlementForExpansion(zx.q(*(arg3 + 8)), nullptr)
        
        if ((result.d & 1) == 0)
            return result
        
        void* x0_3 = FindOrAddExpSetup(arg2, zx.q(*(arg3 + 8)), *V2I0)
        int32_t x8_4 = *(x0_3 + 0xc)
        *(x0_3 + 8) -= 1
        
        if (x8_4 != 0xa)
            *(x0_3 + 0xc) = x8_4 - 1
    else
        if (x8 != 1)
        label_b28f70:
            pthread_kill(pthread_self(), 6)
            DomExpSetup* x0_18
            DomExpansion* x1_5
            int32_t x2_4
            x0_18, x1_5, x2_4 = XNoReturn()
            return EnsureOwnedExpansions(x0_18, x1_5, x2_4) __tailcall
        
        int32_t x9_1 = *arg2
        int32_t x8_1 = *(arg3 + 4)
        
        if (x9_1 == 0)
        label_b28e8c:
            result = arg2 + 0xa0
            int32_t x9_33 = *result
            
            if (x9_33 == 0)
                return result
            
            int32_t x8_17
            
            if (x9_33 != 1 || *(arg2 + 0xa4) != x8_1)
                result = arg2 + 0xe8
                int32_t x9_35 = *result
                
                if (x9_35 != 1)
                    if (x9_35 == 0)
                        return result
                    
                    goto label_b28edc
                
                if (*(arg2 + 0xec) != x8_1)
                label_b28edc:
                    int32_t x9_37 = *(arg2 + 0x130)
                    
                    if (x9_37 == 0)
                        return result
                    
                    if (x9_37 != 1 || *(arg2 + 0x134) != x8_1)
                        if (*(arg2 + 0x178) != 1 || *(arg2 + 0x17c) != x8_1)
                            return result
                        
                        result = arg2 + 0x178
                        x8_17 = 3
                    else
                        result = arg2 + 0x130
                        x8_17 = 2
                else
                    x8_17 = 1
            else
                x8_17 = 0
            
            int32_t x8_18 = x8_17 ^ 3
            memmove(result, arg2 + mulu.dp.d(x8_17 + 1, 0x48) + 0xa0, 
                zx.q(((0xffffffe7 & x8_18) | (3 & x8_18) << 3) << 3))
            *(arg2 + 0x178) = 0
        else
            int32_t x8_2
            
            if (x9_1 != 1 || *(arg2 + 4) != x8_1)
                void* __offset(DomSetupConfig, 0x90) x0 = arg2 + 0x10
                int32_t x9_5 = *x0
                
                if (x9_5 != 1)
                    if (x9_5 == 0)
                        goto label_b28e8c
                    
                    goto label_b28ca4
                
                if (*(arg2 + 0x14) != x8_1)
                label_b28ca4:
                    x0 = arg2 + 0x20
                    int32_t x9_8 = *x0
                    
                    if (x9_8 == 0)
                        goto label_b28e8c
                    
                    if (x9_8 != 1 || *(arg2 + 0x24) != x8_1)
                        x0 = arg2 + 0x30
                        int32_t x9_18 = *x0
                        
                        if (x9_18 == 0)
                            goto label_b28e8c
                        
                        if (x9_18 != 1 || *(arg2 + 0x34) != x8_1)
                            x0 = arg2 + 0x40
                            int32_t x9_20 = *x0
                            
                            if (x9_20 == 0)
                                goto label_b28e8c
                            
                            if (x9_20 != 1 || *(arg2 + 0x44) != x8_1)
                                x0 = arg2 + 0x50
                                int32_t x9_22 = *x0
                                
                                if (x9_22 == 0)
                                    goto label_b28e8c
                                
                                if (x9_22 != 1 || *(arg2 + 0x54) != x8_1)
                                    x0 = arg2 + 0x60
                                    int32_t x9_24 = *x0
                                    
                                    if (x9_24 == 0)
                                        goto label_b28e8c
                                    
                                    if (x9_24 != 1 || *(arg2 + 0x64) != x8_1)
                                        x0 = arg2 + 0x70
                                        int32_t x9_26 = *x0
                                        
                                        if (x9_26 == 0)
                                            goto label_b28e8c
                                        
                                        if (x9_26 != 1 || *(arg2 + 0x74) != x8_1)
                                            x0 = arg2 + 0x80
                                            int32_t x9_28 = *x0
                                            
                                            if (x9_28 == 0)
                                                goto label_b28e8c
                                            
                                            if (x9_28 != 1 || *(arg2 + 0x84) != x8_1)
                                                x0 = arg2 + 0x90
                                                
                                                if (*x0 != 1 || *(arg2 + 0x94) != x8_1)
                                                    goto label_b28e8c
                                                
                                                x8_2 = 9
                                                memmove(x0, arg2 + (zx.q(x8_2 + 1) << 4), 
                                                    zx.q(9 - x8_2) << 4)
                                                *(arg2 + 0x90) = 0
                                            else
                                                x8_2 = 8
                                                memmove(x0, arg2 + (zx.q(x8_2 + 1) << 4), 
                                                    zx.q(9 - x8_2) << 4)
                                                *(arg2 + 0x90) = 0
                                        else
                                            x8_2 = 7
                                            memmove(x0, arg2 + (zx.q(x8_2 + 1) << 4), 
                                                zx.q(9 - x8_2) << 4)
                                            *(arg2 + 0x90) = 0
                                    else
                                        x8_2 = 6
                                        memmove(x0, arg2 + (zx.q(x8_2 + 1) << 4), 
                                            zx.q(9 - x8_2) << 4)
                                        *(arg2 + 0x90) = 0
                                else
                                    x8_2 = 5
                                    memmove(x0, arg2 + (zx.q(x8_2 + 1) << 4), zx.q(9 - x8_2) << 4)
                                    *(arg2 + 0x90) = 0
                            else
                                x8_2 = 4
                                memmove(x0, arg2 + (zx.q(x8_2 + 1) << 4), zx.q(9 - x8_2) << 4)
                                *(arg2 + 0x90) = 0
                        else
                            x8_2 = 3
                            memmove(x0, arg2 + (zx.q(x8_2 + 1) << 4), zx.q(9 - x8_2) << 4)
                            *(arg2 + 0x90) = 0
                    else
                        x8_2 = 2
                        memmove(x0, arg2 + (zx.q(x8_2 + 1) << 4), zx.q(9 - x8_2) << 4)
                        *(arg2 + 0x90) = 0
                else
                    x8_2 = 1
                    memmove(x0, arg2 + (zx.q(x8_2 + 1) << 4), zx.q(9 - x8_2) << 4)
                    *(arg2 + 0x90) = 0
            else
                x8_2 = 0
                memmove(arg2, arg2 + (zx.q(x8_2 + 1) << 4), zx.q(9 - x8_2) << 4)
                *(arg2 + 0x90) = 0

return SaveSetupData(arg1, arg2) __tailcall
