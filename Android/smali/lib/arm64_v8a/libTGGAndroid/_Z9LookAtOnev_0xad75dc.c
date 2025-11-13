// 函数: _Z9LookAtOnev
// 地址: 0xad75dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
int32_t var_ca8 = 0xc
int32_t var_cb0 = 0
int32_t var_c98

if (DrawCardsTo(*(x0 + 8), zx.q(*(x0 + 0x18)), 1, 0x3ee, 1, *(x0 + 0x40), zx.q(*(x0 + 0x48)), 
        &var_c98) == 0)
    return 0

return zx.q(var_c98)
