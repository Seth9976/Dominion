// 函数: _ZNK5Botan11ESP_Padding5unpadEPKhm
// 地址: 0xdae680
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t entry_result

if (entry_result - 3 u> 0xfc)
    return entry_result

uint32_t x8_1 = zx.d(*(entry_result + arg2 - 1))
int64_t x10_1 = entry_result - 2
int32_t x9_1 = entry_result.d - x8_1
int32_t x11_2 = x9_1 ^ entry_result.d
int32_t x12_5 = ((((x11_2 | (x8_1 ^ entry_result.d)) ^ entry_result.d) | ((x8_1 - 1) & not.d(x8_1)))
    & 0x80) << 0x18 s>> 0x1f
int64_t x13_2 = zx.q(x9_1.b) - entry_result + 1

while (true)
    int32_t x8_3 = (x8_1 - 1) ^ zx.d(*(arg2 + x10_1))
    x12_5 |= ((x13_2 | (x10_1 + 1)) s>> 0x3f).d & not.d(sx.d((x8_3.b - 1) & (not.d(x8_3)).b) s>> 7)
    
    if (x10_1 == 0)
        break
    
    x8_1 = zx.d(*(arg2 + x10_1))
    x10_1 -= 1
    x13_2 += 1

return (zx.q(x12_5.b) & zx.q(x11_2.b)) ^ zx.q(x9_1.b)
