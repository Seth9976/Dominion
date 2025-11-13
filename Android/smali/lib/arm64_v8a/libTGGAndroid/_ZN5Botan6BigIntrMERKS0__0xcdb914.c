// 函数: _ZN5Botan6BigIntrMERKS0_
// 地址: 0xcdb914
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::BigInt* entry_x1
Botan::operator%(arg1, entry_x1)
int128_t var_50
int64_t var_40
void* x0

if (&var_50 == arg1)
    x0 = *arg1
    
    if (x0 != 0)
        var_50:8.q = x0
        Botan::deallocate_memory(x0, (var_40 - x0) s>> 2, 4)
else
    x0 = *arg1
    var_50.q = x0
    *arg1 = var_50
    int64_t x11_1 = *(arg1 + 0x10)
    int64_t x9_1 = *(arg1 + 0x18)
    *(arg1 + 0x10) = var_40
    int64_t var_38
    *(arg1 + 0x18) = var_38
    int64_t var_38_1 = x9_1
    int32_t x9_2 = *(arg1 + 0x20)
    int32_t var_30
    *(arg1 + 0x20) = var_30
    int32_t var_30_1 = x9_2
    
    if (x0 != 0)
        var_50:8.q = x0
        Botan::deallocate_memory(x0, (x11_1 - x0) s>> 2, 4)
return arg1
