// 函数: _ZN5Botan7Adler3212final_resultEPh
// 地址: 0xc9ec28
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x9 = zx.d(*(arg1 + 8))
int32_t temp0 = _byteswap(zx.d(*(arg1 + 0xa)))
uint16_t x9_2 = (_byteswap(x9) u>> 0x10).w
uint16_t* entry_x1
*entry_x1 = (temp0 u>> 0x10).w
entry_x1[1] = x9_2
*(arg1 + 8) = 1
