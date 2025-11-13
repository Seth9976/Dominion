// 函数: _Z12Territory_VPv
// 地址: 0xa19ed0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_1930[0x240]
void var_cb0
int32_t i_2 = CountCardTypes(&var_cb0, &var_1930)
int32_t x19

if (i_2 s< 1)
    x19 = 0
else
    x19 = 0
    uint64_t i_1 = zx.q(i_2)
    void* x21_1 = &var_cb0
    uint64_t i
    
    do
        uint64_t x0_1 = zx.q(*x21_1)
        x21_1 += 4
        i = i_1
        i_1 -= 1
        x19 += CardIs(x0_1, 8) & 1
    while (i != 1)

return zx.q(x19)
