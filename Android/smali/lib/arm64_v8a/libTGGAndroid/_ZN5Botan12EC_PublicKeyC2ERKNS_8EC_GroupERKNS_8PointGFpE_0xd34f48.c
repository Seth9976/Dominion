// 函数: _ZN5Botan12EC_PublicKeyC2ERKNS_8EC_GroupERKNS_8PointGFpE
// 地址: 0xd34f48
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *arg2
*arg1 = x8
*(arg1 + *(x8 - 0x88)) = *(arg2 + 8)
int64_t* entry_x2
*(arg1 + 8) = *entry_x2
int64_t x8_3 = entry_x2[1]
*(arg1 + 0x10) = x8_3

if (x8_3 != 0)
    int32_t i
    
    do
        i = __stxr(__ldxr(x8_3 + 8) + 1, x8_3 + 8)
    while (i != 0)

Botan::PointGFp::PointGFp(arg1 + 0x18)
*(arg1 + 0xa4) = 0
void* result = Botan::EC_Group::data()
*(arg1 + 0xa0) = (*(result + 0x1c8) != *(result + 0x1d0) ? 1 : 0) << 1
return result
