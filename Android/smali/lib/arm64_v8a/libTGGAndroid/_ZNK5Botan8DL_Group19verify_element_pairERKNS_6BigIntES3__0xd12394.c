// 函数: _ZNK5Botan8DL_Group19verify_element_pairERKNS_6BigIntES3_
// 地址: 0xd12394
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

bool x0 = Botan::DL_Group::data()
int32_t x19_1

if (*(arg2 + 0x20) == 0)
    x19_1 = 0
else
    int64_t i_4 = *(arg2 + 0x18)
    
    if (i_4 == -1)
        int64_t x9_1 = *arg2
        int64_t x11_1 = *(arg2 + 8)
        int64_t x10_1 = x11_1 - x9_1
        
        if (x11_1 == x9_1)
            i_4 = 0
            *(arg2 + 0x18) = 0
        else
            int64_t x12_1
            
            x12_1 = x10_1 s>= 0 ? x10_1 : -1
            
            int64_t x11_2 = x9_1 - x11_1
            int64_t x12_2
            
            x12_2 = x12_1 s< 1 ? x12_1 : 1
            
            i_4 = x10_1 s>> 2
            int64_t x10_2
            
            x10_2 = x11_2 s> x10_1 ? x11_2 : x10_1
            
            int64_t i_6 = x12_2 * (x10_2 u>> 2)
            uint64_t x11_3 = 1
            int64_t i
            
            do
                int32_t x12_3 = *(x9_1 - 4 + (i_6 << 2))
                i = i_6
                i_6 -= 1
                x11_3 = zx.q(x11_3.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
                i_4 -= x11_3
            while (i != 1)
            *(arg2 + 0x18) = i_4
            
            if (i_4 u> 1)
                goto label_d124a8
        
    label_d12450:
        
        if (i_4 == 0)
            x19_1 = 0
        else
            int32_t* x9_3 = *arg2
            int32_t x10_4 = 0
            int64_t i_1
            
            do
                int32_t x11_4 = *x9_3
                x9_3 = &x9_3[1]
                i_1 = i_4
                i_4 -= 1
                int32_t x11_6 = (((x11_4 ^ 1) - 1) & not.d(x11_4)) s>> 0x1f
                x10_4 =
                    (x10_4 & x11_6) | ((((x11_4 - 1) & not.d(x11_4)) s>> 0x1f | 1) & not.d(x11_6))
            while (i_1 != 1)
            
            if (x10_4 s>= 1)
                goto label_d124a8
            
            x19_1 = 0
    else
        if (i_4 u<= 1)
            goto label_d12450
        
    label_d124a8:
        Botan::BigInt* entry_x2
        
        if ((Botan::BigInt::cmp(arg2, x0) & 0x80000000) != 0 && *(entry_x2 + 0x20) != 0)
            int64_t i_5 = *(entry_x2 + 0x18)
            
            if (i_5 == -1)
                int64_t x9_4 = *entry_x2
                int64_t x11_7 = *(entry_x2 + 8)
                int64_t x10_6 = x11_7 - x9_4
                
                if (x11_7 == x9_4)
                    i_5 = 0
                    *(entry_x2 + 0x18) = 0
                else
                    int64_t x12_10
                    
                    x12_10 = x10_6 s>= 0 ? x10_6 : -1
                    
                    int64_t x11_8 = x9_4 - x11_7
                    int64_t x12_11
                    
                    x12_11 = x12_10 s< 1 ? x12_10 : 1
                    
                    i_5 = x10_6 s>> 2
                    int64_t x10_7
                    
                    x10_7 = x11_8 s> x10_6 ? x11_8 : x10_6
                    
                    int64_t i_7 = x12_11 * (x10_7 u>> 2)
                    uint64_t x11_9 = 1
                    int64_t i_2
                    
                    do
                        int32_t x12_12 = *(x9_4 - 4 + (i_7 << 2))
                        i_2 = i_7
                        i_7 -= 1
                        x11_9 = zx.q(x11_9.d) & zx.q(((x12_12 - 1) & not.d(x12_12)) s>> 0x1f)
                        i_5 -= x11_9
                    while (i_2 != 1)
                    *(entry_x2 + 0x18) = i_5
                    
                    if (i_5 u> 1)
                        goto label_d125bc
                
            label_d12564:
                
                if (i_5 == 0)
                    x19_1 = 0
                else
                    int32_t* x9_6 = *entry_x2
                    int32_t x10_9 = 0
                    int64_t i_3
                    
                    do
                        int32_t x11_10 = *x9_6
                        x9_6 = &x9_6[1]
                        i_3 = i_5
                        i_5 -= 1
                        int32_t x11_12 = (((x11_10 ^ 1) - 1) & not.d(x11_10)) s>> 0x1f
                        x10_9 = (x10_9 & x11_12)
                            | ((((x11_10 - 1) & not.d(x11_10)) s>> 0x1f | 1) & not.d(x11_12))
                    while (i_3 != 1)
                    
                    if (x10_9 s>= 1)
                        goto label_d125bc
                    
                    x19_1 = 0
            else
                if (i_5 u<= 1)
                    goto label_d12564
                
            label_d125bc:
                
                if ((Botan::BigInt::cmp(entry_x2, x0) & 0x80000000) == 0)
                    x19_1 = 0
                else
                    void* x0_6 = Botan::DL_Group::data()
                    Botan::BigInt::bits()
                    Botan::Montgomery_Exponentation_State::exponentiation(*(x0_6 + 0x138), entry_x2)
                    x19_1 = Botan::BigInt::is_equal(arg2)
                    void* var_58
                    
                    if (var_58 != 0)
                        void* var_50_1 = var_58
                        int64_t var_48
                        Botan::deallocate_memory(var_58, (var_48 - var_58) s>> 2, 4)
        else
            x19_1 = 0

return zx.q(x19_1) & 1
