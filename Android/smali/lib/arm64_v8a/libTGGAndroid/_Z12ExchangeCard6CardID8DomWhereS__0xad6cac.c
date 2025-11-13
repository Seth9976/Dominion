// 函数: _Z12ExchangeCard6CardID8DomWhereS_
// 地址: 0xad6cac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg3
int32_t x20 = arg2
int32_t x21 = arg1
int32_t var_d0c = arg1

if ((CheckStopMoving(*(DomGetContext() + 8), zx.q(x21), zx.q(x20)) & 1) != 0)
    return 0

void* x0_3 = DomGetContext()
uint64_t result = BoardPileSource(*(x0_3 + 8), zx.q(x21))

if (result.d != 0)
    result = BoardPileWhere(*(x0_3 + 8), zx.q(result.d))
    
    if (result.d != 0)
        int32_t var_d18_1 = 0
        int64_t var_d20_1 = 0
        int32_t var_d28_1 = 0
        int32_t var_d30_1 = 0
        int32_t var_d38_1 = 0
        int64_t var_d40_1 = 0
        int32_t x0_7 =
            MoveCardTo(*(x0_3 + 8), 0xffffffff, zx.q(x21), zx.q(x20), 9, zx.q(result.d), 0, 0)
        CalcScores(*(x0_3 + 8))
        result = 0
        
        if ((x0_7 & 1) != 0)
            void* x0_9 = DomGetContext()
            var_d20_1.d = 0
            char var_d10
            var_d28_1.q = &var_d10
            int32_t var_d30_2 = 1
            int32_t var_d38_2 = 1
            var_d40_1.d = 0
            MoveCardToSafe(*(x0_9 + 8), zx.q(*(x0_9 + 0x18)), zx.q(x19), 0xa, 0x3ec, 9, 0, 0)
            int32_t var_d38_3 = 0
            var_d40_1.d = 0
            NotifyLog(*(x0_9 + 8), 0x25, zx.q(*(x0_9 + 0x18)), 0, &var_d0c, 1, 
                zx.q(CardWhat(*(DomGetContext() + 8), zx.q(x19))), 0)
            CalcScores(*(x0_9 + 8))
            
            if (zx.d(var_d10) != 0)
                int32_t var_88_1 = 0
                int32_t var_d08
                int32_t x20_3
                
                if (x19 == 0)
                    x20_3 = 0
                else
                    x20_3 = 1
                    GameAssert(true)
                    int32_t var_88_2 = 1
                    var_d08 = x19
                
                int32_t var_34 = 0x13
                void* x0_16 = DomGetContext()
                int128_t var_80
                __builtin_memset(&var_80, 0, 0x48)
                int64_t var_d40_2 = 0
                TriggerEvents(*(x0_16 + 8), zx.q(*(x0_16 + 0x18)), &var_34, 1, &var_80, 0, 
                    &var_d08, zx.q(x20_3))
            
            return zx.q(x19)

return result
