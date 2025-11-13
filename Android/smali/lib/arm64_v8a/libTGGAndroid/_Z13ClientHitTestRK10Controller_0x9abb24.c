// 函数: _Z13ClientHitTestRK10Controller
// 地址: 0x9abb24
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t var_18 = *V20
int64_t result
int128_t v0
result, v0 = ControllerCursorPosition(arg1, &var_18)

if ((result.d & 1) != 0)
    return ClientHitTestPos(&var_18)

void** entry_x8
entry_x8[5].d = 0
*entry_x8 = _vtable_for_HitResult + 0x10
entry_x8[1] = 0
entry_x8[2] = _vtable_for_UI2HitResult + 0x10
entry_x8[3] = 0
int128_t var_28
*(entry_x8 + 0x30) = var_28
return result
