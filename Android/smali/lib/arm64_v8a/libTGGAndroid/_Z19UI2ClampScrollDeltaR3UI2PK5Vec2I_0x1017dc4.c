// 函数: _Z19UI2ClampScrollDeltaR3UI2PK5Vec2I
// 地址: 0x1017dc4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = *(arg1 + 0x1528)

if (x20 == 0)
    return 

int32_t x8_1 = *(arg1 + 0x167c)
UI2& x19_1 = arg1
int32_t var_30

if (x8_1 == 2)
    if ((UI2GetScrollExtentsTable(x19_1, arg2, &var_30).d & 1) == 0)
        *(x19_1 + 0x13a8) = *V20
        return 
else
    if (x8_1 != 3)
    label_1017eb0:
        pthread_kill(pthread_self(), 6)
        UI2* x0_3
        AttribMap* x1_1
        UI2Props* x2_2
        UI2PropsStatic* x3
        UI2PropsNew* x4
        AttribMap* x5
        UI2StateBindings* x6
        bool x7
        float v0_2
        x0_3, x1_1, x2_2, x3, x4, x5, x6, x7, v0_2 = XNoReturn()
        return UI2MergeAttribMapFractional(x0_3, x1_1, x2_2, x3, x4, x5, x6, x7, v0_2) __tailcall
    
    UI2GetScrollExtentsText(x19_1, &var_30)

int32_t v0_1
int32_t v1_1

if (x20 == 1 || x20 == 3)
    v0_1 = *(x19_1 + 0x13ac)
    int32_t var_24
    
    v1_1 = v0_1 f> var_24 ? var_24 : v0_1
    
    int32_t var_2c
    
    v0_1 = v0_1 f< var_2c ? var_2c : v1_1
    
    *(x19_1 + 0x13ac) = v0_1
    return 

if (x20 != 2)
    goto label_1017eb0

v0_1 = *(x19_1 + 0x13a8)
int32_t v2_1 = var_30
int32_t var_28

v1_1 = v0_1 f> var_28 ? var_28 : v0_1

v0_1 = v0_1 f< v2_1 ? v2_1 : v1_1

*(x19_1 + 0x13a8) = v0_1
