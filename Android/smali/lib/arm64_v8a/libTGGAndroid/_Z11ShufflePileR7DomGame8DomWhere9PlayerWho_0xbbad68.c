// 函数: _Z11ShufflePileR7DomGame8DomWhere9PlayerWho
// 地址: 0xbbad68
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg3.d
int64_t result = ShufflePileToPlacing(arg1, arg2, arg3)

if (x20 == 0xffffffff)
    return result

return MovePileTo(arg1, zx.q(x20), 0x44e, zx.q(x20), zx.q(arg2.d)) __tailcall
