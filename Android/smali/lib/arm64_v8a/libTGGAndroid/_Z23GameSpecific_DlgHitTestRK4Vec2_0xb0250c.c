// 函数: _Z23GameSpecific_DlgHitTestRK4Vec2
// 地址: 0xb0250c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t result = zx.q(*(gDomClient + 0x84370))

if (result.d != 0)
    return UI2HitTest(result, arg1) __tailcall

void** entry_x8
entry_x8[3].d = 0
*entry_x8 = _vtable_for_UI2HitResult + 0x10
entry_x8[1] = 0
return result
