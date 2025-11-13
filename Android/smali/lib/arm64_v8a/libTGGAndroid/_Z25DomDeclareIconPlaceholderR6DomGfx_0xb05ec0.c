// 函数: _Z25DomDeclareIconPlaceholderR6DomGfx
// 地址: 0xb05ec0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = DomCurrentTransform(arg1)
int32_t x8 = *(arg1 + 0x24c)
uint64_t x0_10
Transform var_80
int32_t var_60
int32_t var_50

if (x8 == 0)
    int32_t v0_1
    int32_t v1_1
    int32_t v2_1
    int32_t v3_1
    v0_1, v1_1, v2_1, v3_1 = RectScreen()
    var_50 = v0_1
    int32_t var_4c_1 = v1_1
    int32_t var_48_1 = v2_1
    int32_t var_44_1 = v3_1
    int32_t v0_2
    int32_t v1_2
    int32_t v2_2
    int32_t v3_2
    v0_2, v1_2, v2_2, v3_2 = RectScreenSafe()
    var_60 = v0_2
    int32_t var_5c_1 = v1_2
    int32_t var_58_1 = v2_2
    int32_t var_54_1 = v3_2
    *arg1 = 0x2ece
    UI2Begin("hint", arg1 + 0x2148, *UI2_POD_ICONS, &var_50, &var_60, 0x2ece, 0, false)
    UI2SetTransform(zx.q(*(arg1 + 0x2148)), &var_80)
    UI2SetHandler(zx.q(*(arg1 + 0x2148)), TokenClick)
    int32_t x20_1 = *(arg1 + 0x2148)
    LanguageStateSet(zx.q(x20_1))
    UI2SetState(zx.q(x20_1), &data_182dc60, 0xffffffff, 0)
    
    if (*(ActiveGame() + 0x11b4) s>= 5)
        UI2SetState(zx.q(x20_1), &data_182dc78, 0xffffffff, 0)
    
    if ((ActiveGameHasColonies() & 1) != 0)
        UI2SetState(zx.q(x20_1), &data_182dc90, 0xffffffff, 0)
    
    UI2SetState(zx.q(*(arg1 + 0x2148)), &data_182c610, 0xffffffff, 0)
    x0_10 = zx.q(*(arg1 + 0x2148))
else
    uint64_t x23_1 = zx.q(x8.w)
    DomGfx* x21_1
    int64_t x24_1
    
    if (x23_1.d u< *(gDomClient + 0x205e8))
        x24_1 = *(gDomClient + 0x205e0)
        x21_1 = x24_1 + x23_1 * 0x21d8
    
    if (x23_1.d u>= *(gDomClient + 0x205e8) || *(x21_1 + 0x21d0) != x8)
        return result
    
    uint64_t x8_3 = zx.q(*(x24_1 + x23_1 * 0x21d8 + 0x2c) - 3)
    
    if (x8_3.d u> 5)
    label_b0617c:
        pthread_kill(pthread_self(), 6)
        DomGfx* x0_17
        UI2Handle* x1_10
        x0_17, x1_10 = XNoReturn()
        return DomDeclarePile(x0_17, x1_10) __tailcall
    
    switch (x8_3)
        case 0
            return DomDeclarePile(x21_1, arg1 + 0x2148)
        case 1, 3
            *arg1 = 0x2ece
            DomDeclareTokenInt(x21_1, arg1 + 0x2148, &var_80, 0x2ece)
            UI2SetState(zx.q(*(arg1 + 0x2148)), &data_182c610, 0xffffffff, 0)
            x0_10 = zx.q(*(arg1 + 0x2148))
        case 2, 4
            goto label_b0617c
        case 5
            *arg1 = 0x2ece
            int32_t v0_4
            int32_t v1_3
            int32_t v2_3
            int32_t v3_3
            v0_4, v1_3, v2_3, v3_3 = RectScreen()
            var_50 = v0_4
            int32_t var_4c_2 = v1_3
            int32_t var_48_2 = v2_3
            int32_t var_44_2 = v3_3
            int32_t v0_5
            int32_t v1_4
            int32_t v2_4
            int32_t v3_4
            v0_5, v1_4, v2_4, v3_4 = RectScreenSafe()
            var_60 = v0_5
            int32_t var_5c_2 = v1_4
            int32_t var_58_2 = v2_4
            int32_t var_54_2 = v3_4
            *x21_1 = 0x2ece
            void* x21_2 = x24_1 + x23_1 * 0x21d8
            UI2Begin("hint", arg1 + 0x2148, *UI2_POD_ICONS, &var_50, &var_60, 0x2ece, 
                *(*(gDomClient + 0x205e0) + zx.q(*(x21_2 + 0x240)) * 0x21d8 + 4) + 1, false)
            UI2SetTransform(zx.q(*(arg1 + 0x2148)), &var_80)
            UI2SetHandler(zx.q(*(arg1 + 0x2148)), TokenClick)
            DomDeclareHint(zx.q(*(arg1 + 0x2148)), zx.q(*(x21_2 + 0x234)), *(x21_2 + 0x238), 
                *(x21_2 + 0x23c))
            UI2SetState(zx.q(*(arg1 + 0x2148)), &data_182c610, 0xffffffff, 0)
            x0_10 = zx.q(*(arg1 + 0x2148))
return UI2UpdateRoot(x0_10, false, *gSecondsPerUpdate)
