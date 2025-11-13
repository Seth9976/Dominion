// 函数: _ZN5Botan11DER_Encoder9raw_bytesEPKhm
// 地址: 0xcb04cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9 = *(arg1 + 0x50)

if (x9 != *(arg1 + 0x48))
    Botan::DER_Encoder::DER_Sequence::add_bytes(x9 - 0x38, arg2)
    return arg1

int64_t* x0_2 = *(arg1 + 0x20)
uint64_t var_28
int64_t entry_x2

if (x0_2 == 0)
    var_28 = arg2
    int64_t var_20 = entry_x2
    Botan::operator+=<uint8_t, Botan::secure_allocator<uint8_t>, uint64_t>(&arg1[0x30], &var_28)
    return arg1

var_28 = arg2
int64_t var_18 = entry_x2
(*(*x0_2 + 0x30))(x0_2, &var_28, &var_18)
return arg1
