// 函数: _ZN5Botan6PK_Ops22Key_Agreement_with_KDF5agreeEmPKhmS3_m
// 地址: 0xdf9964
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

(*(*arg1 + 0x20))(arg1, arg3, arg4)
uint64_t result = *(arg1 + 8)
int128_t var_50
int64_t var_40

if (result == 0)
    int128_t* entry_x8
    *entry_x8 = var_50
    entry_x8[1].q = var_40
else
    uint64_t x2_1 = var_50.q
    int16_t var_68 = 0
    uint8_t* entry_x5
    Botan::KDF::derive_key(result, arg2, x2_1, var_50:8.q - x2_1, arg5, entry_x5, &var_68 | 1)
    void* var_58
    
    if ((zx.d(var_68.b) & 1) != 0)
        operator delete(var_58)
    result = var_50.q
    
    if (result != 0)
        var_50:8.q = result
        return Botan::deallocate_memory(result, var_40 - result, 1)
return result
