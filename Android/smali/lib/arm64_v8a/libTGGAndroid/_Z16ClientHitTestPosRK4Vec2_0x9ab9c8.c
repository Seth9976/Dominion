// 函数: _Z16ClientHitTestPosRK4Vec2
// 地址: 0x9ab9c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x8
*entry_x8 = _vtable_for_HitResult + 0x10
*(entry_x8 + 0x1c) = 0
entry_x8[2] = _vtable_for_UI2HitResult + 0x10
entry_x8[3].d = 0
entry_x8[5].d = 0
entry_x8[1].d = 0
GameSpecific_HitTest(arg1)
GameDlgHitTest(arg1)
int64_t x0_2
int64_t x1
x0_2, x1 = CardsetsHitTest(arg1)
int64_t result
int128_t v0
result, v0 = CampaignButtonHitTest(arg1)
int32_t var_74
int32_t var_68
int32_t x8_1
int32_t var_80

if (var_68 == 0)
    x8_1 = -1
    
    if (var_80 != 0)
    label_9aba8c:
        
        if (var_74 s> x8_1)
            entry_x8[1].d = 2
            x8_1 = var_74
            int32_t var_70
            entry_x8[5].d = var_70
            *(entry_x8 + 0x18) = var_80.o
else
    int32_t var_64
    x8_1 = var_64
    entry_x8[1].d = 1
    *(entry_x8 + 0xc) = var_68
    int32_t var_48
    entry_x8[5].d = var_48
    int128_t var_58
    *(entry_x8 + 0x18) = var_58
    
    if (var_80 != 0)
        goto label_9aba8c
int32_t var_a0

if (var_a0 != 0 && var_74 s> x8_1)
    entry_x8[1].d = 2
    x8_1 = var_74
    int32_t var_90
    entry_x8[5].d = var_90
    *(entry_x8 + 0x18) = var_a0.o

if (x1.d != 0xffffffff && x8_1 s< (x1 u>> 0x20).d)
    entry_x8[1].d = 3
    entry_x8[6] = x0_2
    entry_x8[7] = x1

return result
