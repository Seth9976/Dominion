// 函数: _Z18DomDeclareTokenIntR6DomGfxR9UI2HandleRK9Transform10DomUILayer
// 地址: 0xb08814
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
UI2Begin("token", arg2, *UI2_POD_ICONS, &var_40, &var_50, x21, 0, false)
UI2SetTransform(zx.q(*arg2), arg3)
UI2SetHandler(zx.q(*arg2), TokenClick)
UI2SetState(zx.q(*arg2), &data_182c628, 0xffffffff, 0)
LanguageStateSet(zx.q(*arg2))

if (*arg1 == 0x2ece)
    UI2SetState(zx.q(*arg2), &data_182c6a0, 0xffffffff, 0)

if ((TutorialGlow(arg1) & 1) != 0)
    UI2SetState(zx.q(*arg2), &data_182c580, 0xffffffff, 0)

int64_t var_28

if (*(GetClient() + 0x5068) == 1)
    int32_t x0_11 = GetActiveTutorial(zx.q(*(ActiveGameSafe() + 0x1c)), &var_28)
    int64_t x8_2 = sx.q(*(gDomClient + 0x205cc))
    
    if (x8_2.d s< x0_11)
        int64_t x9_1 = var_28
        
        if (x9_1 != 0)
            UI2SetState(zx.q(*arg2), x9_1 + x8_2 * 0xb0, 0xffffffff, 0)

int32_t x8_3 = *(arg1 + 0x2c)
uint64_t x0_28
uint64_t x1_10

if (x8_3 == 6)
    int32_t x8_6 = *(gDomClient + 0x38)
    int32_t x8_7
    
    x8_7 = x8_6 == 0xffffffff ? 0 : x8_6
    
    if (*(arg1 + 0x1e4) != x8_7)
    label_b089d4:
        UI2SetState(zx.q(*arg2), &data_182c688, 0xffffffff, 0)
        
        if (*(arg1 + 0x2c) != 6)
            goto label_b08a20
        
        goto label_b089e8
    
