// 函数: _Z30ParentContextActiveAbilityCardv
// 地址: 0xae35c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x0 = DomGetParentContext()

if (x0 != 0 && *x0 == 3)
    return AbilitySourceCard(*(x0 + 8), zx.q(x0[7])) __tailcall

return 0
