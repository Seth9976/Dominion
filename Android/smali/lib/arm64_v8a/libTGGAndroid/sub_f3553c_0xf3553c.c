// 函数: sub_f3553c
// 地址: 0xf3553c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x20 = *(arg1 + 8)
Botan_FFI::botan_struct<Botan::BigInt, 3358112210u>* x0 = x20[1]
int64_t* x19 = **(arg1 + 0x10)

if (*x20 == x0)
    uint64_t* x0_5 = Botan_FFI::safe_get<Botan::BigInt, 3358112210u>(x20[2])
    int64_t x2_1 = x0_5[3]
    uint64_t x1_1 = *x0_5
    
    if (x2_1 == -1)
        int64_t x8_4 = x0_5[1]
        int64_t x9_4 = x8_4 - x1_1
        
        if (x8_4 == x1_1)
            x2_1 = 0
        else
            int64_t x11_5
            
            x11_5 = x9_4 s>= 0 ? x9_4 : -1
            
            int64_t x10_3 = x1_1 - x8_4
            int64_t x11_6
            
            x11_6 = x11_5 s< 1 ? x11_5 : 1
            
            x2_1 = x9_4 s>> 2
            int64_t x9_5
            
            x9_5 = x10_3 s> x9_4 ? x10_3 : x9_4
            
            int64_t i_3 = x11_6 * (x9_5 u>> 2)
            uint64_t x10_4 = 1
            int64_t i
            
            do
                int32_t x11_7 = *(x1_1 - 4 + (i_3 << 2))
                i = i_3
                i_3 -= 1
                x10_4 = zx.q(x10_4.d) & zx.q(((x11_7 - 1) & not.d(x11_7)) s>> 0x1f)
                x2_1 -= x10_4
            while (i != 1)
        
        x0_5[3] = x2_1
    
    x0_5[4].d
    Botan::BigInt::add(x19, x1_1, x2_1)
else
    Botan::BigInt* x0_1 = Botan_FFI::safe_get<Botan::BigInt, 3358112210u>(x0)
    int64_t* x0_3 = Botan_FFI::safe_get<Botan::BigInt, 3358112210u>(x20[2])
    uint64_t x2 = x0_3[3]
    uint32_t* x1 = *x0_3
    
    if (x2 == -1)
        int64_t x8_2 = x0_3[1]
        void* x9_1 = x8_2 - x1
        
        if (x8_2 == x1)
            x2 = 0
        else
            void* x11_1
            
            x11_1 = x9_1 s>= 0 ? x9_1 : -ffffffffffffffff
            
            void* x10_1 = x1 - x8_2
            void* x11_2
            
            x11_2 = x11_1 s< 1 ? x11_1 : 1
            
            x2 = x9_1 s>> 2
            void* x9_2
            
            x9_2 = x10_1 s> x9_1 ? x10_1 : x9_1
            
            int64_t i_2 = x11_2 * (x9_2 u>> 2)
            uint64_t x10_2 = 1
            int64_t i_1
            
            do
                int32_t x11_3 = *(x1 - 4 + (i_2 << 2))
                i_1 = i_2
                i_2 -= 1
                x10_2 = zx.q(x10_2.d) & zx.q(((x11_3 - 1) & not.d(x11_3)) s>> 0x1f)
                x2 -= x10_2
            while (i_1 != 1)
        
        x0_3[3] = x2
    
    Botan::BigInt::add2(x0_1, x1, x2, zx.q(x0_3[4].d))
    void* var_48
    void* var_40_1
    int64_t var_38
    void* x0_7
    
    if (&var_48 == x19)
        x0_7 = var_48
        
        if (x0_7 != 0)
            var_40_1 = x0_7
            Botan::deallocate_memory(x0_7, (var_38 - x0_7) s>> 2, 4)
    else
        x0_7 = *x19
        *x19 = var_48
        var_48 = x0_7
        int64_t x10_5 = x19[2]
        int64_t x9_7 = x19[3]
        int64_t var_40
        x19[1] = var_40
        x19[2] = var_38
        int64_t var_30
        x19[3] = var_30
        int64_t var_30_1 = x9_7
        int32_t var_28
        x19[4].d = var_28
        int32_t var_28_1 = x19[4].d
        
        if (x0_7 != 0)
            var_40_1 = x0_7
            Botan::deallocate_memory(x0_7, (x10_5 - x0_7) s>> 2, 4)

return 0
