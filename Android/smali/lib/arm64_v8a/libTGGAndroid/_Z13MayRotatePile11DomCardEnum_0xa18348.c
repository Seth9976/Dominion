// 函数: _Z13MayRotatePile11DomCardEnum
// 地址: 0xa18348
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = arg1
int32_t var_34 = arg1
void* x0 = DomGetContext()
int32_t x0_2 = BoardPileWhere(*(x0 + 8), zx.q(x21))
void* x0_3 = DomGetContext()
int32_t* result = GetPileHead(*(x0_3 + 8), zx.q(x0_2), 0xffffffff)
int32_t i = *result

if (i != 0)
    int32_t x0_6 = CardWhat(*(x0_3 + 8), zx.q(i))
    
    do
        if (CardWhat(*(x0_3 + 8), zx.q(i)) != x0_6)
            result = BoardPileWhere(*(x0 + 8), zx.q(x21))
            
            if (result.d != 0)
                uint64_t x8_1 = zx.q(x21 - 0x1019)
                
                if (x8_1.d u> 0x19)
                label_a184c8:
                    pthread_kill(pthread_self(), 6)
                    XNoReturn()
                    return GetShuffleCounter() __tailcall
                
                int128_t var_80
                
                switch (x8_1)
                    case 0
                        ChoiceUI_Lookahead(zx.q(*(&data_7ad904 + (0 << 2))), 
                            zx.q(ThisCard(false, nullptr)), 0)
                    case 1, 2, 3, 4, 5, 6, 7, 8, 9, 0xb, 0xc, 0xd, 0xe, 0x10, 0x11, 0x12, 0x13, 
                            0x15, 0x16, 0x17, 0x18
                        goto label_a184c8
                    case 0xa
                        ChoiceUI_Lookahead(zx.q(*(&data_7ad904 + (1 << 2))), 
                            zx.q(ThisCard(false, nullptr)), 0)
                    case 0xf
                        ChoiceUI_Lookahead(zx.q(*(&data_7ad904 + (2 << 2))), 
                            zx.q(ThisCard(false, nullptr)), 0)
                    case 0x14
                        ChoiceUI_Lookahead(zx.q(*(&data_7ad904 + (3 << 2))), 
                            zx.q(ThisCard(false, nullptr)), 0)
                    case 0x19
                        __builtin_memset(&var_80, 0, 0x30)
                        var_80.d = 0xf3
                        int128_t var_70
                        var_70:0xc.d = 0
                        int128_t var_60
                        var_60:8.q = 0
                        int64_t var_50_1 = 0
                
                result = ChooseSupplyPile(&var_34, 1, &var_80, 0x29, true)
                
                if (result.d != 0)
                    RotatePile(*(x0 + 8), zx.q(*(x0 + 0x18)), zx.q(x0_2))
                    return NotifyResult(3)
            
            break
        
        result = CardGet(*(x0_3 + 8), zx.q(i))
        i = result[0x18]
    while (i != 0)

return result
