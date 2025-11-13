// 函数: _Z19Watchtower_Reactionv
// 地址: 0xab3f40
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

RevealThis()
LogContext::LogContext()
int64_t x0 = Reaction_Card()
int32_t x19 = x0.d

if ((CardIsWhereGained(x0) & 1) != 0)
    int32_t x0_3 = CardGainedToWhere(zx.q(x19))
    int128_t var_60
    __builtin_memset(&var_60, 0, 0x30)
    var_60.d = 0x45
    int128_t var_50
    var_50:0xc.d = x19
    int128_t var_40
    var_40:8.q = 0
    int64_t var_30_1 = 0
    
    if (ChooseWhere(zx.q(x19), 0x3eb, 2, &var_60, 0) != 2)
        MoveToTopDeck(zx.q(x19), zx.q(x0_3), 0xb)
    else
        Trash(zx.q(x19), zx.q(x0_3), 0)

return LogContext::~LogContext()
