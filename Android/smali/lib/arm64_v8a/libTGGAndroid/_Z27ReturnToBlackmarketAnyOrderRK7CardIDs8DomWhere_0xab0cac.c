// 函数: _Z27ReturnToBlackmarketAnyOrderRK7CardIDs8DomWhere
// 地址: 0xab0cac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg2
int64_t result = BoardPileWhere(*(DomGetContext() + 8), 0x1301)
int32_t x8 = *(arg1 + 0xc80)

if (x8 == 0)
    return result

int32_t x20_1 = result.d

if (x8 == 1)
    MoveToBottom(arg1, zx.q(x19), zx.q(x20_1))

int32_t x0_4 = CardWhat(zx.q(*arg1))

if (*(arg1 + 0xc80) s>= 2)
    int64_t i = 1
    
    do
        if ((CardIs(zx.q(*(arg1 + (i << 2))), zx.q(x0_4)) & 1) == 0)
            void var_cc8
            memcpy(&var_cc8, arg1, 0xc84)
            int128_t var_d00
            __builtin_memset(&var_d00, 0, 0x30)
            var_d00.d = 0xfe
            int128_t var_cf0
            var_cf0:0xc.d = 0
            int128_t var_ce0
            var_ce0:8.q = 0
            int64_t var_cd0_1 = 0
            ChooseOrder(&var_cc8, &var_d00, 0x39)
            return MoveToBottom(&var_cc8, zx.q(x19), zx.q(x20_1))
        
        i += 1
    while (i s< sx.q(*(arg1 + 0xc80)))

return MoveToBottom(arg1, zx.q(x19), zx.q(x20_1)) __tailcall
