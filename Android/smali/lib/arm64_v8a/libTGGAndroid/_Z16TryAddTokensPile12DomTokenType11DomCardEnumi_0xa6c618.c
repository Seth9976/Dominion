// 函数: _Z16TryAddTokensPile12DomTokenType11DomCardEnumi
// 地址: 0xa6c618
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = GetBoardPile(zx.q(arg2), true)

if (result.d == 0)
    return result

return AddTokens(zx.q(arg1), zx.q(result.d), 1, 0) __tailcall
