// 函数: _ZN5Botan15Modular_ReducerC1ERKNS_6BigIntE
// 地址: 0xdd9814
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = 0
*(arg1 + 8) = 0
*(arg1 + 0x30) = 0
*(arg1 + 0x38) = 0
*(arg1 + 0x10) = 0
*(arg1 + 0x18) = -1
*(arg1 + 0x20) = 1
*(arg1 + 0x28) = 0
*(arg1 + 0x40) = -1
*(arg1 + 0x48) = 1
Botan::BigInt* x19 = arg1
int128_t var_60
int64_t* entry_x1

if (entry_x1[4].d != 0)
    int64_t i_5 = entry_x1[3]
    
    if (i_5 == -1)
        int64_t x9_1 = *entry_x1
        int64_t x11_1 = entry_x1[1]
        int64_t x10_1 = x11_1 - x9_1
        
        if (x11_1 == x9_1)
            i_5 = 0
            entry_x1[3] = 0
            
            if (i_5 == 0)
                goto label_dd991c
        else
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
            entry_x1[3] = i_5
            
            if (i_5 u> 1 || i_5 == 0)
                goto label_dd991c
    else if (i_5 u> 1 || i_5 == 0)
    label_dd991c:
        *(x19 + 0x50) = 0
        
        if (entry_x1[4].d != 0)
            int64_t i_10 = entry_x1[3]
            
            if (i_10 == -1)
                int64_t x9_4 = *entry_x1
                int64_t x11_7 = entry_x1[1]
                int64_t x10_6 = x11_7 - x9_4
                
                if (x11_7 == x9_4)
                    i_10 = 0
                    entry_x1[3] = 0
                else
                    int64_t x12_6
                    
                    x12_6 = x10_6 s>= 0 ? x10_6 : -1
                    
                    int64_t x11_8 = x9_4 - x11_7
                    int64_t x12_7
                    
                    x12_7 = x12_6 s< 1 ? x12_6 : 1
                    
                    i_10 = x10_6 s>> 2
                    int64_t x10_7
                    
                    x10_7 = x11_8 s> x10_6 ? x11_8 : x10_6
                    
                    int64_t i_7 = x12_7 * (x10_7 u>> 2)
                    uint64_t x11_9 = 1
                    int64_t i_1
                    
                    do
                        int32_t x12_8 = *(x9_4 - 4 + (i_7 << 2))
                        i_1 = i_7
                        i_7 -= 1
                        x11_9 = zx.q(x11_9.d) & zx.q(((x12_8 - 1) & not.d(x12_8)) s>> 0x1f)
                        i_10 -= x11_9
                    while (i_1 != 1)
                    entry_x1[3] = i_10
                    
                    if (i_10 u> 1)
                        goto label_dd99fc
                
            label_dd99b8:
                
                if (i_10 != 0)
                    int32_t* x9_6 = *entry_x1
                    int32_t x10_9 = 0
                    int64_t i_9 = i_10
                    int64_t i_2
                    
                    do
                        int32_t x12_10 = *x9_6
                        x9_6 = &x9_6[1]
                        i_2 = i_9
                        i_9 -= 1
                        int32_t x12_12 = ((x12_10 - 1) & not.d(x12_10)) s>> 0x1f
                        x10_9 = (x10_9 & x12_12) | (not.d(x12_12) & 1)
                    while (i_2 != 1)
                    
                    if (x10_9 s>= 1)
                        goto label_dd99fc
            else
                if (i_10 u<= 1)
                    goto label_dd99b8
                
            label_dd99fc:
                
                if (x19 != entry_x1)
                    entry_x1[1]
                    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::assign<uint32_t*>(
                        x19, *entry_x1)
                    i_10 = entry_x1[3]
                
                *(x19 + 0x18) = i_10
                *(x19 + 0x20) = entry_x1[4].d
                
                if (i_10 == -1)
                    int64_t x9_8 = *x19
                    int64_t x11_10 = *(x19 + 8)
                    int64_t x10_11 = x11_10 - x9_8
                    
                    if (x11_10 == x9_8)
                        i_10 = 0
                    else
                        int64_t x12_15
                        
                        x12_15 = x10_11 s>= 0 ? x10_11 : -1
                        
                        int64_t x11_11 = x9_8 - x11_10
                        int64_t x12_16
                        
                        x12_16 = x12_15 s< 1 ? x12_15 : 1
                        
                        i_10 = x10_11 s>> 2
                        int64_t x10_12
                        
                        x10_12 = x11_11 s> x10_11 ? x11_11 : x10_11
                        
                        int64_t i_8 = x12_16 * (x10_12 u>> 2)
                        uint64_t x11_12 = 1
                        int64_t i_3
                        
                        do
                            int32_t x12_17 = *(x9_8 - 4 + (i_8 << 2))
                            i_3 = i_8
                            i_8 -= 1
                            x11_12 = zx.q(x11_12.d) & zx.q(((x12_17 - 1) & not.d(x12_17)) s>> 0x1f)
                            i_10 -= x11_12
                        while (i_3 != 1)
                    
                    *(x19 + 0x18) = i_10
                
                int64_t x9_10 = *(x19 + 0x28)
                int64_t x10_14 = *(x19 + 0x30)
                uint64_t x21_2 = (i_10 & 0x3ffffffffffffff) << 1
                *(x19 + 0x50) = i_10
                int64_t x10_16 = (x10_14 - x9_10) s>> 2
                int32_t x8_3
                
                if (x10_16 u<= x21_2)
                    int64_t x8_4 = *(x19 + 0x38)
                    *(x19 + 0x40) = -1
                    
                    if (x21_2 u< (x8_4 - x9_10) s>> 2)
                        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(
                            arg1 + 0x28)
                    else if (((x21_2 | 1) & 0x7fffffffffffff8) + 8 u> x10_16)
                        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(
                            arg1 + 0x28)
                    else if (((x21_2 | 1) & 0x7fffffffffffff8) + 8 u< x10_16)
                        *(x19 + 0x30) = x9_10 + ((((x21_2 | 1) & 0x7fffffffffffff8) + 8) << 2)
                    
                    x8_3 = 1
                else
                    int32_t x8_2 = *(x9_10 + (x21_2 << 2))
                    *(x19 + 0x40) = -1
                    x8_3 = x8_2 | 1
                
                *(*(x19 + 0x28) + (x21_2 << 2)) = x8_3
                Botan::ct_divide(arg1 + 0x28, x19)
                int64_t var_50
                
                if (arg1 + 0x28 == &var_60)
                    arg1 = var_60.q
                    
                    if (arg1 != 0)
                        var_60:8.q = arg1
                        Botan::deallocate_memory(arg1, (var_50 - arg1) s>> 2, 4)
                else
                    arg1 = *(x19 + 0x28)
                    var_60.q = arg1
                    *(x19 + 0x28) = var_60
                    int64_t x11_13 = *(x19 + 0x38)
                    int64_t x9_12 = *(x19 + 0x40)
                    *(x19 + 0x38) = var_50
                    int64_t var_48
                    *(x19 + 0x40) = var_48
                    int64_t var_48_1 = x9_12
                    int32_t x9_13 = *(x19 + 0x48)
                    int32_t var_40
                    *(x19 + 0x48) = var_40
                    int32_t var_40_1 = x9_13
                    
                    if (arg1 != 0)
                        var_60:8.q = arg1
                        Botan::deallocate_memory(arg1, (x11_13 - arg1) s>> 2, 4)
        
        return 
    
    int32_t* x9_3 = *entry_x1
    int32_t x10_4 = 0
    int32_t x11_6
    int64_t i_4
    
    do
        int32_t x11_4 = *x9_3
        x9_3 = &x9_3[1]
        i_4 = i_5
        i_5 -= 1
        x11_6 = (x10_4 ^ 1) & ((x11_4 - 1) & not.d(x11_4)) s>> 0x1f
        x10_4 = x11_6 ^ 1
    while (i_4 != 1)
    
    if ((x11_6 & 0x80000000) == 0)
        goto label_dd991c

void** x0_4 = __cxa_allocate_exception(0x20)
int64_t x0_5
int128_t v0_2
x0_5, v0_2 = operator new(0x30)
(*"must be positive")[0].o
int64_t var_50_1 = x0_5
v0_2 = data_71cbb0
__builtin_strncpy(x0_5, "Modular_Reducer: modulus must be positive", 0x2a)
var_60 = v0_2
*x0_4 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_4[1])
*x0_4 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_4, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
