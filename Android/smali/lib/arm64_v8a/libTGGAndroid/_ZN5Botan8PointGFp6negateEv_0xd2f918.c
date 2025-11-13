// 函数: _ZN5Botan8PointGFp6negateEv
// 地址: 0xd2f918
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_result
int64_t x8 = entry_result[0xf]

if (x8 == -1)
    int64_t x9_1 = entry_result[0xc]
    int64_t x11_1 = entry_result[0xd]
    int64_t x10_1 = x11_1 - x9_1
    
    if (x11_1 == x9_1)
        entry_result[0xf] = 0
    else
        int64_t x12_1
        
        x12_1 = x10_1 s>= 0 ? x10_1 : -1
        
        int64_t x11_2 = x9_1 - x11_1
        int64_t x12_2
        
        x12_2 = x12_1 s< 1 ? x12_1 : 1
        
        int64_t x8_1 = x10_1 s>> 2
        int64_t x10_2
        
        x10_2 = x11_2 s> x10_1 ? x11_2 : x10_1
        
        int64_t i_3 = x12_2 * (x10_2 u>> 2)
        uint64_t x11_3 = 1
        int64_t i
        
        do
            int32_t x12_3 = *(x9_1 - 4 + (i_3 << 2))
            i = i_3
            i_3 -= 1
            x11_3 = zx.q(x11_3.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
            x8_1 -= x11_3
        while (i != 1)
        entry_result[0xf] = x8_1
        
        if (x8_1 != 0)
            goto label_d2f9b8
else if (x8 != 0)
label_d2f9b8:
    Botan::BigInt* x0_1 = (*(**entry_result + 0x10))()
    uint32_t* x1_1 = entry_result[7]
    int64_t x2_1 = entry_result[0xa]
    
    if (x2_1 == -1)
        int64_t x8_4 = entry_result[8]
        void* x9_3 = x8_4 - x1_1
        
        if (x8_4 == x1_1)
            x2_1 = 0
        else
            void* x11_4
            
            x11_4 = x9_3 s>= 0 ? x9_3 : -ffffffffffffffff
            
            void* x10_4 = x1_1 - x8_4
            void* x11_5
            
            x11_5 = x11_4 s< 1 ? x11_4 : 1
            
            x2_1 = x9_3 s>> 2
            void* x9_4
            
            x9_4 = x10_4 s> x9_3 ? x10_4 : x9_3
            
            int64_t i_2 = x11_5 * (x9_4 u>> 2)
            uint64_t x10_5 = 1
            int64_t i_1
            
            do
                int32_t x11_6 = *(x1_1 - 4 + (i_2 << 2))
                i_1 = i_2
                i_2 -= 1
                x10_5 = zx.q(x10_5.d) & zx.q(((x11_6 - 1) & not.d(x11_6)) s>> 0x1f)
                x2_1 -= x10_5
            while (i_1 != 1)
        
        entry_result[0xa] = x2_1
    
    Botan::BigInt::add2(x0_1, x1_1, x2_1, zx.q(entry_result[0xb].d != 1 ? 1 : 0))
    void* var_50
    void* var_48_1
    int64_t var_40
    void* x0_2
    
    if (&entry_result[7] == &var_50)
        x0_2 = var_50
        
        if (x0_2 != 0)
            var_48_1 = x0_2
            Botan::deallocate_memory(x0_2, (var_40 - x0_2) s>> 2, 4)
    else
        x0_2 = entry_result[7]
        int128_t v0_1 = var_50.o
        var_50 = x0_2
        *(entry_result + 0x38) = v0_1
        int64_t x11_8 = entry_result[9]
        int64_t x9_6 = entry_result[0xa]
        entry_result[9] = var_40
        int64_t var_38
        entry_result[0xa] = var_38
        int64_t var_38_1 = x9_6
        int32_t var_30
        entry_result[0xb].d = var_30
        int32_t var_30_1 = entry_result[0xb].d
        
        if (x0_2 != 0)
            var_48_1 = x0_2
            Botan::deallocate_memory(x0_2, (x11_8 - x0_2) s>> 2, 4)

return entry_result
