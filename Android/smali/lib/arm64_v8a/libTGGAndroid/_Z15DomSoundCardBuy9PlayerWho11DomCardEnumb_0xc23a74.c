// 函数: _Z15DomSoundCardBuy9PlayerWho11DomCardEnumb
// 地址: 0xc23a74
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg2

if ((arg3.d & 1) != 0)
    if (x19 == 0xf1a)
        SoundPlay(*SOUND_SOUND_CARDS_FX_GAIN_FISHERMAN_COMBO)
    else if (x19 == 0xc27)
        SoundPlay(*SOUND_SOUND_CARDS_FX_BUY_EVENT_WINDFALL_COMBO)

void* x0_3 = DomDefGet(zx.q(x19), zx.q(DomCurrentGameVersion()))
int32_t x8_2 = (*(x0_3 + 0xc8)).d

if ((x8_2 & 0x400) != 0)
    if ((arg3.d & 1) == 0)
        int64_t* x8_3 = *(x0_3 + 0x70)
        
        if (x8_3 != 0)
            SoundPlay(*x8_3)
    
    SoundPlay(*SOUND_SOUND_LOAD_GAME_FX_BUY_EVENT)
    x8_2 = (*(x0_3 + 0xc8)).d

if ((x8_2 & 0x8000000) != 0)
    SoundPlay(**(x0_3 + 0x70))

DomGame* x0_7 = DomGameGet()
int32_t x0_8 = FindTokenAnywhere(x0_7, zx.q(*(x0_7 + 0x19d4)), 0xb00)
uint64_t x1_2 = zx.q(x0_8)
int64_t result

if (x0_8 == 0xffffffff)
    result = FindTokenAnywhere(x0_7, zx.q(*(x0_7 + 0x19d4)), 0xb0a)
    x1_2 = zx.q(result.d)

if (x0_8 != 0xffffffff || result.d != 0xffffffff)
    void* x0_11 = TokenGet(x0_7, x1_2)
    result = BoardPileWhere(x0_7, zx.q(BoardPileSource(x0_7, zx.q(x19), false)))
    
    if (result.d == *(x0_11 + 8))
        return SoundPlay(*SOUND_SOUND_CARDS_FX_BUY_CARD_FROM_TRASHING_TOKEN_PILE) __tailcall

return result
