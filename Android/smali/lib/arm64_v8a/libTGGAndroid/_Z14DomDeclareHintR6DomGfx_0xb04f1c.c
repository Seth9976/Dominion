// 函数: _Z14DomDeclareHintR6DomGfx
// 地址: 0xb04f1c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x20 = zx.q(*(arg1 + 0x240))
int64_t x21 = *(gDomClient + 0x205e0)
int32_t x8_1 = *(x21 + x20 * 0x21d8 + 0x2c)
int32_t x0_2

if (x8_1 == 0)
    x0_2 = CardGetLayer(x21 + x20 * 0x21d8)
else
    if (x8_1 != 3)
        pthread_kill(pthread_self(), 6)
        return PileLayer(XNoReturn()) __tailcall
    
    if ((IsBoardPile(zx.q(*(x21 + x20 * 0x21d8 + 0x5c))) & 1) == 0)
        int32_t x9_2 = *(gDomClient + 0x38)
        int32_t x8_7 = *(x21 + x20 * 0x21d8 + 0x58)
        int32_t x9_3
        
        x9_3 = x9_2 == 0xffffffff ? 0 : x9_2
        
        if (x8_7 == x9_3)
            x0_2 = 0x2d35
        else if (*(gDomClient + 0x3c) == x8_7)
            x0_2 = 0x2b9a
        else
            x0_2 = 0x2b96
    else
        x0_2 = 0x2b34

DomCurrentTransform(arg1)
int32_t v0
int32_t v1
int32_t v2
int32_t v3
v0, v1, v2, v3 = RectScreen()
int32_t var_40 = v0
int32_t var_3c = v1
int32_t var_38 = v2
int32_t var_34 = v3
int32_t v0_1
int32_t v1_1
int32_t v2_1
int32_t v3_1
v0_1, v1_1, v2_1, v3_1 = RectScreenSafe()
int32_t var_50 = v0_1
int32_t var_4c = v1_1
int32_t var_48 = v2_1
int32_t var_44 = v3_1
*arg1 = x0_2 + 1
UI2Begin("hint", arg1 + 0x2148, *UI2_POD_ICONS, &var_40, &var_50, x0_2 + 1, 
    *(*(gDomClient + 0x205e0) + zx.q(*(arg1 + 0x240)) * 0x21d8 + 4) + 1, false)
Transform var_70
UI2SetTransform(zx.q(*(arg1 + 0x2148)), &var_70)
UI2SetHandler(zx.q(*(arg1 + 0x2148)), TokenClick)
DomDeclareHint(zx.q(*(arg1 + 0x2148)), zx.q(*(arg1 + 0x234)), *(arg1 + 0x238), *(arg1 + 0x23c))
return UI2UpdateRoot(zx.q(*(arg1 + 0x2148)), false, *gSecondsPerUpdate)
