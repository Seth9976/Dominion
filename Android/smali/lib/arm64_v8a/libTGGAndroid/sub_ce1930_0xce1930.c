// 函数: sub_ce1930
// 地址: 0xce1930
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9_2 = zx.d(arg3[8].b) ^ (*(arg1 + 0x20) != *(arg2 + 0x20) ? 1 : 0)

if (x9_2 == 0)
    int64_t x9_4 = *(arg3 + 0x18)
    
    if (x9_4 == -1)
        int64_t x10_1 = *arg3
        int64_t x12_1 = *(arg3 + 8)
        int64_t x11_1 = x12_1 - x10_1
        
        if (x12_1 == x10_1)
            x9_4 = 0
        else
            int64_t x13_1
            
            x13_1 = x11_1 s>= 0 ? x11_1 : -1
            
            int64_t x12_2 = x10_1 - x12_1
            int64_t x13_2
            
            x13_2 = x13_1 s< 1 ? x13_1 : 1
            
            x9_4 = x11_1 s>> 2
            int64_t x11_2
            
            x11_2 = x12_2 s> x11_1 ? x12_2 : x11_1
            
            int64_t i_4 = x13_2 * (x11_2 u>> 2)
            uint64_t x12_3 = 1
            int64_t i
            
            do
                int32_t x13_3 = *(x10_1 - 4 + (i_4 << 2))
                i = i_4
                i_4 -= 1
                x12_3 = zx.q(x12_3.d) & zx.q(((x13_3 - 1) & not.d(x13_3)) s>> 0x1f)
                x9_4 -= x12_3
            while (i != 1)
        
        *(arg3 + 0x18) = x9_4
    
    arg3[8] = x9_4 == 0 ? 1 : 0
    
    if (*(arg1 + 0x20) == 0)
        goto label_ce19f8
    
    return 

arg3[8] = x9_2

if (*(arg1 + 0x20) != 0)
    return 

label_ce19f8:
int64_t x9_7 = *(arg4 + 0x18)

if (x9_7 == -1)
    int64_t x10_3 = *arg4
    int64_t x12_4 = *(arg4 + 8)
    int64_t x11_4 = x12_4 - x10_3
    
    if (x12_4 == x10_3)
        *(arg4 + 0x18) = 0
    else
        int64_t x13_5
        
        x13_5 = x11_4 s>= 0 ? x11_4 : -1
        
        int64_t x12_5 = x10_3 - x12_4
        int64_t x13_6
        
        x13_6 = x13_5 s< 1 ? x13_5 : 1
        
        int64_t x9_8 = x11_4 s>> 2
        int64_t x11_5
        
        x11_5 = x12_5 s> x11_4 ? x12_5 : x11_4
        
        int64_t i_5 = x13_6 * (x11_5 u>> 2)
        uint64_t x12_6 = 1
        int64_t i_1
        
        do
            int32_t x13_7 = *(x10_3 - 4 + (i_5 << 2))
            i_1 = i_5
            i_5 -= 1
            x12_6 = zx.q(x12_6.d) & zx.q(((x13_7 - 1) & not.d(x13_7)) s>> 0x1f)
            x9_8 -= x12_6
        while (i_1 != 1)
        *(arg4 + 0x18) = x9_8
        
        if (x9_8 != 0)
            goto label_ce1a90
else if (x9_7 != 0)
label_ce1a90:
    int32_t var_50 = 1
    Botan::BigInt::add(arg3, &var_50, 1)
    void* var_78
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(&var_78)
    int32_t var_58_1 = 1
    int64_t var_60_1 = *(arg2 + 0x18)
    uint64_t x2 = *(arg4 + 0x18)
    uint32_t* x1_2 = *arg4
    
    if (x2 == -1)
        int64_t x8_2 = *(arg4 + 8)
        void* x9_9 = x8_2 - x1_2
        
        if (x8_2 == x1_2)
            x2 = 0
        else
            void* x11_7
            
            x11_7 = x9_9 s>= 0 ? x9_9 : -ffffffffffffffff
            
            void* x10_5 = x1_2 - x8_2
            void* x11_8
            
            x11_8 = x11_7 s< 1 ? x11_7 : 1
            
            x2 = x9_9 s>> 2
            void* x9_10
            
            x9_10 = x10_5 s> x9_9 ? x10_5 : x9_9
            
            int64_t i_3 = x11_8 * (x9_10 u>> 2)
            uint64_t x10_6 = 1
            int64_t i_2
            
            do
                int32_t x11_9 = *(x1_2 - 4 + (i_3 << 2))
                i_2 = i_3
                i_3 -= 1
                x10_6 = zx.q(x10_6.d) & zx.q(((x11_9 - 1) & not.d(x11_9)) s>> 0x1f)
                x2 -= x10_6
            while (i_2 != 1)
        
        *(arg4 + 0x18) = x2
    
    int128_t v0_1
    int128_t v1_1
    v0_1, v1_1 = Botan::BigInt::add2(&var_78, x1_2, x2, zx.q(arg4[2].d != 1 ? 1 : 0))
    uint64_t var_48_1
    int64_t var_40
    uint64_t x0_3
    
    if (&var_50 == arg4)
        x0_3 = *arg4
        
        if (x0_3 != 0)
            var_48_1 = x0_3
            Botan::deallocate_memory(x0_3, (var_40 - x0_3) s>> 2, 4)
    else
        v1_1 = *arg4
        *arg4 = var_50.o
        var_50.o = v1_1
        int64_t x11_11 = arg4[1].q
        int64_t x9_12 = *(arg4 + 0x18)
        x0_3 = v1_1.q
        arg4[1].q = var_40
        int64_t var_38
        *(arg4 + 0x18) = var_38
        int64_t var_38_1 = x9_12
        int32_t var_30
        arg4[2].d = var_30
        int32_t var_30_1 = arg4[2].d
        
        if (x0_3 != 0)
            var_48_1 = x0_3
            Botan::deallocate_memory(x0_3, (x11_11 - x0_3) s>> 2, 4)
    arg1 = var_78
    
    if (arg1 != 0)
        void* var_70_1 = arg1
        int64_t var_68
        Botan::deallocate_memory(arg1, (var_68 - arg1) s>> 2, 4)
