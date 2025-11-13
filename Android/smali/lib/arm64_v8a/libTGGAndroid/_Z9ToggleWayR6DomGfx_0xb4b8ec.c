// 函数: _Z9ToggleWayR6DomGfx
// 地址: 0xb4b8ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(gDomClient + 0x20570) == *(arg1 + 0x98))
    int64_t result = SoundPlay(*SOUND_SOUND_LOAD_GAME_BTN_CLICK_WAY_OFF)
    *(gDomClient + 0x20570) = 0
    return result

DomGfx& x19 = arg1
SoundPlay(*SOUND_SOUND_LOAD_GAME_BTN_CLICK_WAY)
*(gDomClient + 0x20570) = *(x19 + 0x98)
uint64_t x1_2
int32_t i

for (i = *(x19 + 0x2c); i == 3; i = *(x19 + 0x2c))
    x1_2 = zx.q(*(x19 + 0x30))
    
    if (x1_2.d == 0x70d)
        goto label_b4b9e4
    
    if (x1_2.d == 0x718)
        goto label_b4b9e4
    
    int32_t x10 = *(x19 + 0x70)
    
    if (x10 == 0)
        goto label_b4b9e4
    
    x19 = *(gDomClient + 0x205e0) + zx.q(x10.w) * 0x21d8

if (i == 5)
    return TutorialAdvanceStep(0x10, zx.q(*(x19 + 0x204))) __tailcall

if (i == 1)
    return TutorialAdvanceStep(0x10, zx.q(*(x19 + 0x170))) __tailcall

if (i != 0)
    pthread_kill(pthread_self(), 6)
    DomYield* x0_8
    CardID* x1_8
    bool x2_3
    bool x3_3
    x0_8, x1_8, x2_3, x3_3 = XNoReturn()
    return TrySubmitWay(x0_8, x1_8, x2_3, x3_3) __tailcall

x1_2 = zx.q(CardWhat(gDomClient + 0x20728, zx.q(*(x19 + 0x98))))
label_b4b9e4:
return TutorialAdvanceStep(0x10, x1_2) __tailcall
