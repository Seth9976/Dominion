// 函数: _Z19ValidateProfileBansR10PlayerBansi
// 地址: 0xba4338
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0xaf0) s< 1)
    return 

PlayerBans& x19_1 = arg1
int32_t i = 0

do
    int64_t var_30
    int32_t var_24
    arg1 = DomExpGet(DomCardExp(zx.q(*(x19_1 + (sx.q(i) << 2))), &var_24), &var_30)
    uint64_t x8_6 = zx.q(var_24)
    void* x8_3
    int32_t i_1
    
    if ((x8_6.d & 0x80000000) != 0 || x8_6.d s>= arg1.d)
        i_1 = i - 1
        int64_t x8_2 = sx.q(*(x19_1 + 0xaf0)) - 1
        *(x19_1 + 0xaf0) = x8_2.d
        x8_3 = x19_1 + (x8_2 << 2)
    else
        x8_3 = var_30 + x8_6 * 0x780 + 0xc0
        i_1 = i
    
    int64_t i_2 = sx.q(i)
    i = i_1 + 1
    *(x19_1 + (i_2 << 2)) = *x8_3
while (i s< *(x19_1 + 0xaf0))