label_b089e8:
    uint64_t x8_10 = zx.q(*(arg1 + 0x1e0) - 1)
    
    if (x8_10.d u> 0x37)
        pthread_kill(pthread_self(), 6)
        return DomDeclareToken(XNoReturn()) __tailcall
    
    uint64_t x0_26
    UI2StateDecl* x1_12
    
    switch (x8_10)
        case 0
            return UI2SetState(zx.q(*arg2), &data_182b5a8, 0xffffffff, 0)
        case 1
            return UI2SetState(zx.q(*arg2), &data_182b5d8, 0xffffffff, 0)
        case 2
            x0_26 = zx.q(*arg2)
            x1_12 = &data_182b5f0
        label_b08f94:
            int64_t result = UI2SetState(x0_26, x1_12, 0xffffffff, 0)
            int32_t x1_14 = *(arg1 + 0x1e8)
            
            if (x1_14 s< 2)
                return result
            
            return SetPodCounter(zx.q(*arg2), x1_14, false)
        case 3
            return UI2SetState(zx.q(*arg2), &data_182b608, 0xffffffff, 0)
        case 4
            return UI2SetState(zx.q(*arg2), &data_182b680, 0xffffffff, 0)
        case 5
            UI2SetState(zx.q(*arg2), &data_182b698, 0xffffffff, 0)
            x0_28 = zx.q(*arg2)
            x1_10 = zx.q(*(arg1 + 0x1e4))
        case 6
            return UI2SetState(zx.q(*arg2), &data_182b6b0, 0xffffffff, 0)
        case 7
            return UI2SetState(zx.q(*arg2), &data_182b6c8, 0xffffffff, 0)
        case 8
            return UI2SetState(zx.q(*arg2), &data_182b620, 0xffffffff, 0)
        case 9
            return UI2SetState(zx.q(*arg2), &data_182b638, 0xffffffff, 0)
        case 0xa
            x0_26 = zx.q(*arg2)
            x1_12 = &data_182b650
            goto label_b08f94
        case 0xb
            return UI2SetState(zx.q(*arg2), &data_182b668, 0xffffffff, 0)
        case 0xc
            UI2SetState(zx.q(*arg2), &data_182b6e0, 0xffffffff, 0)
            DeclarePlayerColor(zx.q(*arg2), zx.q(*(arg1 + 0x1e4)))
            UI2SetState(zx.q(*arg2), &data_182b518, 0xffffffff, 0)
            return SetPodCounter(zx.q(*arg2), *(arg1 + 0x1e8), false)
        case 0xd
            return UI2SetState(zx.q(*arg2), &data_182b6f8, 0xffffffff, 0)
        case 0xe
            return UI2SetState(zx.q(*arg2), &data_182b710, 0xffffffff, 0)
        case 0xf
            return UI2SetState(zx.q(*arg2), &data_182b728, 0xffffffff, 0)
        case 0x10
            pthread_kill(pthread_self(), 6)
            return DomDeclareToken(XNoReturn()) __tailcall
        case 0x11
            x0_26 = zx.q(*arg2)
            x1_12 = &data_182b740
            goto label_b08f94
        case 0x12
            x0_26 = zx.q(*arg2)
            x1_12 = &data_182b758
            goto label_b08f94
        case 0x13
            x0_26 = zx.q(*arg2)
            x1_12 = &data_182b770
            goto label_b08f94
        case 0x14
            x0_26 = zx.q(*arg2)
            x1_12 = &data_182b788
            goto label_b08f94
        case 0x15
            x0_26 = zx.q(*arg2)
            x1_12 = &data_182b7a0
            goto label_b08f94
        case 0x16
            x0_26 = zx.q(*arg2)
            x1_12 = &data_182b7b8
            goto label_b08f94
        case 0x17
            x0_26 = zx.q(*arg2)
            x1_12 = &data_182b7d0
            goto label_b08f94
        case 0x18
            x0_26 = zx.q(*arg2)
            x1_12 = &data_182b7e8
            goto label_b08f94
        case 0x19
            x0_26 = zx.q(*arg2)
            x1_12 = &data_182b800
            goto label_b08f94
        case 0x1a
            x0_26 = zx.q(*arg2)
            x1_12 = &data_182b818
            goto label_b08f94
        case 0x1b
            x0_26 = zx.q(*arg2)
            x1_12 = &data_182b830
            goto label_b08f94
        case 0x1c
            x0_26 = zx.q(*arg2)
            x1_12 = &data_182b848
            goto label_b08f94
        case 0x1d
            x0_26 = zx.q(*arg2)
            x1_12 = &data_182b860
            goto label_b08f94
        case 0x1e
            x0_26 = zx.q(*arg2)
            x1_12 = &data_182b878
            goto label_b08f94
        case 0x1f
            x0_26 = zx.q(*arg2)
            x1_12 = &data_182b890
            goto label_b08f94
        case 0x20
            x0_26 = zx.q(*arg2)
            x1_12 = &data_182b8a8
            goto label_b08f94
        case 0x21
            x0_26 = zx.q(*arg2)
            x1_12 = &data_182b8c0
            goto label_b08f94
        case 0x22
            x0_26 = zx.q(*arg2)
            x1_12 = &data_182b8d8
            goto label_b08f94
        case 0x23
            x0_26 = zx.q(*arg2)
            x1_12 = &data_182b8f0
            goto label_b08f94
        case 0x24
            x0_26 = zx.q(*arg2)
            x1_12 = &data_182b908
            goto label_b08f94
        case 0x25
            x0_26 = zx.q(*arg2)
            x1_12 = &data_182b920
            goto label_b08f94
        case 0x26
            x0_26 = zx.q(*arg2)
            x1_12 = &data_182b938
            goto label_b08f94
        case 0x27
            x0_26 = zx.q(*arg2)
            x1_12 = &data_182b968
            goto label_b08f94
        case 0x28
            x0_26 = zx.q(*arg2)
            x1_12 = &data_182b980
            goto label_b08f94
        case 0x29
            x0_26 = zx.q(*arg2)
            x1_12 = &data_182b998
            goto label_b08f94
        case 0x2a
            x0_26 = zx.q(*arg2)
            x1_12 = &data_182b9e0
            goto label_b08f94
        case 0x2b
            x0_26 = zx.q(*arg2)
            x1_12 = &data_182b9f8
            goto label_b08f94
        case 0x2c
            x0_26 = zx.q(*arg2)
            x1_12 = &data_182ba10
            goto label_b08f94
        case 0x2d
            x0_26 = zx.q(*arg2)
            x1_12 = &data_182b9b0
            goto label_b08f94
        case 0x2e
            x0_26 = zx.q(*arg2)
            x1_12 = &data_182b9c8
            goto label_b08f94
        case 0x2f
            x0_26 = zx.q(*arg2)
            x1_12 = &data_182ba28
            goto label_b08f94
        case 0x30
            x0_26 = zx.q(*arg2)
            x1_12 = &data_182ba40
            goto label_b08f94
        case 0x31
            x0_26 = zx.q(*arg2)
            x1_12 = &data_182ba58
            goto label_b08f94
        case 0x32
            x0_26 = zx.q(*arg2)
            x1_12 = &data_182ba70
            goto label_b08f94
        case 0x33
            x0_26 = zx.q(*arg2)
            x1_12 = &data_182ba88
            goto label_b08f94
        case 0x34
            x0_26 = zx.q(*arg2)
            x1_12 = &data_182baa0
            goto label_b08f94
        case 0x35
            x0_26 = zx.q(*arg2)
            x1_12 = &data_182bab8
            goto label_b08f94
        case 0x36
            return UI2SetState(zx.q(*arg2), &data_182bad0, 0xffffffff, 0)
        case 0x37
            return UI2SetState(zx.q(*arg2), &data_182bae8, 0xffffffff, 0)
