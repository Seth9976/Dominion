// 函数: _ZN5Botan16X509_CertificateC1EPKhm
// 地址: 0xeb9960
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

__builtin_memset(&arg1[0x78], 0, 0x10)
*arg1 = _vtable_for_Botan::X509_Certificate + 0x10
__builtin_memset(&arg1[0x18], 0, 0x60)
*(arg1 + 8) = _vtable_for_Botan::AlgorithmIdentifier + 0x10
*(arg1 + 0x10) = _vtable_for_Botan::OID + 0x10
void* __offset(vtable_for_Botan::DataSource_Memory, 0x10) var_68 =
    _vtable_for_Botan::DataSource_Memory + 0x10
void* result_1
__builtin_memset(&result_1, 0, 0x18)
void* var_50_1
uint64_t entry_x2

if (entry_x2 != 0)
    if ((entry_x2 & 0xffffffff80000000) != 0)
        sub_c776cc(std::__ndk1::__vector_base_common<true>::__throw_length_error())
        noreturn
    
    void* result_3 = Botan::allocate_memory(entry_x2, 1)
    void* x25_1 = result_3 + entry_x2
    result_1 = result_3
    var_50_1 = x25_1
    memcpy(result_3, arg2, entry_x2)
    void* var_58_1 = x25_1

int64_t var_48 = 0
Botan::X509_Object::load_data(arg1)
void* result = result_1
void* __offset(vtable_for_Botan::DataSource_Memory, 0x10) var_68_1 =
    _vtable_for_Botan::DataSource_Memory + 0x10

if (result == 0)
    return result

void* result_2 = result
return Botan::deallocate_memory(result, var_50_1 - result, 1)
