// 函数: _Z15DomDeclareArrowR6DomGfx
// 地址: 0xb047a8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t v0
int32_t v1
int32_t v2
int32_t v3
v0, v1, v2, v3 = RectScreen()
int32_t var_30 = v0
int32_t var_2c = v1
int32_t var_28 = v2
int32_t var_24 = v3
int32_t v0_1
int32_t v1_1
int32_t v2_1
int32_t v3_1
v0_1, v1_1, v2_1, v3_1 = RectScreenSafe()
int32_t var_40 = v0_1
int32_t var_3c = v1_1
int32_t var_38 = v2_1
int32_t var_34 = v3_1
DomCurrentTransform(arg1)
int32_t x0_2 = GetTokenLayer(arg1)
*arg1 = x0_2
UI2Begin("arrow", arg1 + 0x2148, *UI2_POD_ICONS, &var_30, &var_40, x0_2, 0, false)
Transform var_60
UI2SetTransform(zx.q(*(arg1 + 0x2148)), &var_60)
UI2SetHandler(zx.q(*(arg1 + 0x2148)), TokenClick)
int32_t x8 = *(arg1 + 0x220)

if (x8 == 3)
    UI2SetState(zx.q(*(arg1 + 0x2148)), &data_182c1c0, 0xffffffff, 0)
    int32_t x8_1 = *(gDomClient + 0x38)
    int32_t x21_1
    
    x21_1 = x8_1 == 0xffffffff ? 0 : x8_1
    
    if (x21_1 != *(gDomClient + 0x2079c))
        UI2SetState(zx.q(*(arg1 + 0x2148)), &data_182c5e0, 0xffffffff, 0)
    else if (x21_1 != LocalWho() && *(gDomClient + 0x24) == 3)
        UI2SetState(zx.q(*(arg1 + 0x2148)), &data_182c5e0, 0xffffffff, 0)
else
    if (x8 != 0)
        pthread_kill(pthread_self(), 6)
        DomGfx* x0_15
        UI2Handle* x1_5
        Transform* x2_1
        int64_t x3_1
        x0_15, x1_5, x2_1, x3_1 = XNoReturn()
        return DomDeclareHintInt(x0_15, x1_5, x2_1, x3_1) __tailcall
    
    UI2SetState(zx.q(*(arg1 + 0x2148)), &data_182c5c8, 0xffffffff, 0)
    DeclarePlayerColor(zx.q(*(arg1 + 0x2148)), zx.q(*(arg1 + 0x228)))

UI2StateDecl* x1_4

if (*(GetLocalSettings() + 0xc) == 0)
    x1_4 = UIS_GFX_HIGH
else
    x1_4 = UIS_GFX_LOW

UI2SetState(zx.q(*(arg1 + 0x2148)), x1_4, 0xffffffff, 0)
return UI2UpdateRoot(zx.q(*(arg1 + 0x2148)), false, *gSecondsPerUpdate)