else
    if (x8_3 == 4)
        int32_t x8_4 = *(gDomClient + 0x38)
        int32_t x8_5
        
        x8_5 = x8_4 == 0xffffffff ? 0 : x8_4
        
        if (*(arg1 + 0x1c4) != x8_5)
            goto label_b089d4
        
        goto label_b08a20
    
label_b08a20:
    void* x0_16 = DomTokenDefGet(zx.q(*(arg1 + 0x1b4)))
    int32_t x8_11 = *(arg1 + 0x1b4)
    
    if (x8_11 == 0xb01 && zx.d(*(arg1 + 0x1d0)) != 0)
        UI2SetState(zx.q(*arg2), &data_182b590, 0xffffffff, 0)
    else if (*(arg1 + 0x1f78) == 0)
        int32_t x9_9 = *(arg1 + 0x1bc)
        
        if (x9_9 != 0x3f1 && x9_9 != 6)
            goto label_b08a58
        
        if (x8_11 == 0x401)
            UI2SetState(zx.q(*arg2), &data_182b578, 0xffffffff, 0)
        else
            if (x8_11 != 0x600)
                goto label_b08a58
            
            int32_t x21_2 = *(arg1 + 0x1d8)
            UI2SetState(zx.q(*arg2), &data_182b560, 0xffffffff, 0)
            SetPodCounter(zx.q(*arg2), x21_2, false)
    else
    label_b08a58:
        UI2SetState(zx.q(*arg2), x0_16 + 0x18, 0xffffffff, 0)
    
    int32_t x3_1 = *(arg1 + 0x1d4)
    var_28.b = 0
    int32_t x21_1
    
    if (x3_1 == 0)
        x21_1 = *(arg1 + 0x1d8)
    else
        x21_1 = x3_1
    
    if ((ShouldShowCount(zx.q(*(arg1 + 0x1b4)), zx.q(*(arg1 + 0x1bc)), x21_1, x3_1, &var_28) & 1)
            != 0)
        SetPodCounter(zx.q(*arg2), x21_1, var_28.b)
    
    if (*(arg1 + 0x1b4) == 0xa00)
        int32_t x8_15 = *(gDomClient + 0x38)
        int32_t x10_2
        
        x10_2 = x8_15 == 0xffffffff ? 0 : x8_15
        
        if (*(gDomClient + 0x205c4) != x10_2)
            UI2SetState(zx.q(*arg2), &data_182c670, 0xffffffff, 0)
            x8_15 = *(gDomClient + 0x38)
        
        int32_t x8_16
        
        x8_16 = x8_15 == 0xffffffff ? 0 : x8_15
        
        UI2StateDecl* x1_9
        
        if (*(gDomClient + 0x2079c) != x8_16)
            x1_9 = &data_182c598
        else if (*(gDomClient + 0x207a0) != LocalWho())
            x1_9 = &data_182c598
        else
            int32_t x8_17 = *(gDomClient + 0x20758)
            x1_9 = &data_182c5b0
            
            if (x8_17 - 2 u>= 2 && x8_17 != 0xfd)
                x1_9 = &data_182c598
        
        UI2SetState(zx.q(*arg2), x1_9, 0xffffffff, 0)
    
    x0_28 = zx.q(*arg2)
    x1_10 = zx.q(*(arg1 + 0x1c4))

return DeclarePlayerColor(x0_28, x1_10)
