// 函数: sub_f345dc
// 地址: 0xf345dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x19 = **(arg1 + 0x10)
void* var_50
int64_t var_48
int64_t var_40
int64_t var_38
int32_t var_30

if ((**(arg1 + 8) & 0x80000000) != 0)
    Botan::BigInt::BigInt(&var_50)
    void* var_48_2
    void* x0_3
    
    if (&var_50 == x19)
        x0_3 = var_50
        
        if (x0_3 != 0)
            var_48_2 = x0_3
            Botan::deallocate_memory(x0_3, (var_40 - x0_3) s>> 2, 4)
    else
        int128_t v0_1 = *x19
        *x19 = var_50
        x0_3 = v0_1.q
        x19[1] = var_48
        var_50.o = v0_1
        int64_t x10_2 = x19[2]
        int64_t x9_3 = x19[3]
        x19[2] = var_40
        x19[3] = var_38
        int64_t var_38_2 = x9_3
        x19[4].d = var_30
        int32_t var_30_2 = x19[4].d
        
        if (x0_3 != 0)
            var_48_2 = x0_3
            Botan::deallocate_memory(x0_3, (x10_2 - x0_3) s>> 2, 4)
    int32_t x8_18
    
    if (x19[4].d != 1)
        x8_18 = 1
    else
        int64_t x8_17 = x19[3]
        
        if (x8_17 == -1)
            int64_t x9_5 = *x19
            int64_t x11_1 = x19[1]
            int64_t x10_3 = x11_1 - x9_5
            
            if (x11_1 == x9_5)
                x8_17 = 0
            else
                int64_t x12_1
                
                x12_1 = x10_3 s>= 0 ? x10_3 : -1
                
                int64_t x11_2 = x9_5 - x11_1
                int64_t x12_2
                
                x12_2 = x12_1 s< 1 ? x12_1 : 1
                
                x8_17 = x10_3 s>> 2
                int64_t x10_4
                
                x10_4 = x11_2 s> x10_3 ? x11_2 : x10_3
                
                int64_t i_1 = x12_2 * (x10_4 u>> 2)
                uint64_t x11_3 = 1
                int64_t i
                
                do
                    int32_t x12_3 = *(x9_5 - 4 + (i_1 << 2))
                    i = i_1
                    i_1 -= 1
                    x11_3 = zx.q(x11_3.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
                    x8_17 -= x11_3
                while (i != 1)
            
            x19[3] = x8_17
        
        x8_18 = x8_17 == 0 ? 1 : 0
    
    x19[4].d = x8_18
else
    Botan::BigInt::BigInt(&var_50)
    void* var_48_1
    void* x0_1
    
    if (&var_50 == x19)
        x0_1 = var_50
        
        if (x0_1 != 0)
            var_48_1 = x0_1
            Botan::deallocate_memory(x0_1, (var_40 - x0_1) s>> 2, 4)
    else
        x0_1 = *x19
        *x19 = var_50
        var_50 = x0_1
        int64_t x10_1 = x19[2]
        int64_t x9_1 = x19[3]
        x19[1] = var_48
        x19[2] = var_40
        x19[3] = var_38
        int64_t var_38_1 = x9_1
        x19[4].d = var_30
        int32_t var_30_1 = x19[4].d
        
        if (x0_1 != 0)
            var_48_1 = x0_1
            Botan::deallocate_memory(x0_1, (x10_1 - x0_1) s>> 2, 4)
return 0
