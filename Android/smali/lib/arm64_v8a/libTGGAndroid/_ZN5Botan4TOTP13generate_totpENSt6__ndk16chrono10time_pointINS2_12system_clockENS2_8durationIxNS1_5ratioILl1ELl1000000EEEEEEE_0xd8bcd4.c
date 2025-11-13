// 函数: _ZN5Botan4TOTP13generate_totpENSt6__ndk16chrono10time_pointINS2_12system_clockENS2_8durationIxNS1_5ratioILl1ELl1000000EEEEEEE
// 地址: 0xd8bcd4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_x1
int64_t x8_2 = (muls.dp.q(entry_x1 - *(arg1 + 0x18), 0x431bde82d7b634db) u>> 0x40).q
int64_t* x19 = arg1
int64_t* x0 = *arg1
uint64_t var_38 = _byteswap(((x8_2 s>> 0x12) + (x8_2 u>> 0x3f)) u/ *(arg1 + 0x10))
(*(*x0 + 0x18))(x0, &var_38, 8)
*x19
Botan::Buffered_Computation::final()
uint64_t x0_2 = var_38
int32_t x19_1 = x19[1].d
int64_t var_30
int32_t x20 = *(x0_2 + (zx.q(*(x0_2 + not.q(x0_2) + var_30)) & 0xf))
uint64_t var_30_1 = x0_2
int64_t var_28
Botan::deallocate_memory(x0_2, var_28 - x0_2, 1)
return zx.q(_byteswap(x20 & 0xffffff7f) u% x19_1)
