// 函数: _Z11DomMoveCard9PlayerWhoR6DomGfxS1_RK10DomPileLoc12DomMoveStyleb13CardMoveStyleb
// 地址: 0xb24c14
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x22 = arg7
int32_t x21 = arg6.d
int32_t x24 = arg5
int32_t x23 = arg1

if (*(arg3 + 0x5c) == 0x3ec)
    int32_t x9_1 = data_180f6b4
    data_180f6b4 = x9_1 + 1
    *(arg2 + 8) = x9_1

int32_t x8_1 = *(arg2 + 0xa4)

if (x8_1 != 0)
    if (x8_1 == 0x3f1)
        PlayerAreaRemove(arg2)
    else if (x8_1 != 6)
        PileRemoveCard(arg2, *(gDomClient + 0x205e0) + zx.q(*(arg2 + 0x9c)) * 0x21d8, x21.b & 1, 
            (x8_1 == *(arg3 + 0x5c) ? 1 : 0).b)
    else
        int32_t x8_2 = *(arg2 + 0x9c)
        
        if (x8_2 != 0)
            uint64_t x9_2 = zx.q(x8_2.w)
            
            if (x9_2.d u< *(gDomClient + 0x205e8))
                int64_t x10_2 = *(gDomClient + 0x205e0)
                
                if (*(x10_2 + x9_2 * 0x21d8 + 0x21d0) == x8_2)
                    PileRemoveToken(arg2, x10_2 + x9_2 * 0x21d8)

int32_t x10_4 = *(arg2 + 0xa0)
*(arg2 + 0xa0) = x23
int32_t x8_3 = *(arg3 + 0x5c)
int32_t var_178
int64_t var_168_1
int128_t var_11c
int64_t result
MoveAnimData* x3_2
int128_t v0_1
int128_t v1_1
int128_t v2_1
DomGfx& var_100_1
int32_t x9_6
int32_t x11_5
int128_t v3_1

