// 函数: sub_f323e8
// 地址: 0xf323e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x19 = *(arg1 + 8)
int64_t* x20 = **(arg1 + 0x10)
int64_t* x0 = *x20
uint64_t var_38 = _byteswap(x19[1])
(*(*x0 + 0x18))(x0, &var_38, 8)
*x20
Botan::Buffered_Computation::final()
uint64_t x0_2 = var_38
int32_t x20_1 = x20[1].d
int64_t var_30
int32_t x21 = *(x0_2 + (zx.q(*(x0_2 + not.q(x0_2) + var_30)) & 0xf))
uint64_t var_30_1 = x0_2
int64_t var_28
Botan::deallocate_memory(x0_2, var_28 - x0_2, 1)
**x19 = _byteswap(x21 & 0xffffff7f) u% x20_1
return 0
