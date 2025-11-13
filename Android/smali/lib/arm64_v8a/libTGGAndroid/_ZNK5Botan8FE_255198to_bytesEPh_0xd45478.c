// 函数: _ZNK5Botan8FE_255198to_bytesEPh
// 地址: 0xd45478
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9_3 = *(arg1 + 0x20)
int32_t x8_2 = *(arg1 + 0x24)
int32_t x13 = *arg1
int32_t x14 = *(arg1 + 4)
int32_t x15 = *(arg1 + 8)
int32_t x16 = *(arg1 + 0xc)
int32_t x17 = *(arg1 + 0x10)
int32_t x12 = *(arg1 + 0x14)
int32_t x11 = *(arg1 + 0x18)
int32_t x10 = *(arg1 + 0x1c)
int32_t x2_7 = x11 + ((x12 + ((x17 + ((x16 +
    ((x15 + ((x14 + ((x13 + ((0x1000000 + x8_2 * 0x13) s>> 0x19)) s>> 0x1a)) s>> 0x19)) s>> 0x1a))
    s>> 0x19)) s>> 0x1a)) s>> 0x19)
int32_t x13_1 =
    x13 + ((x8_2 + ((x9_3 + ((x10 + (x2_7 s>> 0x1a)) s>> 0x19)) s>> 0x1a)) s>> 0x19) * 0x13
int32_t x14_1 = x14 + (x13_1 s>> 0x1a)
int32_t x15_1 = x15 + (x14_1 s>> 0x19)
char* entry_x1
*entry_x1 = x13_1.b
int32_t x16_1 = x16 + (x15_1 s>> 0x1a)
entry_x1[1] = (x13_1 u>> 8).b
entry_x1[2] = (x13_1 u>> 0x10).b
int32_t x17_1 = x17 + (x16_1 s>> 0x19)
entry_x1[3] = (3 & (x13_1 u>> 0x18).b) | ((x14_1 & 0x1ffffff) << 2).b
int32_t x12_1 = x12 + (x17_1 s>> 0x1a)
entry_x1[4] = (x14_1 u>> 6).b
entry_x1[5] = (x14_1 u>> 0xe).b
entry_x1[6] = ((x14_1 u>> 0x16).b & 7) | ((x15_1 & 0x3ffffff) << 3).b
entry_x1[0xa] = (x16_1 u>> 3).b
int32_t x11_1 = x11 + (x12_1 s>> 0x19)
entry_x1[7] = (x15_1 u>> 5).b
uint64_t result = zx.q(x16_1 u>> 0xb)
entry_x1[0xd] = (x17_1 u>> 2).b
entry_x1[0xe] = (x17_1 u>> 0xa).b
int32_t x10_1 = x10 + (x11_1 s>> 0x1a)
entry_x1[9] = ((x15_1 u>> 0x15).b & 0x1f) | ((x16_1 & 0x1ffffff) << 5).b
entry_x1[0x10] = x12_1.b
entry_x1[0x11] = (x12_1 u>> 8).b
entry_x1[0x12] = (x12_1 u>> 0x10).b
int32_t x9 = x9_3 + (x10_1 s>> 0x19)
entry_x1[0xc] = ((x16_1 u>> 0x13).b & 0x3f) | ((0x3ffffff & x17_1) << 6).b
entry_x1[0x14] = (x11_1 u>> 7).b
entry_x1[0x15] = (x11_1 u>> 0xf).b
int32_t x8 = x8_2 + (x9 s>> 0x1a)
entry_x1[0x13] = (1 & (x12_1 u>> 0x18).b) | ((x11_1 & 0x3ffffff) << 1).b
entry_x1[0x17] = (x10_1 u>> 5).b
entry_x1[0x18] = (x10_1 u>> 0xd).b
entry_x1[0x16] = ((x11_1 u>> 0x17).b & 7) | ((x10_1 & 0x1ffffff) << 3).b
entry_x1[0x1a] = (x9 u>> 4).b
entry_x1[8] = (x15_1 u>> 0xd).b
entry_x1[0xb] = (result.d).b
entry_x1[0xf] = (x17_1 u>> 0x12).b
entry_x1[0x1b] = (x9 u>> 0xc).b
entry_x1[0x19] = ((x10_1 u>> 0x15).b & 0xf) | ((x9 & 0x3ffffff) << 4).b
entry_x1[0x1d] = (x8 u>> 2).b
entry_x1[0x1e] = (x8 u>> 0xa).b
entry_x1[0x1c] = ((x9 u>> 0x14).b & 0x3f) | ((x8 & 0x1ffffff) << 6).b
entry_x1[0x1f] = (x8 u>> 0x12).b & 0x7f
return result
