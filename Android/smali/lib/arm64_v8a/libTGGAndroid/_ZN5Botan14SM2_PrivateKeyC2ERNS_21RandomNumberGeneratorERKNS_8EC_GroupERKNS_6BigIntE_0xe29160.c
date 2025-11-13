// 函数: _ZN5Botan14SM2_PrivateKeyC2ERNS_21RandomNumberGeneratorERKNS_8EC_GroupERKNS_6BigIntE
// 地址: 0xe29160
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *(arg2 + 8)
*arg1 = x8
*(arg1 + *(x8 - 0x88)) = *(arg2 + 0x10)
*(arg1 + *(*arg1 - 0x90)) = *(arg2 + 0x18)
int64_t entry_x3
Botan::EC_PrivateKey::EC_PrivateKey(arg1 + 8, arg2 + 0x20, arg3, entry_x3.b)
void* x8_4 = *arg2
*arg1 = x8_4
*(arg1 + *(x8_4 - 0x88)) = *(arg2 + 0x40)
*(arg1 + *(*arg1 - 0x90)) = *(arg2 + 0x48)
void* x9_4 = *arg1
*(arg1 + 8) = *(arg2 + 0x50)
*(arg1 + *(x9_4 - 0x98)) = *(arg2 + 0x58)
__builtin_memset(arg1 + 0x38, 0, 0x18)
*(arg1 + 0x50) = -1
*(arg1 + 0x58) = 1
uint32_t var_34 = 1
Botan::BigInt::add2(arg1 + 0x10, &var_34, 1, 1)
void* result_1
int128_t v0
int128_t v1
v0, v1 = Botan::inverse_mod(&result_1, Botan::EC_Group::data() + 0xe8)
uint64_t var_60
uint64_t var_58_1
int64_t var_50
uint64_t x0_5

if (arg1 + 0x38 == &var_60)
    x0_5 = var_60
    
    if (x0_5 != 0)
        var_58_1 = x0_5
        Botan::deallocate_memory(x0_5, (var_50 - x0_5) s>> 2, 4)
else
    v1 = *(arg1 + 0x38)
    *(arg1 + 0x38) = var_60.o
    var_60.o = v1
    int64_t x11_1 = *(arg1 + 0x48)
    int64_t x9_6 = *(arg1 + 0x50)
    x0_5 = v1.q
    *(arg1 + 0x48) = var_50
    int64_t var_48
    *(arg1 + 0x50) = var_48
    int64_t var_48_1 = x9_6
    int32_t x9_7 = *(arg1 + 0x58)
    int32_t var_40
    *(arg1 + 0x58) = var_40
    int32_t var_40_1 = x9_7
    
    if (x0_5 != 0)
        var_58_1 = x0_5
        Botan::deallocate_memory(x0_5, (x11_1 - x0_5) s>> 2, 4)
void* result = result_1

if (result == 0)
    return result

void* result_2 = result
int64_t var_78
return Botan::deallocate_memory(result, (var_78 - result) s>> 2, 4)
