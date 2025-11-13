// 函数: _ZN5Botan4HOTP11verify_hotpEjmm
// 地址: 0xd8bb58
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x22 = arg1
int64_t x23 = 0
int64_t entry_x3

do
    int64_t* x0 = *x22
    uint64_t var_58 = _byteswap(arg3 + x23)
    (*(*x0 + 0x18))(x0, &var_58, 8)
    *x22
    Botan::Buffered_Computation::final()
    uint64_t x0_2 = var_58
    int32_t x24_1 = x22[1].d
    uint64_t var_50
    int32_t x25_1 = *(x0_2 + (zx.q(*(x0_2 + not.q(x0_2) + var_50)) & 0xf))
    var_50 = x0_2
    int64_t var_48
    Botan::deallocate_memory(x0_2, var_48 - x0_2, 1)
    
    if (_byteswap(x25_1 & 0xffffff7f) u% x24_1 == arg2.d)
        return 1
    
    x23 += 1
while (x23 u<= entry_x3)

return 0
