// 函数: _Z17DomDeclareHintIntR6DomGfxR9UI2HandleRK9Transform10DomUILayer
// 地址: 0xb0494c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = arg4
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
*arg1 = x21
UI2Begin("hint", arg2, *UI2_POD_ICONS, &var_40, &var_50, x21, 
    *(*(gDomClient + 0x205e0) + zx.q(*(arg1 + 0x240)) * 0x21d8 + 4) + 1, false)
UI2SetTransform(zx.q(*arg2), arg3)
UI2SetHandler(zx.q(*arg2), TokenClick)
return DomDeclareHint(zx.q(*arg2), zx.q(*(arg1 + 0x234)), *(arg1 + 0x238), *(arg1 + 0x23c))
