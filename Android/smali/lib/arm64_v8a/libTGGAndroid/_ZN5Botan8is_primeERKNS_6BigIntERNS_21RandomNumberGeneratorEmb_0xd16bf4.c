// 函数: _ZN5Botan8is_primeERKNS_6BigIntERNS_21RandomNumberGeneratorEmb
// 地址: 0xd16bf4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21_2

if (*(arg1 + 0x20) == 0)
    x21_2 = 0
else
    int64_t i_5 = *(arg1 + 0x18)
    int32_t x20_1 = arg4.d
    
    if (i_5 == -1)
        int64_t x9_1 = *arg1
        int64_t x11_1 = *(arg1 + 8)
        int64_t x10_1 = x11_1 - x9_1
        
        if (x11_1 != x9_1)
            int64_t x12_1
            
            x12_1 = x10_1 s>= 0 ? x10_1 : -1
            
            int64_t x11_2 = x9_1 - x11_1
            int64_t x12_2
            
            x12_2 = x12_1 s< 1 ? x12_1 : 1
            
            i_5 = x10_1 s>> 2
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
                i_5 -= x11_3
            while (i != 1)
            *(arg1 + 0x18) = i_5
            
            if (i_5 u<= 1)
                goto label_d16cac
            
            goto label_d16cf8
        
        i_5 = 0
        *(arg1 + 0x18) = 0
    label_d16cac:
        
        if (i_5 == 0)
            x21_2 = 0
        else
            int32_t* x9_3 = *arg1
            int32_t x10_4 = 0
            int64_t i_8 = i_5
            int64_t i_1
            
            do
                int32_t x12_5 = *x9_3
                x9_3 = &x9_3[1]
                i_1 = i_8
                i_8 -= 1
                int32_t x12_7 = (((x12_5 ^ 2) - 1) & not.d(x12_5)) s>> 0x1f
                x10_4 =
                    (x10_4 & x12_7) | ((((x12_5 - 2) & not.d(x12_5)) s>> 0x1f | 1) & not.d(x12_7))
            while (i_1 != 1)
            
            if (x10_4 != 0)
                goto label_d16cf8
            
            x21_2 = 1
    else
        if (i_5 u<= 1)
            goto label_d16cac
        
    label_d16cf8:
        char* x9_4
        
        if (i_5 == -1)
            int64_t x9_5 = *arg1
            int64_t x11_4 = *(arg1 + 8)
            int64_t x10_6 = x11_4 - x9_5
            
            if (x11_4 == x9_5)
                i_5 = 0
                *(arg1 + 0x18) = 0
                x9_4 = *arg1
            else
                int64_t x12_8
                
                x12_8 = x10_6 s>= 0 ? x10_6 : -1
                
                int64_t x11_5 = x9_5 - x11_4
                int64_t x12_9
                
                x12_9 = x12_8 s< 1 ? x12_8 : 1
                
                i_5 = x10_6 s>> 2
                int64_t x10_7
                
                x10_7 = x11_5 s> x10_6 ? x11_5 : x10_6
                
                int64_t i_7 = x12_9 * (x10_7 u>> 2)
                uint64_t x11_6 = 1
                int64_t i_2
                
                do
                    int32_t x12_10 = *(x9_5 - 4 + (i_7 << 2))
                    i_2 = i_7
                    i_7 -= 1
                    x11_6 = zx.q(x11_6.d) & zx.q(((x12_10 - 1) & not.d(x12_10)) s>> 0x1f)
                    i_5 -= x11_6
                while (i_2 != 1)
                *(arg1 + 0x18) = i_5
                x9_4 = *arg1
                
                if (i_5 u> 1)
                    goto label_d16de8
            
        label_d16d98:
            
            if (i_5 == 0)
                x21_2 = 0
            else
                int32_t x10_9 = 0
                char* x11_7 = x9_4
                int64_t i_3
                
                do
                    int32_t x12_12 = *x11_7
                    x11_7 = &x11_7[4]
                    i_3 = i_5
                    i_5 -= 1
                    int32_t x12_14 = (((x12_12 ^ 1) - 1) & not.d(x12_12)) s>> 0x1f
                    x10_9 = (x10_9 & x12_14)
                        | ((((x12_12 - 1) & not.d(x12_12)) s>> 0x1f | 1) & not.d(x12_14))
                while (i_3 != 1)
                
                if (x10_9 s>= 1 && *(arg1 + 8) != x9_4 && (zx.d(*x9_4) & 1) != 0)
                    goto label_d16e18
                
                x21_2 = 0
        else
            x9_4 = *arg1
            
            if (i_5 u<= 1)
                goto label_d16d98
            
        label_d16de8:
            
            if (*(arg1 + 8) == x9_4 || (zx.d(*x9_4) & 1) == 0)
                x21_2 = 0
            else
            label_d16e18:
                int64_t x0_2 = Botan::BigInt::bits()
                
                if (x0_2 u> 0x10)
                    void* var_88
                    Botan::Modular_Reducer::Modular_Reducer(&var_88)
                    
                    if (((*(*arg2 + 0x48))(arg2) & 1) == 0)
                        x21_2 = Botan::is_bailie_psw_probable_prime(arg1, &var_88)
                    else
                        uint64_t x3 = (arg3 + 2) u>> 1
                        
                        if ((x20_1 & 1) != 0 && arg3 u<= 0x80)
                            if (x0_2 u> 0x5ff)
                                x3 = 4
                            else if (x0_2 u> 0x3ff)
                                x3 = 6
                            else if (x0_2 u> 0x1ff)
                                x3 = 0xc
                            else if (x0_2 u> 0xff)
                                x3 = 0x1d
                        
                        int32_t x0_9 =
                            Botan::is_miller_rabin_probable_prime(arg1, &var_88, arg2, x3)
                        x21_2 = x0_9
                        
                        if ((x0_9 & 1) != 0 && (x20_1 & 1) == 0)
                            x21_2 = Botan::is_lucas_probable_prime(arg1, &var_88)
                    
                    void* var_60
                    
                    if (var_60 != 0)
                        void* var_58_1 = var_60
                        int64_t var_50
                        Botan::deallocate_memory(var_60, (var_50 - var_60) s>> 2, 4)
                    
                    void* x0_12 = var_88
                    
                    if (x0_12 != 0)
                        void* var_80_1 = x0_12
                        int64_t var_78
                        Botan::deallocate_memory(x0_12, (var_78 - x0_12) s>> 2, 4)
                else
                    int32_t* x8_3 = *arg1
                    int16_t x8_4
                    
                    if (*(arg1 + 8) == x8_3)
                        x8_4 = 0
                    else
                        x8_4 = (*x8_3).w
                    
                    uint64_t i_4 = 0x198d
                    int64_t (* const x10_11)() = Botan::PRIMES
                    
                    do
                        uint64_t i_9 = i_4 u>> 1
                        void* x13_13 = x10_11 + (i_9 << 1)
                        uint32_t x14_5 = zx.d(*x13_13)
                        uint32_t temp3_1 = zx.d(x8_4)
                        
                        if (x14_5 u< temp3_1)
                            i_4 += not.q(i_9)
                        else
                            i_4 = i_9
                        
                        if (x14_5 u< temp3_1)
                            x10_11 = x13_13 + 2
                    while (i_4 != 0)
                    
                    if (x10_11 == Botan::PRIMES + 0x331a)
                        x21_2 = 0
                    else
                        x21_2 = zx.d(*x10_11) u<= zx.d(x8_4) ? 1 : 0

return zx.q(x21_2) & 1
