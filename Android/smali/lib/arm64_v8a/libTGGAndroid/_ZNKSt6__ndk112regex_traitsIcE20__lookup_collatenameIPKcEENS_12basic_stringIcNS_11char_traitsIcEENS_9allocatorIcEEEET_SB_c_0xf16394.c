// 函数: _ZNKSt6__ndk112regex_traitsIcE20__lookup_collatenameIPKcEENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEET_SB_c
// 地址: 0xf16394
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* entry_x19
char* var_8 = entry_x19
void* x21 = arg3 - arg2
int64_t var_58
void* var_48

if (x21 u>= -0x10)
    int64_t* x0_7 = std::__ndk1::__basic_string_common<true>::__throw_length_error()
    
    if ((zx.d(*entry_x19) & 1) != 0)
        operator delete(*(entry_x19 + 0x10))
        
        if ((zx.d(var_58.b) & 1) != 0)
        label_f165dc:
            operator delete(var_48)
            sub_1101e04(x0_7)
            noreturn
    else if ((zx.d(var_58.b) & 1) != 0)
        goto label_f165dc
    
    sub_1101e04(x0_7)
    noreturn

int64_t x23 = arg3
char const* x20 = arg1
void* var_50
void* x24

if (x21 u> 0x16)
    void* x25_1 = (x21 + 0x10) & 0xfffffffffffffff0
    arg1 = operator new(x25_1)
    x24 = arg1
    var_50 = x21
    var_48 = arg1
    var_58 = x25_1 | 1
    
    if (arg2 != x23)
        arg1 = memcpy(x24, arg2, x21)
        x24 += x21
else
    var_58.b = (x21.d << 1).b
    x24 = &var_58 | 1
    
    if (arg2 != x23)
        arg1 = memcpy(x24, arg2, x21)
        x24 += x21

*x24 = 0
uint32_t x8_3 = zx.d(var_58.b)
int128_t* entry_x8
__builtin_memset(entry_x8, 0, 0x18)
void* x0_2

if ((x8_3 & 1) != 0)
    if (var_50 != 0)
        x0_2 = var_48
    label_f16464:
        int128_t v0_1
        arg1, v0_1 = std::__ndk1::__get_collation_name(x0_2)
        int128_t var_70
        v0_1 = var_70
        var_70:1.b = 0
        *entry_x8 = v0_1
        uint64_t x21_1 = zx.q(*entry_x8)
        int64_t var_60
        entry_x8[1].q = var_60
        uint64_t x8_7
        
        if ((x21_1.d & 1) == 0)
            x8_7 = x21_1 u>> 1
        else
            x8_7 = *(entry_x8 + 8)
        
        if (x8_7 == 0)
            uint64_t x8_9 = zx.q(var_58.b)
            void* x1_1
            void* x8_10
            
            if ((x8_9.d & 1) != 0)
                x8_10 = var_50
                
                if (x8_10 u<= 2)
                    x1_1 = var_48
                label_f164f4:
                    int64_t* x0_4 = *(x20 + 0x10)
                    int128_t v0_2
                    arg1, v0_2 = (*(*x0_4 + 0x20))(x0_4, x1_1, x1_1 + x8_10)
                    
                    if ((x21_1.d & 1) != 0)
                        arg1, v0_2 = operator delete(entry_x8[1].q)
                    
                    v0_2 = var_70
                    var_70:1.b = 0
                    *entry_x8 = v0_2
                    uint32_t x8_11 = zx.d(*entry_x8)
                    entry_x8[1].q = var_60
                    
                    if ((x8_11 & 1) != 0)
                        int64_t x8_13 = *(entry_x8 + 8)
                        
                        if (x8_13 == 0xc || x8_13 == 1)
                            arg1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::operator=(
                                entry_x8)
                        else
                            *entry_x8[1].q = 0
                            *(entry_x8 + 8) = 0
                    else if (x8_11 u> 0x19 || (1 << x8_11 & 0x300000c) == 0)
                        *entry_x8 = 0
                    else
                        arg1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::operator=(
                            entry_x8)
            else if (x8_9.d u< 6)
                x1_1 = &var_58 | 1
                x8_10 = x8_9 u>> 1
                goto label_f164f4
else if (x8_3 u>= 2)
    x0_2 = &var_58 | 1
    goto label_f16464

if ((zx.d(var_58.b) & 1) == 0)
    return arg1

return operator delete(var_48)
