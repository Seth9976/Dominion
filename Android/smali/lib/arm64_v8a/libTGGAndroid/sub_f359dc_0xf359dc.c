// 函数: sub_f359dc
// 地址: 0xf359dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x20 = *(arg1 + 8)
Botan_FFI::botan_struct<Botan::BigInt, 3358112210u>* x0 = x20[1]
int64_t* x19 = **(arg1 + 0x10)
int32_t var_48

if (*x20 == x0)
    var_48 = x20[2].d
    Botan::BigInt::add(x19, &var_48, 1)
else
    Botan::BigInt* x0_1 = Botan_FFI::safe_get<Botan::BigInt, 3358112210u>(x0)
    uint32_t var_14 = x20[2].d
    Botan::BigInt::add2(x0_1, &var_14, 1, 1)
    void* var_40_1
    int64_t var_38
    void* x0_2
    
    if (&var_48 == x19)
        x0_2 = var_48.q
        
        if (x0_2 != 0)
            var_40_1 = x0_2
            Botan::deallocate_memory(x0_2, (var_38 - x0_2) s>> 2, 4)
    else
        x0_2 = *x19
        *x19 = var_48.q
        var_48.q = x0_2
        int64_t x10_1 = x19[2]
        int64_t x9_1 = x19[3]
        int64_t var_40
        x19[1] = var_40
        x19[2] = var_38
        int64_t var_30
        x19[3] = var_30
        int64_t var_30_1 = x9_1
        int32_t var_28
        x19[4].d = var_28
        int32_t var_28_1 = x19[4].d
        
        if (x0_2 != 0)
            var_40_1 = x0_2
            Botan::deallocate_memory(x0_2, (x10_1 - x0_2) s>> 2, 4)
return 0
