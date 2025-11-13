// 函数: sub_f39e80
// 地址: 0xf39e80
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
int64_t x0_3 = Botan::X509::load_key(&var_58)
int32_t x20_1
void* var_48_2
void* x0_5

if (x0_3 == 0)
    x20_1 = -0x64
    x0_5 = var_50_1
    var_58 = _vtable_for_Botan::DataSource_Memory + 0x10
    
    if (x0_5 != 0)
        var_48_2 = x0_5
        Botan::deallocate_memory(x0_5, var_40_1 - x0_5, 1)
else
    void** x0_4 = operator new(0x18)
    x0_4[2] = x0_3
    x0_4[1].d = 0x2c286519
    *x0_4 = _vtable_for_botan_pubkey_struct + 0x10
    x20_1 = 0
    **(arg1 + 0x18) = x0_4
    x0_5 = var_50_1
    var_58 = _vtable_for_Botan::DataSource_Memory + 0x10
    
    if (x0_5 != 0)
        var_48_2 = x0_5
        Botan::deallocate_memory(x0_5, var_40_1 - x0_5, 1)
return zx.q(x20_1)
