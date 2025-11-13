// 函数: _Z18PlayActionFromHandi15DomChoiceUIType
// 地址: 0xad9ca4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

GetPlayableFromHand(4, 0)
int128_t var_d00
__builtin_memset(&var_d00, 0, 0x38)
var_d00.d = arg2
void var_cc0
int32_t x0_1 = ChooseCard(&var_cc0, 1, &var_d00, 0xb, 0)

if (x0_1 != 0)
    void* x0_2 = DomGetContext()
    DomGame* x20_1 = *(x0_2 + 8)
    int32_t x21_1 = *(x0_2 + 0x18)
    var_d00.q = ToCardRef(x20_1, zx.q(x0_1))
    int64_t var_28 = 0
    int64_t var_38 = 0
    PlayCard(x20_1, zx.q(x21_1), &var_d00, &var_28, &var_38, 0)

return zx.q(x0_1)
