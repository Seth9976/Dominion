// 函数: sub_f36ba4
// 地址: 0xf36ba4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x22 = *(arg1 + 8)
Botan::BigInt::random_integer(**(arg1 + 0x10), 
    Botan_FFI::safe_get<Botan::BigInt, 3358112210u>(x22[1]), 
    Botan_FFI::safe_get<Botan::BigInt, 3358112210u>(x22[2]))
int64_t* x0_6 = Botan_FFI::safe_get<Botan::BigInt, 3358112210u>(*x22)
void* var_58
void* var_50_1
int64_t var_48
void* x0_7

if (x0_6 == &var_58)
    x0_7 = var_58
    
    if (x0_7 != 0)
        var_50_1 = x0_7
        Botan::deallocate_memory(x0_7, (var_48 - x0_7) s>> 2, 4)
else
    x0_7 = *x0_6
    *x0_6 = var_58
    var_58 = x0_7
    int64_t x11_1 = x0_6[2]
    int64_t x10_1 = x0_6[3]
    int64_t var_50
    x0_6[1] = var_50
    x0_6[2] = var_48
    int64_t var_40
    x0_6[3] = var_40
    int64_t var_40_1 = x10_1
    int32_t var_38
    x0_6[4].d = var_38
    int32_t var_38_1 = x0_6[4].d
    
    if (x0_7 != 0)
        var_50_1 = x0_7
        Botan::deallocate_memory(x0_7, (x11_1 - x0_7) s>> 2, 4)
return 0
