// 函数: sub_daad20
// 地址: 0xdaad20
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x22 = arg2[1] - *arg2
(*(*arg3 + 0x18))(arg3)
int64_t var_48
int64_t var_40
int64_t var_38

if (var_48 u<= x22 && var_40 u>= x22 && x22 u% var_38 == 0)
    return std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::vector(arg1)

(*(*arg3 + 0x18))(arg3)
int64_t var_40_1 = 0
uint64_t var_58

if (var_58 == 0)
    Botan::assertion_failure("r.size() > 0", &data_793a18, "aead_key", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xc0c2)
else if ((var_58 & 0xffffffff80000000) == 0)
    char* x0_3 = Botan::allocate_memory(var_58, 1)
    void* x23_1 = &x0_3[var_58]
    char* x21_1 = x0_3
    void* var_38_1 = x23_1
    int64_t result
    int128_t v0_1
    result, v0_1 = memset(x0_3, 0, var_58)
    char* x8_6 = *arg2
    
    if (arg2[1] == x8_6)
        v0_1.q = x23_1
        v0_1:8.q = x23_1
    else
        *x21_1 ^= *x8_6
        char* x9_5 = *arg2
        
        if (arg2[1] - x9_5 != 1)
            int64_t i = 1
            
            do
                char x9_6 = x9_5[i]
                int64_t x10_3 = i u% (x23_1 - x0_3)
                i += 1
                x0_3[x10_3] ^= x9_6
                x9_5 = *arg2
            while (i != arg2[1] - x9_5)
        
        x21_1 = x0_3
        v0_1 = x23_1.o
    
    *arg1 = x21_1
    *(arg1 + 8) = v0_1
    return result

sub_1101e04(std::__ndk1::__vector_base_common<true>::__throw_length_error())
noreturn
