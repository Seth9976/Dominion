// 函数: _Z12TaptipUpdatev
// 地址: 0xb029ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(gDomClient + 0x84318) != 0)
    int32_t v0_1
    int32_t v1_1
    int32_t v2_1
    int32_t v3_1
    v0_1, v1_1, v2_1, v3_1 = RectScreen()
    int32_t var_30 = v0_1
    int32_t var_2c_1 = v1_1
    int32_t var_28_1 = v2_1
    int32_t var_24_1 = v3_1
    int32_t v0_2
    int32_t v1_2
    int32_t v2_2
    int32_t v3_2
    v0_2, v1_2, v2_2, v3_2 = RectScreenSafe()
    XAsset* x2_1 = *(gDomClient + 0x84318)
    int32_t var_40 = v0_2
    int32_t var_3c_1 = v1_2
    int32_t var_38_1 = v2_2
    int32_t var_34_1 = v3_2
    UI2Begin("taptip", gDomClient + 0x84370, x2_1, &var_30, &var_40, 0x2e7e, 0, false)
    ToTransform(*(gDomClient + 0x84318), gDomClient + 0x84330)
    Transform var_60
    UI2SetTransform(zx.q(*(gDomClient + 0x84370)), &var_60)
    UI2SetHandler(zx.q(*(gDomClient + 0x84370)), TaptipClick)
    UI2StateDecl* x1_5 = *(gDomClient + 0x84360)
    
    if (x1_5 != 0)
        UI2SetState(zx.q(*(gDomClient + 0x84370)), x1_5, 0xffffffff, 0)
    
    UI2StateDecl* x1_6 = *(gDomClient + 0x84368)
    
    if (x1_6 != 0)
        UI2SetState(zx.q(*(gDomClient + 0x84370)), x1_6, 0xffffffff, 0)
    
    DeclarePlayerColor(zx.q(*(gDomClient + 0x84370)), zx.q(*(gDomClient + 0x84320)))
    int32_t x8_1 = *(gDomClient + 0x38)
    int32_t x8_2
    
    x8_2 = x8_1 == 0xffffffff ? 0 : x8_1
    
    if (*(gDomClient + 0x84320) != x8_2)
        UI2SetState(zx.q(*(gDomClient + 0x84370)), &data_182c538, 0xffffffff, 0)
    
    if (zx.d(*(gDomClient + 0x84374)) != 0)
        UI2SetState(zx.q(*(gDomClient + 0x84370)), &data_182c550, 0xffffffff, 0)
        
        if (zx.d(*(gDomClient + 0x1d000)) != 0)
            uint64_t x0_9 = zx.q(*(gDomClient + 0x84370))
            SmartPlayDef* var_68 = &data_1151610
            DeclareSmartplays(x0_9, 1, &var_68)
    
    LanguageStateSet(zx.q(*(gDomClient + 0x84370)))
    UI2UpdateRoot(zx.q(*(gDomClient + 0x84370)), false, *gSecondsPerUpdate)
else if (*(gDomClient + 0x84370) != 0)
    return UI2Free(gDomClient + 0x84370) __tailcall
