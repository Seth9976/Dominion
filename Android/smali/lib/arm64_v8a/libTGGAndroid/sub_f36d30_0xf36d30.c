// 函数: sub_f36d30
// 地址: 0xf36d30
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x19 = *(arg1 + 8)
int64_t* x20 = **(arg1 + 0x10)
Botan::gcd(Botan_FFI::safe_get<Botan::BigInt, 3358112210u>(*x19), 
    Botan_FFI::safe_get<Botan::BigInt, 3358112210u>(x19[1]))
void* var_48
void* var_40_1
int64_t var_38
void* x0_5

if (&var_48 == x20)
    x0_5 = var_48
    
    if (x0_5 != 0)
        var_40_1 = x0_5
        Botan::deallocate_memory(x0_5, (var_38 - x0_5) s>> 2, 4)
else
    x0_5 = *x20
    *x20 = var_48
    var_48 = x0_5
    int64_t x10_1 = x20[2]
    int64_t x9_1 = x20[3]
    int64_t var_40
    x20[1] = var_40
    x20[2] = var_38
    int64_t var_30
    x20[3] = var_30
    int64_t var_30_1 = x9_1
    int32_t var_28
    x20[4].d = var_28
    int32_t var_28_1 = x20[4].d
    
    if (x0_5 != 0)
        var_40_1 = x0_5
        Botan::deallocate_memory(x0_5, (x10_1 - x0_5) s>> 2, 4)
return 0
