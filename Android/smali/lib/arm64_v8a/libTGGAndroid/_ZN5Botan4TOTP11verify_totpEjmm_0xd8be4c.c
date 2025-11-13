// 函数: _ZN5Botan4TOTP11verify_totpEjmm
// 地址: 0xd8be4c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg2.d
int64_t* x21 = arg1
int64_t x22 = 0
uint64_t x23 = arg3 u/ *(arg1 + 0x10)
int64_t x24 = 1
int32_t x8_11
bool cond:1_1

do
    int64_t* x0 = *x21
    uint64_t var_68 = _byteswap(x23 - x22)
    (*(*x0 + 0x18))(x0, &var_68, 8)
    *x21
    Botan::Buffered_Computation::final()
    uint64_t x0_2 = var_68
    int32_t x25_1 = x21[1].d
    uint64_t var_60
    int32_t x26_1 = *(x0_2 + (zx.q(*(x0_2 + not.q(x0_2) + var_60)) & 0xf))
    var_60 = x0_2
    int64_t var_58
    Botan::deallocate_memory(x0_2, var_58 - x0_2, 1)
    x8_11 = _byteswap(x26_1 & 0xffffff7f) u% x25_1
    
    if (x8_11 == x20)
        break
    
    int64_t entry_x3
    cond:1_1 = x24 u<= entry_x3
    x24 += 1
    x22 += 1
while (cond:1_1)
return zx.q(x8_11 == x20 ? 1 : 0)
