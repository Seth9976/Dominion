// 函数: _Z14DiscardMayPlay11DomCardType
// 地址: 0xae5510
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x20 = arg1
void* x0 = DomGetContext()
int64_t result = TopDeckCard(*(x0 + 8), zx.q(*(x0 + 0x18)), false)
int32_t var_28 = result.d

if (result.d != 0)
    int32_t x19_1 = result.d
    int32_t var_60_2
    int64_t var_58
    int64_t var_48_1
    
    if ((CardIs(*(DomGetContext() + 8), zx.q(x19_1), x20) & 1) == 0)
        int32_t var_24 = x19_1
        void* x0_18 = DomGetContext()
        int32_t var_50_3 = 0
        var_58 = 0
        int32_t var_60_3 = 0
        DiscardCards(*(x0_18 + 8), zx.q(*(x0_18 + 0x18)), &var_24, 1, 0x3eb, 0x14, 7, 0)
        result = CardIs(*(DomGetContext() + 8), zx.q(var_28), x20)
        
        if ((result.d & 1) != 0)
            result = CheckStopMoving(*(DomGetContext() + 8), zx.q(var_28), 0x3ec)
            
            if ((result.d & 1) == 0)
                void* x0_24
                CardID* x1_9
                x0_24, x1_9 = DomGetContext()
                var_48_1 = 0
                int32_t var_50_4 = 0
                var_58.d = 0
                var_60_2 = 0
                NotifyEffect(*(x0_24 + 8), 0x24, zx.q(*(x0_24 + 0x18)), 
                    zx.q(ThisCard(false, x1_9)), 1, 0, 0, 0)
                int32_t x19_7 = var_28
                void* x0_27 = DomGetContext()
                int32_t x0_29 = CardOwner(*(x0_27 + 8), zx.q(x19_7))
                int32_t var_38_2 = 0
                int64_t var_40_2 = 0
                var_48_1.d = 0
                int32_t var_50_5 = 0
                var_58.d = *(x0_27 + 0x48)
                var_60_2.q = *(x0_27 + 0x40)
                MoveCardTo(*(x0_27 + 8), zx.q(x0_29), zx.q(x19_7), 0x3ec, 0xb, 0x3ee, 0, 0)
            label_ae5790:
                result = MayPlay(zx.q(var_28), 0x1f)
                
                if ((result.d & 1) == 0)
                    int32_t x19_8 = var_28
                    void* x0_32 = DomGetContext()
                    int32_t x0_34 = CardOwner(*(x0_32 + 8), zx.q(x19_8))
                    int32_t var_38_3 = 0
                    int64_t var_40_3 = 0
                    var_48_1.d = 0
                    int32_t var_50_6 = 0
                    var_58.d = *(x0_32 + 0x48)
                    var_60_2.q = *(x0_32 + 0x40)
                    return MoveCardTo(*(x0_32 + 8), zx.q(x0_34), zx.q(x19_8), 0x3ee, 0xb, 0x3ec, 0, 
                        0)
    else
        void* x0_5
        CardID* x1_2
        x0_5, x1_2 = DomGetContext()
        var_48_1 = 0
        int32_t var_50_1 = 0
        var_58.d = 0
        int32_t var_60_1 = 0
        NotifyEffect(*(x0_5 + 8), 0x24, zx.q(*(x0_5 + 0x18)), zx.q(ThisCard(false, x1_2)), 1, 0, 0, 
            0)
        void* x0_8 = DomGetContext()
        int32_t x0_10 = CardOwner(*(x0_8 + 8), zx.q(x19_1))
        int32_t var_38_1 = 0
        int64_t var_40_1 = 0
        var_48_1.d = 0
        int32_t var_50_2 = 0
        var_58.d = *(x0_8 + 0x48)
        var_60_1.q = *(x0_8 + 0x40)
        MoveCardTo(*(x0_8 + 8), zx.q(x0_10), zx.q(x19_1), 0x3eb, 0xb, 0x3ee, 0, 0)
        var_58.d = 0
        var_60_2 = 0
        NotifyLog(*(DomGetContext() + 8), 0x33, zx.q(*(DomGetContext() + 0x18)), 0, &var_28, 1, 0, 
            0)
        TriggerDiscard(zx.q(var_28))
        result = CheckStopMoving(*(DomGetContext() + 8), zx.q(var_28), 0x3ee)
        
        if ((result.d & 1) == 0)
            goto label_ae5790

return result
