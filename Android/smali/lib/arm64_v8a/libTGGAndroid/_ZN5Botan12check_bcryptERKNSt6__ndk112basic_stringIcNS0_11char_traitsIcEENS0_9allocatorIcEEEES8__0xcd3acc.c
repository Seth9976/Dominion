// 函数: _ZN5Botan12check_bcryptERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEES8_
// 地址: 0xcd3acc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x8 = zx.d(*arg2)
int32_t x22
void* __offset(
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x1) x8_3

if ((x8 & 1) != 0)
    if (*(arg2 + 8) != 0x3c)
        x22 = 0
    else
        x8_3 = *(arg2 + 0x10)
        
        if (zx.d(*x8_3) != 0x24 || zx.d(*(x8_3 + 1)) != 0x32 || zx.d(*(x8_3 + 3)) != 0x24
                || zx.d(*(x8_3 + 6)) != 0x24)
            x22 = 0
        else
        label_cd3b78:
            x22 = 0
            int32_t x8_5 = zx.d(*(x8_3 + 2)) - 0x61
            
            if (x8_5 u<= 0x18 && (1 << x8_5 & 0x1000003) != 0)
                char var_58
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    &var_58, arg2, 4, 2)
                int16_t x0_2 = Botan::to_uint16(&var_58)
                void* var_48
                
                if ((zx.d(var_58) & 1) != 0)
                    operator delete(var_48)
                
                char var_90
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    &var_90, arg2, 7, 0x16)
                uint64_t x1_2 = 0
                char* x8_8 = &var_90 | 1
                char* var_80
                uint64_t x10_3
                
                while (true)
                    x10_3 = zx.q(var_90)
                    char* x11_1
                    
                    if ((x10_3.d & 1) == 0)
                        x11_1 = x8_8
                        
                        if (x1_2 == x10_3 u>> 1)
                            break
                    else
                        int64_t var_88
                        
                        if (x1_2 == var_88)
                            break
                        
                        x11_1 = var_80
                    
                    x11_1[x1_2] = *(&data_84a561 + zx.q(x11_1[x1_2]))
                    x1_2 += 1
                
                char* x0_6
                
                if ((x10_3.d & 1) == 0)
                    x0_6 = x8_8
                else
                    x0_6 = var_80
                
                Botan::base64_decode(x0_6, x1_2, true)
                void* i_6 = var_58.q
                uint64_t var_70_1 = 0
                int64_t var_68_1 = 0
                uint64_t var_78 = 0
                void* i_4
                uint64_t x24_1 = i_4 - i_6
                
                if (i_4 != i_6)
                    if ((x24_1 & 0xffffffff80000000) != 0)
                        int64_t* x0_14 =
                            std::__ndk1::__vector_base_common<true>::__throw_length_error()
                        uint64_t x8_17 = var_78
                        
                        if (x8_17 != 0)
                            uint64_t var_70_4 = x8_17
                            operator delete(x8_17)
                        
                        sub_1101e04(x0_14)
                        noreturn
                    
                    uint64_t x0_8
                    int128_t v0_1
                    int128_t v1_1
                    x0_8, v0_1, v1_1 = operator new(x24_1)
                    var_78 = x0_8
                    uint64_t var_70_2 = x0_8
                    void* var_68_2 = x0_8 + x24_1
                    uint64_t x9_10
                    
                    if (i_6 == i_4)
                        x9_10 = x0_8
                    else
                        void* i_7
                        
                        if (x24_1 u>= 0x20)
                            if (x0_8 u< i_4)
                                i_7 = i_6
                            
                            if (x0_8 u< i_4 && i_6 u< i_4 + x0_8 - i_6)
                                goto label_cd3d18
                            
                            void* i_5 = x24_1 & 0xffffffffffffffe0
                            void* x11_3 = i_6 + 0x10
                            x9_10 = x0_8 + i_5
                            i_7 = i_6 + i_5
                            void* x12_1 = x0_8 + 0x10
                            void* i_3 = i_5
                            void* i
                            
                            do
                                v0_1 = *(x11_3 - 0x10)
                                v1_1 = *x11_3
                                x11_3 += 0x20
                                i = i_3
                                i_3 -= 0x20
                                *(x12_1 - 0x10) = v0_1
                                *x12_1 = v1_1
                                x12_1 += 0x20
                            while (i != 0x20)
                            x0_8 = x9_10
                            
                            if (x24_1 != i_5)
                                goto label_cd3d18
                        else
                            i_7 = i_6
                        label_cd3d18:
                            x9_10 = x0_8
                            
                            do
                                char x10_4 = *i_7
                                i_7 += 1
                                *x9_10 = x10_4
                                x9_10 += 1
                            while (i_4 != i_7)
                    
                    var_70_1 = x9_10
                
                if (i_6 != 0)
                    i_4 = i_6
                    Botan::deallocate_memory(i_6, var_48 - i_6, 1)
                
                if ((zx.d(var_90) & 1) != 0)
                    operator delete(var_80)
                
                uint64_t x0_13 = var_78
                
                if (var_70_1 - x0_13 != 0x10)
                    x22 = 0
                else
                    sub_cd34a0(&var_58, arg1, &var_78, x0_2, arg2, x24_1)
                    uint64_t x8_16 = zx.q(var_58)
                    void* __offset(
                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
                        0x1) x9_12
                    
                    if ((zx.d(*arg2) & 1) != 0)
                        x9_12 = *(arg2 + 0x10)
                    else
                        x9_12 = arg2 + 1
                    
                    int32_t temp0_1 = x8_16.d & 1
                    void* x10_6
                    
                    if (temp0_1 == 0)
                        x10_6 = &var_58 | 1
                    else
                        x10_6 = var_48
                    
                    void* i_2
                    
                    if (temp0_1 == 0)
                        i_2 = x8_16 u>> 1
                    else
                        i_2 = i_4
                    
                    char var_5c_1 = 0
                    
                    if (i_2 != 0)
                        void* i_1
                        
                        do
                            char x12_3 = *x9_12
                            x9_12 += 1
                            char x13_2 = *x10_6
                            x10_6 += 1
                            i_1 = i_2
                            i_2 -= 1
                            var_5c_1 |= x13_2 ^ x12_3
                        while (i_1 != 1)
                    
                    x22 = zx.d(var_5c_1) == 0 ? 1 : 0
                    
                    if ((x8_16.d & 1) != 0)
                        operator delete(var_48)
                    
                    x0_13 = var_78
                
                if (x0_13 != 0)
                    uint64_t var_70_3 = x0_13
                    operator delete(x0_13)
else if ((x8 & 0xfe) != 0x78)
    x22 = 0
else
    x8_3 = arg2 + 1
    
    if (zx.d(*x8_3) == 0x24 && zx.d(*(arg2 + 2)) == 0x32 && zx.d(*(arg2 + 4)) == 0x24
            && zx.d(*(arg2 + 7)) == 0x24)
        goto label_cd3b78
    
    x22 = 0
return zx.q(x22)