if (x8_3 s> 0x3f0)
    if (x8_3 == 0x3f1)
        result, x3_2, v0_1, v1_1, v2_1, v3_1 = PlayerAreaAdd(arg2, zx.q(x23), 0xffffffff)
        *(arg2 + 0xa4) = 0x3f1
        v0_1.q = 0
        v0_1:8.q = 0
        *(arg2 + 0x9c) = *(arg3 + 0x21d0)
        int32_t x8_7 = *(arg3 + 0x5c)
        int64_t x10_5 = *(arg3 + 0x60)
        int32_t var_170_3 = x23
        int32_t var_16c_3 = result.d
        int32_t var_160_1
        __builtin_memset(&var_160_1, 0, 0x60)
        var_178 = 0x10
        int32_t var_174_3 = x8_7
        var_168_1 = x10_5
        var_100_1 = arg2
    else
        if (x8_3 != 0x474)
        label_b24e9c:
            
            if ((x21 & 1) != 0)
                goto label_b24eb0
            
            x9_6 = *(arg3 + 0x21d0)
            x11_5 = *(gDomClient + 0x1f8e4)
        label_b25290:
            int32_t x9_23
            
            if (x9_6 != x11_5)
                int32_t x9_24 = *(gDomClient + 0x38)
                
                x9_23 = x9_24 == 0xffffffff ? 0 : x9_24
                
                if (x22 == 3 && x9_23 != x23)
                label_b25608:
                    return DomMoveDisplay(zx.q(x23), arg2, arg3, arg4, x21.b & 1)
                
                if (x22 != 5)
                    if (x22 == 7)
                        if (*(arg3 + 0x21d0) == *(gDomClient + 0x1f8e4))
                            goto label_b25314
                        
                        goto label_b252c0
                    
                    if (x22 != 6 || x9_23 == x23)
                        goto label_b25314
                    
                    goto label_b25608
                
                if (x8_3 - 0x3eb u< 2)
                    goto label_b25608
                
                if (x8_3 != 0x3ea)
                label_b25624:
                    
                    if (x8_3 == 0x45f && (x21 & 1) == 0
                            && *(arg3 + 0x21d0) != *(gDomClient + 0x1f8e4))
                        int32_t x8_30 = *(gDomClient + 0x38)
                        int32_t x8_31
                        
                        x8_31 = x8_30 == 0xffffffff ? 0 : x8_30
                        
                        if (x8_31 == x23
                                || (x22 == 0xc && *(arg3 + 0x21d0) != *(gDomClient + 0x1f8e4)))
                            goto label_b25690
                        
                        goto label_b24eb0
                else
                    if (x9_23 != x23)
                        goto label_b25608
                    
                    x8_3 = 0x3ea
                label_b255b4:
                    
                    if (x8_3 != 0x3ea || (x21 & 1) != 0)
                        goto label_b25624
                    
                    if (*(arg3 + 0x21d0) != *(gDomClient + 0x1f8e4))
                        int32_t x8_28 = *(gDomClient + 0x38)
                        int32_t x8_29
                        
                        x8_29 = x8_28 == 0xffffffff ? 0 : x8_28
                        
                        if ((x8_29 == x23 || (x22 != 0xb && x22 != 4))
                                && (x22 != 0xc || *(arg3 + 0x21d0) == *(gDomClient + 0x1f8e4)))
                            goto label_b24eb0
                        
                        goto label_b25690
            else
                if (x22 == 7 && *(arg3 + 0x21d0) != *(gDomClient + 0x1f8e4))
                label_b252c0:
                    int32_t x9_22 = *(gDomClient + 0x38)
                    
                    x9_23 = x9_22 == 0xffffffff ? 0 : x9_22
                    
                    if (x9_23 != x23)
                        goto label_b25608
                    
                    goto label_b25314
                
            label_b25314:
                
                if (x8_3 != 0x3ec || (x21 & 1) != 0)
                    goto label_b25398
                
                if (*(arg3 + 0x21d0) != *(gDomClient + 0x1f8e4))
                    int32_t x9_26 = *(gDomClient + 0x38)
                    int32_t x9_27
                    
                    x9_27 = x9_26 == 0xffffffff ? 0 : x9_26
                    
                    if (x22 != 0x14 && x9_27 == x23)
                        int32_t x9_28 = *(gDomClient + 0x38)
                        int32_t x9_29
                        
                        x9_29 = x9_28 == 0xffffffff ? 0 : x9_28
                        
                        if (x22 == 4 && x9_29 == x23)
                            if ((CardIs(gDomClient + 0x20728, zx.q(*(arg2 + 0x98)), 0x8000000000)
                                    & 1) != 0)
                                goto label_b25690
                            
                            x8_3 = *(arg3 + 0x5c)
                        label_b25398:
                            
                            if (x8_3 != 0x3eb || (x21 & 1) != 0)
                                goto label_b255b4
                            
                            if (*(arg3 + 0x21d0) == *(gDomClient + 0x1f8e4))
                                goto label_b25664
                            
                            int32_t x8_23 = *(gDomClient + 0x38)
                            int32_t x8_24
                            
                            x8_24 = x8_23 == 0xffffffff ? 0 : x8_23
                            
                            if (x8_24 != x23)
                                if (x22 u> 0xc || (1 << x22 & 0x1810) == 0)
                                    goto label_b24eb0
                                
                                goto label_b25690
                            
                            if (x22 != 0xc)
                                goto label_b24eb0
                            
                            goto label_b25690
                    else if (x22 u<= 0x14)
                        if ((1 << x22 & 0x100810) != 0
                                || (x22 == 0xc && *(arg3 + 0x21d0) != *(gDomClient + 0x1f8e4)))
                            goto label_b25690
                        
                        goto label_b24eb0
        label_b25664:
            
            if (x22 != 0xc || *(arg3 + 0x21d0) == *(gDomClient + 0x1f8e4))
                goto label_b24eb0
            
            goto label_b25690
        
        result, x3_2, v0_1, v1_1, v2_1, v3_1 = PileAddCard(arg2, arg3, *arg4, x21.b & 1)
        int32_t x8_5 = *(arg3 + 0x68)
        v0_1.q = 0
        v0_1:8.q = 0
        int32_t var_170_2 = x23
        int32_t var_16c_2 = result.d
        __builtin_memset(&var_168_1, 0, 0x70)
        var_178 = 0x1d
        int32_t var_174_2 = x8_5
else if (x8_3 - 0x3ee u>= 3)
    if (x8_3 != 2)
        goto label_b24e9c
    
    if ((x21 & 1) == 0)
        x9_6 = *(arg3 + 0x21d0)
        x11_5 = *(gDomClient + 0x1f8e4)
        
        if (x9_6 == x11_5)
            goto label_b25290
        
        int32_t x12_1 = *(gDomClient + 0x38)
        int32_t x12_2
        
        x12_2 = x12_1 == 0xffffffff ? 0 : x12_1
        
        if (x22 != 0x13 && x10_4 == x12_2)
            goto label_b25290
        
    label_b25690:
        return DomMoveDisplay(zx.q(x23), arg2, arg3, arg4, false)
    
