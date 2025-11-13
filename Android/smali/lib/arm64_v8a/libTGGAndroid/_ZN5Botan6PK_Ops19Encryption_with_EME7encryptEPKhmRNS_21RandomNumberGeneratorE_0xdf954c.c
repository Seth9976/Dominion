// 函数: _ZN5Botan6PK_Ops19Encryption_with_EME7encryptEPKhmRNS_21RandomNumberGeneratorE
// 地址: 0xdf954c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x0 = (*(*arg1 + 0x28))()
int64_t* x9_2 = *(arg1 + 8)
int64_t entry_x3
(*(*x9_2 + 0x20))(x9_2, arg2, arg3, x0, entry_x3)
void* result_1
__builtin_memset(&result_1, 0, 0x18)
char* var_70
int64_t var_68
uint64_t x23_1 = var_68 - var_70
void* result_6
void* result_4
void* result_7

if (var_68 == var_70)
    result_6 = nullptr
    result_4 = nullptr
    
    if (var_70 != 0)
    label_df9678:
        char* var_68_1 = var_70
        int64_t var_60
        Botan::deallocate_memory(var_70, var_60 - var_70, 1)
        result_4 = result_1
        result_6 = result_7
else
    if ((x23_1 & 0xffffffff80000000) != 0)
        sub_c776cc(std::__ndk1::__vector_base_common<true>::__throw_length_error())
        noreturn
    
    void* result_3
    int128_t v0_1
    int128_t v1_1
    result_3, v0_1, v1_1 = operator new(x23_1)
    result_4 = result_3
    void* var_48_1 = result_3 + x23_1
    result_6 = result_3
    result_1 = result_3
    void* result_5 = result_3
    
    if (var_70 != var_68)
        result_6 = result_4
        char* x10_1 = var_70
        
        if (x23_1 u< 0x20)
        label_df9658:
            
            do
                char x11_1 = *x10_1
                x10_1 = &x10_1[1]
                *result_6 = x11_1
                result_6 += 1
            while (var_68 != x10_1)
        else
            if (result_4 u< var_68)
                result_6 = result_4
                x10_1 = var_70
            
            if (result_4 u< var_68 && var_70 u< var_68 + result_4 - var_70)
                goto label_df9658
            
            int64_t i_2 = x23_1 & 0xffffffffffffffe0
            void* x12_1 = &var_70[0x10]
            result_6 = result_4 + i_2
            x10_1 = &var_70[i_2]
            void* x13_1 = result_4 + 0x10
            int64_t i_1 = i_2
            int64_t i
            
            do
                v0_1 = *(x12_1 - 0x10)
                v1_1 = *x12_1
                x12_1 += 0x20
                i = i_1
                i_1 -= 0x20
                *(x13_1 - 0x10) = v0_1
                *x13_1 = v1_1
                x13_1 += 0x20
            while (i != 0x20)
            
            if (x23_1 != i_2)
                goto label_df9658
    
    result_7 = result_6
    
    if (var_70 != 0)
        goto label_df9678
(*(*arg1 + 0x30))(arg1, result_4, result_6 - result_4, entry_x3)
void* result = result_1

if (result == 0)
    return result

void* result_2 = result
return operator delete(result)
