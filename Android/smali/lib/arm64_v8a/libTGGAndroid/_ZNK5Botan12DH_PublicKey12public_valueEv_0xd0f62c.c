// 函数: _ZNK5Botan12DH_PublicKey12public_valueEv
// 地址: 0xd0f62c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
void* x20 = entry_x0 + *(*entry_x0 - 0x88)
Botan::DL_Group::data()
int64_t x0_1 = Botan::BigInt::bits()
int64_t x8_4

if ((x0_1 & 7) == 0)
    x8_4 = 0
else
    x8_4 = 8 - (x0_1 & 7)

char* result = Botan::BigInt::encode_1363(x20 + 8, (x8_4 + x0_1) u>> 3)
int64_t* entry_x8
__builtin_memset(entry_x8, 0, 0x18)
void* var_48
void* var_40
uint64_t x21 = var_40 - var_48

if (var_40 != var_48)
    if ((x21 & 0xffffffff80000000) != 0)
        sub_c776cc(std::__ndk1::__vector_base_common<true>::__throw_length_error())
        noreturn
    
    int128_t v0_1
    int128_t v1_1
    result, v0_1, v1_1 = operator new(x21)
    *entry_x8 = result
    entry_x8[1] = result
    entry_x8[2] = &result[x21]
    char* result_1
    
    if (var_48 == var_40)
        result_1 = result
    else
        char* x8_7
        
        if (x21 u>= 0x20)
            if (result u< var_40)
                x8_7 = var_48
            
            if (result u< var_40 && var_48 u< var_40 + result - var_48)
                goto label_d0f728
            
            int64_t i_2 = x21 & 0xffffffffffffffe0
            void* x11_1 = var_48 + 0x10
            result_1 = &result[i_2]
            x8_7 = var_48 + i_2
            void* x12_1 = &result[0x10]
            int64_t i_1 = i_2
            int64_t i
            
            do
                v0_1 = *(x11_1 - 0x10)
                v1_1 = *x11_1
                x11_1 += 0x20
                i = i_1
                i_1 -= 0x20
                *(x12_1 - 0x10) = v0_1
                *x12_1 = v1_1
                x12_1 += 0x20
            while (i != 0x20)
            result = result_1
            
            if (x21 != i_2)
                goto label_d0f728
        else
            x8_7 = var_48
        label_d0f728:
            result_1 = result
            
            do
                char x10_1 = *x8_7
                x8_7 = &x8_7[1]
                *result_1 = x10_1
                result_1 = &result_1[1]
            while (var_40 != x8_7)
    
    entry_x8[1] = result_1

if (var_48 == 0)
    return result

void* var_40_1 = var_48
int64_t var_38
return Botan::deallocate_memory(var_48, var_38 - var_48, 1)
