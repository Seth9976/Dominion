// 函数: _ZNK5Botan8OCB_Mode18valid_nonce_lengthEm
// 地址: 0xddc2c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_x1

if (entry_x1 == 0)
    return 0

int64_t x8 = *(arg1 + 0x58)

if (x8 != 0x10)
    return zx.q(x8 - 1 u> entry_x1 ? 1 : 0)

return zx.q(entry_x1 u< 0x10 ? 1 : 0)
