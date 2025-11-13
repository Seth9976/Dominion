// 函数: _ZNK5Botan13DSA_PublicKey17message_part_sizeEv
// 地址: 0xedd2e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
*(*entry_x0 - 0x88)
Botan::DL_Group::data()
int64_t x0_3 = Botan::BigInt::bits()
int64_t x8_5

if ((x0_3 & 7) == 0)
    x8_5 = 0
else
    x8_5 = 8 - (x0_3 & 7)

return (x8_5 + x0_3) u>> 3
