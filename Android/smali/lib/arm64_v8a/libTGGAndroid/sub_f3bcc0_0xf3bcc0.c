// 函数: sub_f3bcc0
// 地址: 0xf3bcc0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x20 = *(arg1 + 8)
void* var_48
sub_f3bdd4(&var_48, **(arg1 + 0x10), &x20[1])
int64_t* x0_2 = Botan_FFI::safe_get<Botan::BigInt, 3358112210u>(*x20)
void* var_40_1
int64_t var_38
void* x0_3

if (x0_2 == &var_48)
    x0_3 = var_48
    
    if (x0_3 != 0)
        var_40_1 = x0_3
        Botan::deallocate_memory(x0_3, (var_38 - x0_3) s>> 2, 4)
else
    x0_3 = *x0_2
    *x0_2 = var_48
    var_48 = x0_3
    int64_t x11_1 = x0_2[2]
    int64_t x10_1 = x0_2[3]
    int64_t var_40
    x0_2[1] = var_40
    x0_2[2] = var_38
    int64_t var_30
    x0_2[3] = var_30
    int64_t var_30_1 = x10_1
    int32_t var_28
    x0_2[4].d = var_28
    int32_t var_28_1 = x0_2[4].d
    
    if (x0_3 != 0)
        var_40_1 = x0_3
        Botan::deallocate_memory(x0_3, (x11_1 - x0_3) s>> 2, 4)
return 0
