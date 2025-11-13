// 函数: _ZNK5Botan19OneAndZeros_Padding5unpadEPKhm
// 地址: 0xdae4f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_result

if (entry_result u< 3)
    return entry_result

int32_t x11_1 = 0
int32_t x9_1 = 0
int64_t x8_1 = entry_result - 1
int64_t x13_1 = entry_result
int32_t x12_1
int32_t x14_2
int64_t i

do
    uint32_t x14_1 = zx.d(*(arg2 - 1 + x13_1))
    x12_1 = x11_1
    i = x13_1 - 1
    x9_1 |= sx.d((x14_1.b + 0x7f) & x14_1.b) s>> 7
    x14_2 = not.d(x9_1)
    x8_1 -= zx.q(x14_2) & 1
    x11_1 = (x14_2 & not.d(sx.d((x14_1.b - 1) & (not.d(x14_1)).b) s>> 7)) | x12_1
    x13_1 = i
while (i != 0)
int64_t x9_5 = ((zx.q(x12_1.b) | zx.q(x14_2.b)) - 1) s>> 0x3f
return (x8_1 & x9_5) | (entry_result & not.q(x9_5))