label_b24eb0:
    result, x3_2, v0_1, v1_1, v2_1, v3_1 = PileAddCard(arg2, arg3, *arg4, x21.b & 1)
    v0_1.q = 0
    v0_1:8.q = 0
    bool cond:2_1 = *(arg3 + 0x21d0) == *(gDomClient + 0x1f8e4)
    int64_t x9_8 = *(arg3 + 0x60)
    int32_t x8_9 = *(arg3 + 0x5c)
    __builtin_memset(&var_11c, 0, 0x1c)
    var_168_1 = x9_8
    int32_t x9_9
    
    x9_9 = cond:2_1 ? 0x15 : 6
    
    int32_t var_170_4 = x23
    int32_t var_16c_4 = result.d
    int32_t var_160_2
    __builtin_memset(&var_160_2, 0, 0x44)
    var_178 = x9_9
    int32_t var_174_4 = x8_9
    var_100_1 = arg2
else
    result, x3_2, v0_1, v1_1, v2_1, v3_1 = PileAddCard(arg2, arg3, *arg4, x21.b & 1)
    int32_t x8_4 = *(arg3 + 0x5c)
    int64_t x9_5 = *(arg3 + 0x60)
    v0_1.q = 0
    v0_1:8.q = 0
    int32_t var_170_1 = x23
    int32_t var_16c_1 = result.d
    int32_t var_160
    __builtin_memset(&var_160, 0, 0x60)
    var_178 = 0x15
    int32_t var_174_1 = x8_4
    var_168_1 = x9_5
    var_100_1 = arg2

if (x24 u> 3)
    pthread_kill(pthread_self(), 6)
    uint64_t x0_15
    DomGfx** x1_10
    x0_15, x1_10 = XNoReturn()
    return LookupCards(x0_15, x1_10) __tailcall

int128_t var_15c
int128_t var_14c
int128_t var_13c
int128_t var_12c
int128_t var_110
int32_t var_f8
int128_t var_f0
int128_t var_e0
int128_t var_68

