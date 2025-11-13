// 函数: sub_f2e98c
// 地址: 0xf2e98c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x21 = *(arg1 + 8)
uint64_t x20 = *(arg1 + 0x10)
void* __offset(vtable_for_Botan::DataSource_Memory, 0x10) var_58 =
    _vtable_for_Botan::DataSource_Memory + 0x10
void* var_50_1
__builtin_memset(&var_50_1, 0, 0x18)
void* var_40_1

if (x20 != 0)
    if ((x20 & 0xffffffff80000000) != 0)
        sub_c776cc(std::__ndk1::__vector_base_common<true>::__throw_length_error())
        noreturn
    
    void* x0_1 = Botan::allocate_memory(x20, 1)
    void* x23_1 = x0_1 + x20
    var_50_1 = x0_1
    var_40_1 = x23_1
    memcpy(x0_1, x21, x20)
    void* var_48_1 = x23_1

int64_t var_38 = 0
Botan::DataSource* x0_2 = operator new(0x88)
Botan::X509_CRL::X509_CRL(x0_2)
Botan::DataSource* var_60 = x0_2
int64_t* x0_3 = operator new(0x18)
var_60 = nullptr
x0_3[2] = x0_2
x0_3[1].d = 0x2c628910
*x0_3 = _vtable_for_botan_x509_crl_struct + 0x10
**(arg1 + 0x18) = x0_3
sub_f2884c(&var_60, 0)
void* x0_5 = var_50_1
void* __offset(vtable_for_Botan::DataSource_Memory, 0x10) var_58_1 =
    _vtable_for_Botan::DataSource_Memory + 0x10

if (x0_5 != 0)
    void* var_48_2 = x0_5
    Botan::deallocate_memory(x0_5, var_40_1 - x0_5, 1)

return 0
