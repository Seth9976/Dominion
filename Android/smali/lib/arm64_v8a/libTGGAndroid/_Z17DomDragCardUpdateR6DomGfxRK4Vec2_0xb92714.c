// 函数: _Z17DomDragCardUpdateR6DomGfxRK4Vec2
// 地址: 0xb92714
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0 = CalcDropTarget(arg1)
int64_t result = IsRearranging()

if ((result.d & 1) == 0)
    *(arg1 + 0x21a0) = x0
else
    if (x0 u> 5)
        pthread_kill(pthread_self(), 6)
        void* x0_8
        int64_t x1_5
        DomGfx* x2_4
        x0_8, x1_5, x2_4 = XNoReturn()
        return PileOther(x0_8, x1_5, x2_4) __tailcall
    
    int32_t x21_1 = 0
    int32_t x25_1 = 0
    int32_t x22_1 = 0
    uint64_t x0_1
    
    switch (x0)
        case 0
            x22_1 = *(*(gDomClient + 0x205e0) + zx.q(*(gDomClient + 0x1f8e4)) * 0x21d8 + 0x5c)
            x0_1 = zx.q(x22_1)
        label_b927d4:
            result = CalcDropSlot(x0_1, arg1, arg2)
            x21_1 = result.d
            x25_1 = -2
            
            if (x21_1 != *(arg1 + 0xb0) || x22_1 != *(arg1 + 0xa4))
                goto label_b927fc
        case 1
            x0_1 = 0x3ef
            x22_1 = 0x3ef
            goto label_b927d4
        case 2
            x0_1 = 0x3f0
            x22_1 = 0x3f0
            goto label_b927d4
        case 3, 4, 5
            if (0 != *(arg1 + 0xb0) || x22_1 != *(arg1 + 0xa4))
            label_b927fc:
                int32_t x8_7 = *(gDomClient + 0x38)
                uint64_t x0_2
                
                if (x8_7 == 0xffffffff)
                    x0_2 = 0
                else
                    x0_2 = zx.q(x8_7)
                
                result = DomSoundPlay(x0_2, *SOUND_SOUND_LOAD_GAME_FX_DRAG_SWAP_CARD, "drag", false)
                
                if (*(arg1 + 0xa4) != 0)
                    result = PileRemoveCard(arg1, 
                        *(gDomClient + 0x205e0) + zx.q(*(arg1 + 0x9c)) * 0x21d8, false, false)
                
                *(arg1 + 0xb0) = x21_1
                
                if (x22_1 != 0)
                    result = PileAddCard(arg1, 
                        GetAssociatedPile(
                            *(gDomClient + 0x205e0) + zx.q(*(gDomClient + 0x1f8e4)) * 0x21d8, 
                            zx.q(x22_1)), 
                        zx.q(x25_1) | zx.q(x21_1) << 0x20, false)
                
                *(arg1 + 0xb0) = x21_1
    
    *(arg1 + 0x21a0) = x0
    *(arg1 + 0x21a4) = x25_1
    *(arg1 + 0x21a8) = x21_1

return result
