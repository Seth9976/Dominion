// 函数: _Z9DrawCardsR7DomGame9PlayerWhoi11DomCardEnumP7CardIDs
// 地址: 0xbebfac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardIDs* x19
CardIDs var_ca8

x19 = arg5 == 0 ? &var_ca8 : arg5
int32_t var_cb8 = 0xc
int32_t var_cc0 = arg4
int64_t result = DrawCardsTo(arg1, arg2, arg3, 0x3ea, 0, 0, 0, x19)
*(x19 + 0xc80) = result.d
return result
