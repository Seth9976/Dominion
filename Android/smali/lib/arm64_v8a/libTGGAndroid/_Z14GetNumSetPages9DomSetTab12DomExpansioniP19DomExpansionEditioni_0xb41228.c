// 函数: _Z14GetNumSetPages9DomSetTab12DomExpansioniP19DomExpansionEditioni
// 地址: 0xb41228
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg2
int64_t var_f0

if (arg1 == 1)
    uint64_t x21_1 = zx.q(*(GetActiveProfile() + 0x7558))
    int32_t x22_1
    
    if (x21_1.d s< 1)
        x22_1 = 0
    else if (x20 == 0)
        int32_t i_3 = x21_1.d
        int32_t i
        
        do
            GetActiveProfile()
            i = i_3
            i_3 -= 1
        while (i != 1)
        x22_1 = x21_1.d
    else
        int64_t x23_1 = 0
        x22_1 = 0
        
        do
            int32_t x0_3 = DomExpansionsFromBitset(
                zx.q(*(GetActiveProfile() + x23_1 * 0x18 + 0x6f68)), &var_f0)
            
            if (x0_3 s> 0)
                int64_t x8_3
                uint64_t x9_1
                
                if (var_f0.d != x20)
                    x9_1 = zx.q(x0_3)
                    x8_3 = 0
                    int32_t x11_1
                    
                    do
                        if (x9_1 - 1 == x8_3)
                            goto label_b41288
                        
                        x11_1 = *(&var_f0:4 + (x8_3 << 2))
                        x8_3 += 1
                    while (x11_1 != x20)
                
                if (var_f0.d == x20 || x8_3 u< x9_1)
                    x22_1 += 1
            
        label_b41288:
            x23_1 += 1
        while (x23_1 != x21_1)
    
    return zx.q((arg5 + x22_1 - 1) s/ arg5)

uint64_t result = zx.q(*(&data_1811310 + (zx.q(x20) << 2)))

if (result.d == 0)
    int32_t x0_5 = DomSetsGet(&var_f0)
    int32_t x8_4
    
    if (x0_5 s< 1)
        x8_4 = 0
    else
        int64_t x10_2 = var_f0
        int64_t x9_2 = 0
        x8_4 = 0
        uint64_t x11_2 = zx.q(arg3)
        
        while (true)
            int64_t x15_2 = sx.q(*(x10_2 + x9_2 * 0x68 + 0x4c))
            
            if (x15_2.d u< 0x19)
                if (*(&data_801cdc + (x15_2 << 2)) == x20)
                label_b413a0:
                    
                    if (arg3 s< 1)
                        if (x15_2.d != 0)
                            goto label_b4133c
                    else if (x15_2.d != 0)
                        int32_t x16_8 = *arg4
                        int64_t x17_1
                        
                        if (x16_8 != x15_2.d)
                            int64_t x0_6 = 1
                            
                            do
                                x17_1 = x0_6
                                
                                if (x11_2 == x0_6)
                                    break
                                
                                x0_6 = x17_1 + 1
                            while (*(arg4 + (x17_1 << 2)) != x15_2.d)
                        
                        if (x16_8 != x15_2.d && x17_1 u>= x11_2)
                            goto label_b4133c
                        
                        int32_t i_1 = *(x10_2 + x9_2 * 0x68 + 0x50)
                        
                        if (i_1 != 0)
                            int64_t x17_2
                            
                            if (x16_8 != i_1)
                                int64_t x0_8 = 1
                                
                                do
                                    x17_2 = x0_8
                                    
                                    if (x11_2 == x0_8)
                                        break
                                    
                                    x0_8 = x17_2 + 1
                                while (*(arg4 + (x17_2 << 2)) != i_1)
                            
                            if (x16_8 != i_1 && x17_2 u>= x11_2)
                                goto label_b4133c
                            
                            int32_t i_2 = *(x10_2 + x9_2 * 0x68 + 0x54)
                            
                            if (i_2 != 0 && x16_8 != i_2)
                                int64_t x17_3 = 1
                                int64_t x16_9
                                
                                do
                                    x16_9 = x17_3
                                    
                                    if (x11_2 == x17_3)
                                        break
                                    
                                    x17_3 = x16_9 + 1
                                while (*(arg4 + (x16_9 << 2)) != i_2)
                                
                                if (x16_9 u>= x11_2)
                                    goto label_b4133c
                    
                    x8_4 += 1
                label_b4133c:
                    x9_2 += 1
                    
                    if (x9_2 == zx.q(x0_5))
                        break
                    
                    continue
                else
                    int64_t x16_3 = sx.q(*(x10_2 + x9_2 * 0x68 + 0x50))
                    
                    if (x16_3.d u< 0x19)
                        if (*(&data_801cdc + (x16_3 << 2)) == x20)
                            goto label_b413a0
                        
                        int64_t x16_6 = sx.q(*(x10_2 + x9_2 * 0x68 + 0x54))
                        
                        if (x16_6.d u<= 0x18)
                            if (*(&data_801cdc + (x16_6 << 2)) != x20)
                                goto label_b4133c
                            
                            goto label_b413a0
            
            pthread_kill(pthread_self(), 6)
            uint64_t x0_11
            int32_t x1_1
            int64_t x2
            int32_t x3
            DomExpansionEdition* x4
            DomKingdomSet* x5
            int32_t x6
            x0_11, x1_1, x2, x3, x4, x5, x6 = XNoReturn()
            return GetCurrentSets(x0_11, x1_1, x2, x3, x4, x5, x6) __tailcall
    
    result = zx.q((arg5 + x8_4 - 1) s/ arg5)
    *(&data_1811310 + (zx.q(x20) << 2)) = result.d

return result
