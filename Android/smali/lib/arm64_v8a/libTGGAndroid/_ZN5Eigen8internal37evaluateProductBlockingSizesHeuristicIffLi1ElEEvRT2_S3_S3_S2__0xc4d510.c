// 函数: _ZN5Eigen8internal37evaluateProductBlockingSizesHeuristicIffLi1ElEEvRT2_S3_S3_S2_
// 地址: 0xc4d510
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(*guard_variable_for_Eigen::internal::manage_caching_sizes(Eigen::Action, int64_t*, int64_t*, int64_t*)::m_cacheSizes)
        & 1) == 0)
    int64_t& var_8_1 = arg1
    int64_t& var_28_1 = arg3
    int64_t& var_20_1 = arg2
    int64_t var_18_1 = arg4
    int32_t x0_1
    int128_t v0_1
    x0_1, v0_1 = __cxa_guard_acquire(guard_variable_for_Eigen::internal::manage_caching_sizes(Eigen::Action, int64_t*, int64_t*, int64_t*)::m_cacheSizes)
    arg2 = var_20_1
    arg4 = var_18_1
    arg3 = var_28_1
    arg1 = var_8_1
    
    if (x0_1 != 0)
        v0_1 = data_71b950
        *(Eigen::internal::manage_caching_sizes(Eigen::Action, int64_t*, int64_t*, int64_t*)::m_cacheSizes
            + 0x10) = 0x80000
        *Eigen::internal::manage_caching_sizes(Eigen::Action, int64_t*, int64_t*, int64_t*)::m_cacheSizes =
            v0_1
        __cxa_guard_release(
            guard_variable_for_Eigen::internal::manage_caching_sizes(Eigen::Action, int64_t*, int64_t*, int64_t*)::m_cacheSizes, 
            arg2, arg3, arg4)
        arg2 = var_20_1
        arg4 = var_18_1
        arg1 = var_8_1
        arg3 = var_28_1

int64_t x10_5 = *
    Eigen::internal::manage_caching_sizes(Eigen::Action, int64_t*, int64_t*, int64_t*)::m_cacheSizes
int64_t x8_1 = *(
    Eigen::internal::manage_caching_sizes(Eigen::Action, int64_t*, int64_t*, int64_t*)::m_cacheSizes
    + 8)
int64_t x9 = *(
    Eigen::internal::manage_caching_sizes(Eigen::Action, int64_t*, int64_t*, int64_t*)::m_cacheSizes
    + 0x10)

