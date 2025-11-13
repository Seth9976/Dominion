// 函数: _ZNK5Botan7FPE_FE117compute_tweak_macEPKhm
// 地址: 0xd7ff18
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0 = *(arg1 + 8)
int32_t var_28 = _byteswap(*(arg1 + 0x20) - *(arg1 + 0x18))
(*(*x0 + 0x18))(x0, &var_28, 4)
int64_t* x0_1 = *(arg1 + 8)
int64_t x1_1 = *(arg1 + 0x18)
(*(*x0_1 + 0x18))(x0_1, x1_1, *(arg1 + 0x20) - x1_1)
int64_t* x0_2 = *(arg1 + 8)
int64_t entry_x2
int32_t var_24 = _byteswap(entry_x2.d)
(*(*x0_2 + 0x18))(x0_2, &var_24, 4)

if (entry_x2 != 0)
    int64_t* x0_3 = *(arg1 + 8)
    (*(*x0_3 + 0x18))(x0_3, arg2, entry_x2)

*(arg1 + 8)
return Botan::Buffered_Computation::final()