switch (x24)
    case 0
        void* __offset(DomGfx, 0x258) x0_7 = arg2 + 0x258
        
        if ((x21 & 1) != 0)
            var_f0:8.q = 0
            var_e0.q = 0
            var_f8.q = arg2
            var_f0.d = 1
            var_f0:4.d = *(arg3 + 0x5c)
            var_e0.d = 0
            return DomMove_GameMove(x0_7, 1, &var_f8, x3_2, &var_178, true)
        
        int32_t x8_22 = *(arg3 + 0x5c)
        var_f8 = 1
        int128_t var_b0_2 = var_13c
        int128_t var_a0_2 = var_12c
        int128_t var_90_2 = var_11c
        int128_t var_80_2 = var_110
        int128_t var_f0_2 = var_178.o
        int128_t var_e0_2 = var_168_1.o
        int128_t var_d0_2 = var_15c
        DomGfx& var_198_2 = arg2
        int64_t var_188_2 = 0
        int64_t var_180_2 = 0
        var_180_2.d = 0
        int32_t var_190_2 = 1
        int32_t var_18c_2 = x8_22
        int128_t var_c0_2 = var_14c
        return MoveComponent<DomLoc, DomMoveCallback>::Move(x0_7, &var_f8, 6, 1)
    case 1
        if ((x21 & 1) == 0 && *(arg2 + 0x1f78) == 0)
            int128_t v0_2
            int128_t v1_2
            int128_t v2_2
            int128_t v3_2
            x3_2, v0_2, v1_2, v2_2, v3_2 = CurrentTransformWithMouseover(arg2)
            int64_t var_198
            int128_t var_80 = var_198.o
            int64_t var_188
            int128_t var_64_1 = var_188.o
            *(arg2 + 0x308) = 0
            v1_2 = var_f8.o
            *(arg2 + 0x32c) = var_e0
            *(arg2 + 0x31c) = var_f0
            *(arg2 + 0x30c) = v1_2
            int128_t var_c0
            *(arg2 + 0x34c) = var_c0
            int128_t var_b0
            *(arg2 + 0x35c) = var_b0
            int128_t var_a0
            *(arg2 + 0x36c) = var_a0
            int128_t var_d0
            *(arg2 + 0x33c) = var_d0
            *(arg2 + 0x38c) = var_80
            *(arg2 + 0x39c) = var_68
            *(arg2 + 0x3ac) = var_64_1:0xc.d
            int128_t var_90
            *(arg2 + 0x37c) = var_90
            *(arg2 + 0x3b0) = 0
            v2_2 = var_f8.o
            *(arg2 + 0x3c4) = var_f0
            *(arg2 + 0x3d4) = var_e0
            *(arg2 + 0x3b4) = v2_2
            *(arg2 + 0x404) = var_b0
            *(arg2 + 0x414) = var_a0
            *(arg2 + 0x3e4) = var_d0
            *(arg2 + 0x3f4) = var_c0
            *(arg2 + 0x434) = var_80
            *(arg2 + 0x444) = var_68
            *(arg2 + 0x454) = var_64_1:0xc.d
            *(arg2 + 0x424) = var_90
            *(arg2 + 0x1f78) = 0
        
        int32_t x9_19
        
        if (x22 != 2)
            x9_19 = ((x22 & 0xfffffffe) == 0x12 ? 1 : 0) << 2
        else
            x9_19 = 1
        
        var_f0:8.q = 0
        var_e0.q = 0
        var_f8.q = arg2
        var_f0.d = 1
        var_f0:4.d = *(arg3 + 0x5c)
        var_e0.d = x9_19
        return DomMove_GameMove(arg2 + 0x258, 0, &var_f8, x3_2, &var_178, x21.b & 1)
    case 2
        int32_t x8_12 = *(arg2 + 0x1f78)
        
        if (x8_12 != 0)
            *(arg2 + 0x1f78) = x8_12 - 1
        
        uint64_t x1_6
        
        if ((x21 & 1) == 0)
            x1_6 = 0
            int32_t x8_19 = *(gDomClient + 0x38)
            int32_t x8_20
            
            x8_20 = x8_19 == 0xffffffff ? 0 : x8_19
            
            if (x8_20 == x23)
                x1_6 = zx.q(x22 == 2 ? 1 : 0)
        else
            x1_6 = 0
        
        var_f0:8.q = 0
        var_e0.q = 0
        var_f8.q = arg2
        var_f0.d = 1
        var_f0:4.d = *(arg3 + 0x5c)
        var_e0.d = x22 == 2 ? 1 : 0
        return DomMove_GameMove(arg2 + 0x258, x1_6, &var_f8, x3_2, &var_178, x21.b & 1)
    case 3
        v2_1 = var_11c
        var_f8 = 1
        v1_1 = var_168_1.o
        int128_t var_f0_1 = var_178.o
        int64_t var_188_1 = 0
        int64_t var_180_1 = 0
        var_180_1.d = 0
        int32_t var_190_1 = 1
        int32_t var_18c_1 = *(arg3 + 0x5c)
        uint64_t x8_18 = zx.q(*(arg2 + 0x1f78))
        
        if (x8_18.d s>= 1)
            int64_t x9_21 = x8_18 + 1
            int32_t* x10_8 = arg2 + x8_18 * 0xd8 + 0x448
            
            while (*x10_8 == 3)
                x9_21 -= 1
                x8_18 = zx.q(x8_18.d - 1)
                x10_8 -= 0xd8
                *(arg2 + 0x1f78) = x8_18.d
                
                if (x9_21 s<= 1)
                    goto label_b25190
        
        int128_t var_64
        
        if (x8_18.d == 0x20)
            v0_1 = v1_1
            v1_1 = var_f8.o
            *(arg2 + 0x1f98) = v0_1
            *(arg2 + 0x1f88) = var_f0_1
            *(arg2 + 0x1f78) = v1_1
            *(arg2 + 0x1fd8) = var_12c
            *(arg2 + 0x1fc8) = var_13c
            *(arg2 + 0x1fb8) = var_14c
            *(arg2 + 0x1fa8) = var_15c
            *(arg2 + 0x2008) = var_68
            *(arg2 + 0x1ff8) = var_110
            *(arg2 + 0x1fe8) = v2_1
            *(arg2 + 0x2018) = var_64:0xc.q
            *(arg2 + 0x2038) = var_188_1.o
            *(arg2 + 0x2028) = arg2.o
            *(arg2 + 0x2020) = 8
            *(arg2 + 0x2048) = 0
            return result
        
        if (x8_18.d == 0)
        label_b25190:
            return MoveComponent<DomLoc, DomMoveCallback>::Move(arg2 + 0x258, &var_f8, 8, nullptr)
        
        *(arg2 + 0x1f78) = x8_18.d + 1
        v0_1 = v1_1
        void* x8_26 = arg2 + muls.dp.d(x8_18.d, 0xd8)
        v1_1 = var_f8.o
        *(x8_26 + 0x498) = v0_1
        *(x8_26 + 0x488) = var_f0_1
        *(x8_26 + 0x478) = v1_1
        *(x8_26 + 0x4d8) = var_12c
        v1_1.q = 8
        *(x8_26 + 0x4c8) = var_13c
        *(x8_26 + 0x4b8) = var_14c
        *(x8_26 + 0x4a8) = var_15c
        *(x8_26 + 0x518) = var_64:0xc.q
        *(x8_26 + 0x508) = var_68
        *(x8_26 + 0x4f8) = var_110
        *(x8_26 + 0x4e8) = v2_1
        *(x8_26 + 0x520) = 8
        *(x8_26 + 0x538) = var_188_1.o
        *(x8_26 + 0x528) = arg2.o
        *(x8_26 + 0x548) = 0
        return result
