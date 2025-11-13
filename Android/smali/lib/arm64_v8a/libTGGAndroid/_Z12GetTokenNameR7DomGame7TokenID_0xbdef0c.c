// 函数: _Z12GetTokenNameR7DomGame7TokenID
// 地址: 0xbdef0c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_2 = *(arg1 + (sx.q(arg2) << 5) + 0x15f68)
int64_t var_18 = 0
int32_t x9_1

if (x8_2 s< 0)
    x9_1 = x8_2 + 0xff
else
    x9_1 = x8_2

DomExpGetTokens(zx.q(x9_1 s>> 8), &var_18)
return DomTokenDefName(var_18 + muls.dp.d(x8_2 - (x9_1 & 0xffffff00), 0x638), 0) __tailcall
