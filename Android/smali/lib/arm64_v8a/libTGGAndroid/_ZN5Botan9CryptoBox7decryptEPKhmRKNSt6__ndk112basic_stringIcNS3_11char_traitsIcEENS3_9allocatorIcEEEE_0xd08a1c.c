// 函数: _ZN5Botan9CryptoBox7decryptEPKhmRKNSt6__ndk112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE
// 地址: 0xd08a1c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::CryptoBox::decrypt_bin(arg1, arg2, arg3)
void* result_1
int64_t var_40
size_t x20 = var_40 - result_1

if (x20 u>= -0x10)
    sub_c776cc(std::__ndk1::__basic_string_common<true>::__throw_length_error())
    noreturn

void* result
void* result_2
int64_t var_38
char* entry_x8
void* x19_1

if (x20 u>= 0x17)
    uint64_t x22_1 = (x20 + 0x10) & 0xfffffffffffffff0
    void* x0_1 = operator new(x22_1)
    *(entry_x8 + 8) = x20
    *(entry_x8 + 0x10) = x0_1
    *entry_x8 = x22_1 | 1
    x19_1 = x0_1
label_d08a98:
    memcpy(x19_1, result_1, x20)
    result = result_1
    *(x19_1 + x20) = 0
    
    if (result != 0)
        result_2 = result
        return Botan::deallocate_memory(result, var_38 - result, 1)
else
    *entry_x8 = (x20.d << 1).b
    x19_1 = &entry_x8[1]
    
    if (x20 != 0)
        goto label_d08a98
    
    result = result_1
    *(x19_1 + x20) = 0
    
    if (result != 0)
        result_2 = result
        return Botan::deallocate_memory(result, var_38 - result, 1)
return result
