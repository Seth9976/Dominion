// 函数: _Z10DrawCardTo8DomWhere9DrawStyle11RevealStyle
// 地址: 0xadd824
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
int32_t var_cc8 = arg3
int32_t var_cd0 = 0
int32_t var_cb8

if (DrawCardsTo(*(x0 + 8), zx.q(*(x0 + 0x18)), 1, zx.q(arg1), zx.q(arg2), *(x0 + 0x40), 
        zx.q(*(x0 + 0x48)), &var_cb8) == 0)
    return 0

return zx.q(var_cb8)
