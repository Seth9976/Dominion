// 函数: _Z23ParentContextActiveCardv
// 地址: 0xae35fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* result = DomGetParentContext()

if (result == 0)
    return result

int32_t x8_1 = *result

if (x8_1 == 3)
    return AbilitySourceCard(*(result + 8), zx.q(result[7])) __tailcall

if (x8_1 != 2)
    return 0

return zx.q(result[7])
