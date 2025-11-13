// 函数: _ZN5Botan6BigIntC1EPKhmNS0_4BaseE
// 地址: 0xcdec0c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = 0
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
*(arg1 + 0x18) = -1
*(arg1 + 0x20) = 1
int32_t entry_x3
Botan::BigInt::decode(arg2, arg3, zx.q(entry_x3))
int128_t var_50
void* result
int64_t var_40

if (&var_50 == arg1)
    result = *arg1
    
    if (result != 0)
        var_50:8.q = result
        return Botan::deallocate_memory(result, (var_40 - result) s>> 2, 4)
else
    result = *arg1
    var_50.q = result
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
    
    if (result != 0)
        var_50:8.q = result
        return Botan::deallocate_memory(result, (x11_1 - result) s>> 2, 4)
return result
