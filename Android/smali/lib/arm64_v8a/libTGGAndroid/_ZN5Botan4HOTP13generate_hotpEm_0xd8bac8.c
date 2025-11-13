// 函数: _ZN5Botan4HOTP13generate_hotpEm
// 地址: 0xd8bac8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0 = *arg1
uint64_t entry_x1
uint64_t var_38 = _byteswap(entry_x1)
(*(*x0 + 0x18))(x0, &var_38, 8)
*arg1
Botan::Buffered_Computation::final()
uint64_t x0_2 = var_38
int32_t x19_1 = *(arg1 + 8)
int64_t var_30
int32_t x20 = *(x0_2 + (zx.q(*(x0_2 + not.q(x0_2) + var_30)) & 0xf))
uint64_t var_30_1 = x0_2
int64_t var_28
Botan::deallocate_memory(x0_2, var_28 - x0_2, 1)
return zx.q(_byteswap(x20 & 0xffffff7f) u% x19_1)
