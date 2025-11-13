// 函数: _Z14GameDlgHitTestRK4Vec2
// 地址: 0x9cafb8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result
int128_t v0
result, v0 = GameSpecific_DlgHitTest(arg1)
int64_t x22 = 0xb
int64_t (* x21)() = gGameDlgManager + 0x194

while (true)
    int128_t var_48
    int32_t var_38
    UI2HitResult* entry_x8
    
    if (*x21 != 0)
        result, v0 = UI2HitTest(zx.q(*(x21 + 4)), arg1)
        
        if (((x22 != 4 ? 1 : 0) & (x22 != 9 ? 1 : 0) & (x22.d - 0xa u> 1 ? 1 : 0) & 1) != 0
                || *(entry_x8 + 0x18) != 0)
            result, v0 = GameSpecific_DlgAllowsPassthrough(entry_x8, zx.q(*x21))
            
            if ((result.d & 1) == 0 || *(entry_x8 + 0x18) != 0)
                if (var_38 == 0)
                    break
                
                if (var_48:0xc.d u< *(entry_x8 + 0x14))
                    break
    
    x22 -= 1
    x21 -= 0x28
    
    if (x22 == 0)
        *entry_x8 = _vtable_for_UI2HitResult + 0x10
        *(entry_x8 + 0x18) = var_38
        *(entry_x8 + 8) = var_48
        break

return result
