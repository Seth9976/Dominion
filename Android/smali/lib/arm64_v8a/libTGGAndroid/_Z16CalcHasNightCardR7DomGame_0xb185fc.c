// 函数: _Z16CalcHasNightCardR7DomGame
// 地址: 0xb185fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = 1
void* __offset(DomGame, 0x159c) x19 = arg1 + 0x159c

for (int64_t i = 7; i != 0x48; )
    uint64_t x0 = zx.q(*x19)
    
    if (x0.d != 0 && (PregameCardIs(x0, 0x40000) & 1) != 0)
        break
    
    bool cond:0_1 = i u< 0x47
    i += 1
    x20 = cond:0_1 ? 1 : 0
    x19 += 0x10

return zx.q(x20) & 1