if (arg4 s< 2)
    uint64_t x11_7 = *arg2
    int64_t x13_4 = *arg3
    uint64_t x12_6 = *arg1
    uint64_t x13_5
    
    x13_5 = x11_7 s< x13_4 ? x13_4 : x11_7
    
    uint64_t x13_6
    
    x13_6 = x12_6 s< x13_5 ? x13_5 : x12_6
    
    if (x13_6 s>= 0x30)
        int64_t x14_2
        
        if (x10_5 - 0xc0 s< 0)
            x14_2 = x10_5 - 0x81
        else
            x14_2 = x10_5 - 0xc0
        
        uint64_t x14_4 = x14_2 s>> 6 & 0xfffffffffffffff8
        uint64_t x15_1
        
        x15_1 = x14_4 s> 1 ? x14_4 : 1
        
        uint64_t x14_5
        
        if (x12_6 s<= x15_1)
            x14_5 = x12_6
        else
            int64_t x16_1 = x12_6 s% x15_1
            x14_5 = x15_1
            
            if (x16_1 != 0)
                x14_5 = x15_1 - (((x15_1 + not.q(x16_1)) s/ (((x12_6 s/ x15_1) << 3) + 8)) << 3)
            
            *arg1 = x14_5
            x11_7 = *arg2
        
        struct Elf64_Sym* x13_8 = x10_5 - 0xc0 - ((x11_7 * x14_5) << 2)
        uint64_t x16_3 = 0x180000 u/ (x14_5 << 3)
        uint64_t temp1_1 = x14_5 << 4
        uint64_t x15_3
        
        if (x13_8 s< temp1_1)
            x15_3 = x15_1 << 4
        else
            x15_3 = x14_5 << 2
        
        struct Elf64_Sym* const x13_9
        
        if (x13_8 s< temp1_1)
            x13_9 = &__elf_symbol_table[0x5535]
        else
            x13_9 = x13_8
        
        uint64_t x13_10 = x13_9 u/ x15_3
        int64_t x15_4 = *arg3
        uint64_t x13_11
        
        x13_11 = x13_10 s< x16_3 ? x13_10 : x16_3
        
        int64_t x13_12 = x13_11 & 0xfffffffffffffffc
        
        if (x15_4 s> x13_12)
            int64_t x9_3 = x15_4 s% x13_12
            
            if (x9_3 != 0)
                x13_12 -= ((x13_12 - x9_3) s/ (((x15_4 s/ x13_12) << 2) + 4)) << 2
            
            *arg3 = x13_12
            return 
        
        if (x12_6 == x14_5)
            int64_t x14_8 = (x12_6 * x15_4) << 2
            uint64_t x13_14 = x11_7
            
            if (x14_8 s>= 0x401)
                x10_5 = 0x180000
                
                if (x9 == 0)
                    x13_14 = x11_7
                else
                    x13_14 = x11_7
                    
                    if (x14_8 s<= 0x8000)
                        x13_14 = x11_7 s< 0x240 ? x11_7 : 0x240
                        
                        x10_5 = x8_1
            
            uint64_t x8_14 = x10_5 u/ (x12_6 * 0xc)
            uint64_t x8_6
            
            x8_6 = x13_14 s< x8_14 ? x13_14 : x8_14
            
            if (x8_6 s>= 0xd)
                x8_6 = x8_6 u/ 0xc * 0xc
            label_c4d804:
                int64_t x10_6 = x11_7 s% x8_6
                
                if (x10_6 != 0)
                    *arg2 = x8_6 - (x8_6 - x10_6) s/ (0xc + x11_7 s/ x8_6 * 0xc) * 0xc
                    return 
                
                *arg2 = x8_6
                return 
            
            if (x8_6 != 0)
                goto label_c4d804
else
    int64_t x12_1
    
    if (x10_5 - 0xc0 s< 0)
        x12_1 = x10_5 - 0x81
    else
        x12_1 = x10_5 - 0xc0
    
    int64_t x12_2 = x12_1 s>> 6
    int64_t x11 = *arg1
    int64_t x12_3
    
    x12_3 = x12_2 s< 0x140 ? x12_2 : 0x140
    
    int64_t x12_4
    
    x12_4 = x12_3 s> 8 ? x12_3 : 8
    
    if (x12_4 s< x11)
        x11 = x12_4 & 0x7ffffffffffffff8
        *arg1 = x11
    
    int64_t x12_5 = *arg3
    uint64_t x11_2 = (x8_1 - x10_5) u/ (x11 << 4)
    int64_t x13_2 = (arg4 - 1 + x12_5) s/ arg4
    int64_t x9_1
    
    if (x11_2 s<= x13_2)
        uint64_t x11_12
        
        if (x11_2 s< 0)
            x11_12 = x11_2 + 3
        else
            x11_12 = x11_2
        
        x9_1 = x9 - x8_1
        *arg3 = x11_12 & 0xfffffffffffffffc
        
        if (x9 s> x8_1)
        label_c4d678:
            int64_t x8_2 = *arg2
            uint64_t x9_2 = x9_1 u/ ((arg4 * *arg1) << 2)
            int64_t x10_3 = (arg4 - 1 + x8_2) s/ arg4
            
            if (x9_2 s>= 0xc && x9_2 s< x10_3)
                *arg2 = x9_2 u/ 0xc * 0xc
                return 
            
            int64_t x9_9 = (x10_3 + 0xb) s/ 0xc * 0xc
            int64_t x8_11
            
            x8_11 = x9_9 s< x8_2 ? x9_9 : x8_2
            
            *arg2 = x8_11
    else
        int64_t x11_4
        
        if (x13_2 + 3 s< 0)
            x11_4 = x13_2 + 6
        else
            x11_4 = x13_2 + 3
        
        int64_t x11_5 = x11_4 & 0xfffffffffffffffc
        int64_t x11_6
        
        x11_6 = x11_5 s< x12_5 ? x11_5 : x12_5
        
        x9_1 = x9 - x8_1
        *arg3 = x11_6
        
        if (x9 s> x8_1)
            goto label_c4d678
