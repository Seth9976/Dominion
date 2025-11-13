// 函数: _Z13DiscardDownToi15DomChoiceUIType7LogFlag
// 地址: 0xad91f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = CountCards(0x3ea, 0, 0, 0xffffffff)
int32_t x21_1 = result.d - arg1

if (x21_1 s< 1)
    return result

CardsWhereType(0x3ea, 0, 0)
void var_cb8
return DiscardExactly(&var_cb8, x21_1, 0x3ea, zx.q(arg2), 7, zx.q(arg3), 5)
