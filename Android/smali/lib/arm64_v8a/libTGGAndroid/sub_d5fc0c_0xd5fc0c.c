// 函数: sub_d5fc0c
// 地址: 0xd5fc0c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x9 = *arg2
int64_t x8 = arg2[1]
void* x10 = x8 - x9
int64_t x11 = x10 << 3
int64_t x24 = x11 - arg3

if (x11 u<= arg3)
    return std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::vector(arg1) __tailcall

uint64_t x23 = x24 u>> 3
uint64_t x22 = x10 - x23
char* var_58_1
__builtin_memset(&var_58_1, 0, 0x18)
char* var_50_1
char* var_48_1
int64_t x8_3
char* x21

if (x10 == x23)
    x21 = nullptr
    x8_3 = x24 & 7
    
    if (x8 - x23 != x9)
    label_d5fcd0:
        *x21 = *x9
        char* x9_3 = *arg2
        
        if (arg2[1] - x23 - x9_3 != 1)
            int64_t i = 1
            
            do
                var_58_1[i] = x9_3[i]
                x9_3 = *arg2
                i += 1
            while (i != arg2[1] - x23 - x9_3)
else
    if ((x22 & 0xffffffff80000000) != 0)
        sub_1101e04(std::__ndk1::__vector_base_common<true>::__throw_length_error())
        noreturn
    
    char* x0_1 = Botan::allocate_memory(x22, 1)
    char* x25_1 = &x0_1[x22]
    x21 = x0_1
    var_58_1 = x0_1
    var_48_1 = x25_1
    memset(x0_1, 0, x22)
    var_50_1 = x25_1
    x9 = *arg2
    x8_3 = x24 & 7
    
    if (arg2[1] - x23 != x9)
        goto label_d5fcd0
char* x9_5
char* x11_6

if (x8_3 == 0)
    x9_5 = var_58_1
    x11_6 = var_50_1
else
    x9_5 = var_58_1
    x11_6 = var_50_1
    
    if (x11_6 == x9_5)
        x9_5 = x11_6
    else
        int64_t i_1 = 0
        uint8_t x13_2 = 0
        
        do
            uint32_t x14_2 = zx.d(x9_5[i_1])
            x9_5[i_1] = (x14_2 u>> x8_3.d).b | x13_2
            x9_5 = var_58_1
            x11_6 = var_50_1
            i_1 += 1
            x13_2 = (x14_2 << (8 - x8_3.d)).b
        while (i_1 != x11_6 - x9_5)

*arg1 = x9_5
arg1[1] = x11_6
arg1[2] = var_48_1
