// 函数: _Z6CardIsR7DomGame11DomCardEnum11DomCardTypeS2_
// 地址: 0xbc3624
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2.d == 0)
    return 0

int64_t x0 = CardTypeQuery(arg1, arg2, true, arg4 | arg3)
return zx.q((x0 & arg3) != 0 ? 1 : 0) & zx.q((x0 & arg4) == 0 ? 1 : 0)
