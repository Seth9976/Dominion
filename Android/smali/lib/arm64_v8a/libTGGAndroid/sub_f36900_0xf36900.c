// 函数: sub_f36900
// 地址: 0xf36900
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x21 = *(arg1 + 8)
int64_t* x20 = **(arg1 + 0x10)
Botan_FFI::safe_get<Botan::BigInt, 3358112210u>(*x21)
void* var_78
Botan::Modular_Reducer::Modular_Reducer(&var_78)
Botan::BigInt* x0_4 = Botan_FFI::safe_get<Botan::BigInt, 3358112210u>(x21[1])
Botan_FFI::safe_get<Botan::BigInt, 3358112210u>(x21[2])
Botan::Modular_Reducer::multiply(&var_78, x0_4)
void* var_a0
void* var_98_1
int64_t var_90
void* x0_8

if (&var_a0 == x20)
    x0_8 = var_a0
    
    if (x0_8 != 0)
        var_98_1 = x0_8
        Botan::deallocate_memory(x0_8, (var_90 - x0_8) s>> 2, 4)
else
    x0_8 = *x20
    *x20 = var_a0
    var_a0 = x0_8
    int64_t x10_1 = x20[2]
    int64_t x9_1 = x20[3]
    int64_t var_98
    x20[1] = var_98
    x20[2] = var_90
    int64_t var_88
    x20[3] = var_88
    int64_t var_88_1 = x9_1
    int32_t var_80
    x20[4].d = var_80
    int32_t var_80_1 = x20[4].d
    
    if (x0_8 != 0)
        var_98_1 = x0_8
        Botan::deallocate_memory(x0_8, (x10_1 - x0_8) s>> 2, 4)
void* var_50

if (var_50 != 0)
    void* var_48_1 = var_50
    int64_t var_40
    Botan::deallocate_memory(var_50, (var_40 - var_50) s>> 2, 4)

void* x0_10 = var_78

if (x0_10 != 0)
    void* var_70_1 = x0_10
    int64_t var_68
    Botan::deallocate_memory(x0_10, (var_68 - x0_10) s>> 2, 4)

return 0
