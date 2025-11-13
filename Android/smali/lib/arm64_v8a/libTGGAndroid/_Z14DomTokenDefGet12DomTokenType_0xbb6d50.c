// 函数: _Z14DomTokenDefGet12DomTokenType
// 地址: 0xbb6d50
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9

if (arg1 s< 0)
    x9 = arg1 + 0xff
else
    x9 = arg1

DomTokenDef* var_18 = nullptr
DomExpGetTokens(zx.q(x9 s>> 8), &var_18)
return var_18 + muls.dp.d(arg1 - (x9 & 0xffffff00), 0x638)
