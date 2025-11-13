// 函数: sub_f36408
// 地址: 0xf36408
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x20 = *(arg1 + 8)
int64_t* x21 = **(arg1 + 0x10)
Botan::power_mod(Botan_FFI::safe_get<Botan::BigInt, 3358112210u>(*x20), 
    Botan_FFI::safe_get<Botan::BigInt, 3358112210u>(x20[1]), 
    Botan_FFI::safe_get<Botan::BigInt, 3358112210u>(x20[2]))
void* var_58
void* var_50_1
int64_t var_48
void* x0_7

if (&var_58 == x21)
    x0_7 = var_58
    
    if (x0_7 != 0)
        var_50_1 = x0_7
        Botan::deallocate_memory(x0_7, (var_48 - x0_7) s>> 2, 4)
else
    x0_7 = *x21
    *x21 = var_58
    var_58 = x0_7
    int64_t x10_1 = x21[2]
    int64_t x9_1 = x21[3]
    int64_t var_50
    x21[1] = var_50
    x21[2] = var_48
    int64_t var_40
    x21[3] = var_40
    int64_t var_40_1 = x9_1
    int32_t var_38
    x21[4].d = var_38
    int32_t var_38_1 = x21[4].d
    
    if (x0_7 != 0)
        var_50_1 = x0_7
        Botan::deallocate_memory(x0_7, (x10_1 - x0_7) s>> 2, 4)
return 0
