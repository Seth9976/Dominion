// 函数: _Z13DomGfxInspectR6DomGfx
// 地址: 0xaf5f88
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = TutorialCardIsClickable(arg1)

if ((result.d & 1) != 0)
    uint64_t x8_1 = zx.q(*(arg1 + 0x2c))
    
    if (x8_1.d u> 5)
        pthread_kill(pthread_self(), 6)
        return TutorialCardIsClickable(XNoReturn()) __tailcall
    
    switch (x8_1)
        case 0
            return DomZoomCard(arg1, false) __tailcall
        case 1
            if (*(arg1 + 0x174) == 1)
                return DomZoomExtra(arg1) __tailcall
        case 2
            pthread_kill(pthread_self(), 6)
            return TutorialCardIsClickable(XNoReturn()) __tailcall
        case 3
            return DomZoomPile(arg1, false) __tailcall

return result
