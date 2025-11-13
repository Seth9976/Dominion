// 函数: _Z13ResolveEffect9DomEffect9PlayerWho6CardIDiiiiiii9ContextIdb
// 地址: 0xb4ef00
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x28 = zx.d(arg12)
int64_t fp = arg11.q
int32_t i_10 = arg3
int32_t var_14c = arg2
int32_t x27 = arg1
uint64_t result
int64_t x2
int128_t v0
int128_t v1
int128_t v2
int128_t v3
result, x2, v0, v1, v2, v3 = GetLocalSettings()
int32_t x8 = *(result + 8)

if (x8 != 3 && x8 != 1)
    if (x8 != 0)
        goto label_b4ff54
    
    result, x2, v0, v1, v2, v3 = GetClient()
    
    if (*(result + 0x5068) == 1)
        result, x2, v0, v1, v2, v3 = ActiveGame()
        uint64_t i_27 = zx.q(*(result + 0x11b4))
        
        if (i_27.d s>= 1)
            void* x9_1 = result + 0x68
            uint64_t i
            
            do
                int32_t x10_1 = *x9_1
                
                if (x10_1 u>= 4 && x10_1 - 0x3e8 u>= 2)
                    goto label_b4ff54
                
                i = i_27
                i_27 -= 1
                x9_1 += 0x22c
            while (i != 1)

char x8_25
void* x11_9
int32_t var_128
int32_t var_80
DomGame* x0_75
uint64_t x1_47
int64_t x2_29
void* x8_109
void* i_46
int128_t v0_14
int128_t v1_14
int128_t v2_14
int128_t v3_14
int128_t v4_14
int128_t v5_14
int128_t v6_14

if (x27 u> 0x2f)
label_b4ff54:
    pthread_kill(pthread_self(), 6)
    result, x8_25, x11_9 = XNoReturn()
else
    switch (x27)
        case 0
            int64_t x23_1
            int32_t x24_1
            
            if (arg5 == 0)
                x24_1 = var_14c
                x23_1 = 0
            else
                x24_1 = var_14c
                
                if (arg5 != 0xffffffff)
                    x23_1 = 0xfffffffe | zx.q(arg5) << 0x20
                else
                    x23_1 = 0xffffffff
            
            void* x0_57 = CardDef(gDomClient + 0x20728, zx.q(i_10))
            int64_t i_52 = sx.q(*(gDomClient + 0x83b08))
            int32_t x8_81 = *(x0_57 + 0xc0)
            int64_t i_50 = i_52
            
            if (i_52.d s> 0)
                i_50 = i_52 & 0xffffffff
                int64_t (* x11_43)() = gDomClient + 0x83708
                int64_t i_41 = i_50
                int64_t i_1
                
                do
                    if (*x11_43 == x8_81)
                        goto label_b50224
                    
                    i_1 = i_41
                    i_41 -= 1
                    x11_43 += 4
                while (i_1 != 1)
            
            *(gDomClient + 0x83b08) = i_52.d + 1
            *(gDomClient + (i_50 << 2) + 0x83708) = x8_81
        label_b50224:
            DomClient* x0_59 = DomFindOrCreatePile(zx.q(x24_1), zx.q(arg4), 0, 0)
            return DomCreateCard(x0_59, zx.q(i_10), x0_59, x23_1)
        case 1
            return DomCreatePile_Board(zx.q(arg4), zx.q(arg5))
        case 2
            uint64_t x9_2 = zx.q(*(gDomClient + 0x205e8))
            void* i_28
            int64_t x9_3
            void* i_2
            
            if (x9_2.d != 0)
                i_28 = *(gDomClient + 0x205e0)
                x9_3 = i_28 + x9_2 * 0x21d8
                i_2 = i_28
                
                while (zx.d(*(i_2 + 0x21d2)) == 0)
                    i_2 += 0x21d8
                    
                    if (i_2 u>= x9_3)
                        goto label_b502bc
            
            void* i_42
            
            if (x9_2.d == 0 || i_2 == 0xffffffff)
            label_b502bc:
                i_42 = nullptr
            else
                do
                    if (*(i_2 + 0x2c) == 3 && *(i_2 + 0x58) == 0xffffffff && *(i_2 + 0x5c) == arg4
                            && *(i_2 + 0x60) == 0)
                        i_42 = i_2
                        break
                    
                    if (i_2 == 0)
                        i_2 = i_28
                    else
                        i_2 += 0x21d8
                    
                    if (i_2 u>= x9_3)
                        goto label_b502bc
                    
                    while (zx.d(*(i_2 + 0x21d2)) == 0)
                        i_2 += 0x21d8
                        
                        if (i_2 u>= x9_3)
                            goto label_b502bc
                    
                    i_42 = nullptr
                while (i_2 != 0xffffffff)
            
            *(i_42 + 0x34) = arg5
            *(i_42 + 0x38) = arg6
            *(i_42 + 0x3c) = arg7
            *(i_42 + 0x40) = arg8
        labelid_1:
            return result
        case 3
            uint64_t x9_4 = zx.q(*(gDomClient + 0x205e8))
            void* i_29
            int64_t x9_5
            void* i_3
            
            if (x9_4.d != 0)
                i_29 = *(gDomClient + 0x205e0)
                x9_5 = i_29 + x9_4 * 0x21d8
                i_3 = i_29
                
                while (zx.d(*(i_3 + 0x21d2)) == 0)
                    i_3 += 0x21d8
                    
                    if (i_3 u>= x9_5)
                        goto label_b5034c
            
            void* i_43
            
            if (x9_4.d == 0 || i_3 == 0xffffffff)
            label_b5034c:
                i_43 = nullptr
            else
                do
                    if (*(i_3 + 0x2c) == 3 && *(i_3 + 0x58) == 0xffffffff && *(i_3 + 0x5c) == arg4
                            && *(i_3 + 0x60) == 0)
                        i_43 = i_3
                        break
                    
                    if (i_3 == 0)
                        i_3 = i_29
                    else
                        i_3 += 0x21d8
                    
                    if (i_3 u>= x9_5)
                        goto label_b5034c
                    
                    while (zx.d(*(i_3 + 0x21d2)) == 0)
                        i_3 += 0x21d8
                        
                        if (i_3 u>= x9_5)
                            goto label_b5034c
                    
                    i_43 = nullptr
                while (i_3 != 0xffffffff)
            
            *(i_43 + 0x44) = arg5
            *(i_43 + 0x48) = arg6
            *(i_43 + 0x4c) = arg7
            *(i_43 + 0x50) = arg8
        labelid_1:
            return result
        case 4
            *(gDomClient + 0x205c0) = arg5
            *(gDomClient + 0x205c4) = var_14c
            *(gDomClient + 0x205c8) = arg4
            void* x8_6
            
            if (var_14c == 0xffffffff)
                x8_6 = gDomClient + 0x48
            else
                x8_6 = gDomClient + 0x48 + muls.dp.d(var_14c, 0x4d48)
            
            if (arg6 == 0)
                *(x8_6 + 0x30) += 1
            else
                int64_t (* x9_7)()
                
                if (arg4 == 0xffffffff)
                    x9_7 = gDomClient + 0x48
                else
                    x9_7 = gDomClient + 0x48 + muls.dp.d(arg4, 0x4d48)
                
                *(x9_7 + 0x2c) += 1
            
            *(x8_6 + 0x1934) = 0
            result = LocalWho()
            
            if (result.d == arg4)
                if ((x28 & 1) == 0)
                    result = DomSoundGameMessage(zx.q(var_14c), 1)
                
                if (arg4 != var_14c)
                    result = LocalWho()
                    
                    if (result.d == arg4)
                        *(gDomClient + 0x24) = 1
            
            int32_t x8_73 = *(x8_6 + 0x4d28)
            *(x8_6 + 0x4d26) = 0
            
            if (x8_73 != 0)
                result = DomCreateTokenIcon(1, 0, zx.q(var_14c), false)
            
            int32_t x8_74 = *(x8_6 + 0x4d30)
            *(x8_6 + 0x4d2c) = 0
            
            if (x8_74 == 0)
            labelid_1:
                return result
            
            return DomCreateTokenIcon(9, 0, zx.q(var_14c), false) __tailcall
        case 5
            if ((x28 & 1) == 0)
                return DomSoundPhase(zx.q(var_14c), zx.q(arg4)) __tailcall
            
        labelid_1:
            return result
        case 6
            *(gDomClient + 0x1f8e8) = 0
            *(gDomClient + 0x1f8ea) = 0
            
            if (arg4 != 0 && (x28 & 1) == 0 && *(gDomClient + 0x205c8) == LocalWho())
                *(gDomClient + 0x24) = 3
            
            *(gDomClient + 0x205c4) = -1
            uint64_t x9_9 = zx.q(*(gDomClient + 0x205e8))
            
            if (x9_9.d != 0)
                void* i_4 = *(gDomClient + 0x205e0)
                int64_t x9_10 = i_4 + x9_9 * 0x21d8
                
                do
                    if (zx.d(*(i_4 + 0x21d2)) != 0)
                        while (i_4 != 0xffffffff)
                            if (*(i_4 + 0x2c) == 0)
                                int32_t x8_83 = *(i_4 + 0xa4)
                                
                                if (x8_83 != 0x3e9 && x8_83 != 0x451)
                                    *(i_4 + 0x10c) = 0
                                
                                if ((CardIs(gDomClient + 0x20728, zx.q(*(i_4 + 0x98)), 0x130a) & 1)
                                        != 0)
                                    *(i_4 + 0x10c) = 0
                                
                                if (*(i_4 + 0xa4) == 0x3e9)
                                    int32_t x0_63 =
                                        CardIs(gDomClient + 0x20728, zx.q(*(i_4 + 0x98)), 0x1000000)
                                    int32_t x0_65
                                    
                                    if ((x0_63 & 1) == 0)
                                        x0_65 = CardIs(gDomClient + 0x20728, zx.q(*(i_4 + 0x98)), 
                                            0x2000000)
                                    
                                    if ((x0_63 & 1) != 0 || (x0_65 & 1) != 0)
                                        if (zx.d(*(i_4 + 0x168)) == 0)
                                            uint64_t x10_44 = zx.q(*(gDomClient + 0x205e8))
                                            DomGfx* j_8
                                            int64_t x10_45
                                            DomGfx* j
                                            
                                            if (x10_44.d != 0)
                                                j_8 = *(gDomClient + 0x205e0)
                                                x10_45 = j_8 + x10_44 * 0x21d8
                                                j = j_8
                                                
                                                while (zx.d(*(j + 0x21d2)) == 0)
                                                    j += 0x21d8
                                                    
                                                    if (j u>= x10_45)
                                                        goto label_b50538
                                            
                                            DomGfx* j_7
                                            
                                            if (x10_44.d == 0 || j == 0xffffffff)
                                            label_b50538:
                                                j_7 = nullptr
                                            else
                                                do
                                                    if (*(j + 0x2c) == 3
                                                            && *(j + 0x58) == 0xffffffff
                                                            && *(j + 0x5c) == *(i_4 + 0xa8)
                                                            && *(j + 0x60) == 0)
                                                        j_7 = j
                                                        break
                                                    
                                                    if (j == 0)
                                                        j = j_8
                                                    else
                                                        j += 0x21d8
                                                    
                                                    if (j u>= x10_45)
                                                        goto label_b50538
                                                    
                                                    while (zx.d(*(j + 0x21d2)) == 0)
                                                        j += 0x21d8
                                                        
                                                        if (j u>= x10_45)
                                                            goto label_b50538
                                                    
                                                    j_7 = nullptr
                                                while (j != 0xffffffff)
                                            
                                            DomMoveCard(zx.q(var_14c), i_4, j_7, &data_7ef484, 1, 
                                                x28.b & 1, 8, false)
                                        else
                                            PileRemoveCard(i_4, 
                                                *(gDomClient + 0x205e0)
                                                    + zx.q(*(i_4 + 0x9c)) * 0x21d8, 
                                                x28.b & 1, false)
                                            UI2Free(i_4 + 0x2148)
                                            UI2Free(i_4 + 0x214c)
                                            UI2Free(i_4 + 0x2150)
                                            UI2Free(i_4 + 0x2154)
                                            uint32_t x0_71 = *(i_4 + 0x1f90)
                                            
                                            if (x0_71 != 0)
                                                SpineDestroy(x0_71)
                                            
                                            int32_t x9_64 = *(gDomClient + 0x205f0)
                                            *(gDomClient + 0x205f0) = zx.d(*(i_4 + 0x21d0))
                                            *(i_4 + 0x21d0) = x9_64
                                            *(gDomClient + 0x205f4) -= 1
                            
                            void* i_39 = *(gDomClient + 0x205e0)
                            
                            if (i_4 == 0)
                                i_4 = i_39
                            else
                                i_4 += 0x21d8
                            
                            int64_t x8_92 = i_39 + zx.q(*(gDomClient + 0x205e8)) * 0x21d8
                            
                            if (i_4 u>= x8_92)
                                break
                            
                            while (zx.d(*(i_4 + 0x21d2)) == 0)
                                i_4 += 0x21d8
                                
                                if (i_4 u>= x8_92)
                                    goto label_b505bc
                        
                        break
                    
                    i_4 += 0x21d8
                while (i_4 u< x9_10)
            
        label_b505bc:
            int64_t (* x8_94)()
            
            if (var_14c == 0xffffffff)
                x8_94 = gDomClient + 0x48
            else
                x8_94 = gDomClient + 0x48 + muls.dp.d(var_14c, 0x4d48)
            
            *(x8_94 + 0x4d26) = 0
            DomRemoveTokenIconSimple(1, zx.q(var_14c), false)
            *(x8_94 + 0x4d2c) = 0
            DomRemoveTokenIconSimple(9, zx.q(var_14c), false)
            *(x8_94 + 0x4d34) = 0
            return DomRemoveTokenIconSimple(0xe, zx.q(var_14c), false) __tailcall
        case 7, 0xf, 0x1d, 0x1e
        labelid_1:
            return result
        case 8
            if ((x28 & 1) == 0)
                result = DomSoundCardBuy(zx.q(var_14c), 
                    zx.q(CardWhat(gDomClient + 0x20728, zx.q(i_10))), (arg4 != 0 ? 1 : 0).b)
            
            uint64_t x9_11 = zx.q(*(gDomClient + 0x205e8))
            void* i_30
            int64_t x9_12
            void* i_5
            
            if (x9_11.d != 0)
                i_30 = *(gDomClient + 0x205e0)
                x9_12 = i_30 + x9_11 * 0x21d8
                i_5 = i_30
                
                while (zx.d(*(i_5 + 0x21d2)) == 0)
                    i_5 += 0x21d8
                    
                    if (i_5 u>= x9_12)
                        goto label_b50674
            
            if (x9_11.d == 0 || i_5 == 0xffffffff)
            label_b50674:
                i_46 = nullptr
            else
                do
                    if (*(i_5 + 0x2c) == 0 && *(i_5 + 0x98) == i_10 && zx.d(*(i_5 + 0x168)) == 0)
                        i_46 = i_5
                        
                        if ((x28 & 1) != 0)
                            goto label_b52444_3
                        
                        goto label_b50690
                    
                    if (i_5 == 0)
                        i_5 = i_30
                    else
                        i_5 += 0x21d8
                    
                    if (i_5 u>= x9_12)
                        goto label_b50674
                    
                    while (zx.d(*(i_5 + 0x21d2)) == 0)
                        i_5 += 0x21d8
                        
                        if (i_5 u>= x9_12)
                            goto label_b50674
                    
                    i_46 = nullptr
                while (i_5 != 0xffffffff)
            
            if ((x28 & 1) != 0)
            labelid_1:
                return result
            
        label_b50690:
            result, v0_14, v1_14, v2_14, v3_14, v4_14, v5_14, v6_14 =
                CardIs(gDomClient + 0x20728, zx.q(*(i_46 + 0x98)), 0x400)
            
            if ((result.d & 1) == 0)
                x1_47 = zx.q(*(i_46 + 0x98))
                x0_75 = gDomClient + 0x20728
                x2_29 = 0x8000000
                goto label_b50a5c
            
        label_b50a6c:
            uint64_t x11_48 = zx.q(*(i_46 + 0x9c))
            int64_t x12_29 = *(gDomClient + 0x205e0)
            void* x8_104 = x12_29 + x11_48 * 0x21d8
            
            if (*(x8_104 + 0x1f78) s< 1 || *(x12_29 + x11_48 * 0x21d8 + 0x520) != 9)
                int32_t var_120_2 = 0
                var_128.q = 0
                void* x13_38 = x12_29 + x11_48 * 0x21d8
                XAsset* x1_52 = *SPINE_ANIM_EVENT_OPPONENT_BUY_EVENT_OPPONENT_BUY
                
                if (*(x13_38 + 0x3b0) != 0)
                    v0_14 = *(x13_38 + 0x3d0)
                    v1_14 = *(x13_38 + 0x3b0)
                    void* x13_39 = x12_29 + x11_48 * 0x21d8
                    *(x13_39 + 0x270) = *(x13_38 + 0x3c0)
                    *(x13_39 + 0x280) = v0_14
                    *(x13_39 + 0x260) = v1_14
                    v0_14 = *(x13_38 + 0x410)
                    v3_14 = *(x13_38 + 0x3e0)
                    v2_14 = *(x13_38 + 0x3f0)
                    *(x13_39 + 0x2b0) = *(x13_38 + 0x400)
                    *(x13_39 + 0x2c0) = v0_14
                    *(x13_39 + 0x290) = v3_14
                    *(x13_39 + 0x2a0) = v2_14
                    v1_14 = *(x13_38 + 0x430)
                    v0_14 = *(x13_38 + 0x440)
                    v2_14 = *(x13_38 + 0x420)
                    *(x13_39 + 0x300) = *(x13_38 + 0x450)
                    *(x13_39 + 0x2e0) = v1_14
                    *(x13_39 + 0x2f0) = v0_14
                    *(x13_39 + 0x2d0) = v2_14
                
                void* x20_6 = x12_29 + x11_48 * 0x21d8
                v0_14 = *(x13_38 + 0x420)
                v1_14 = *(x13_38 + 0x430)
                v2_14 = *(x13_38 + 0x440)
                *(x20_6 + 0x3a8) = *(x13_38 + 0x450)
                v5_14 = *(x13_38 + 0x3c0)
                v4_14 = *(x13_38 + 0x3b0)
                *(x20_6 + 0x328) = *(x13_38 + 0x3d0)
                *(x20_6 + 0x318) = v5_14
                *(x20_6 + 0x308) = v4_14
                v5_14 = *(x13_38 + 0x400)
                v6_14 = *(x13_38 + 0x410)
                v3_14 = *(x13_38 + 0x3e0)
                v4_14 = *(x13_38 + 0x3f0)
                *(x20_6 + 0x398) = v2_14
                *(x20_6 + 0x388) = v1_14
                *(x20_6 + 0x378) = v0_14
                *(x20_6 + 0x368) = v6_14
                *(x20_6 + 0x358) = v5_14
                *(x20_6 + 0x348) = v4_14
                *(x20_6 + 0x338) = v3_14
                *(x20_6 + 0x1f84) = 0
                v3_14 = *(x13_38 + 0x3c0)
                v1_14 = *(x13_38 + 0x3b0)
                *(x20_6 + 0x498) = *(x13_38 + 0x3d0)
                *(x20_6 + 0x488) = v3_14
                *(x20_6 + 0x478) = v1_14
                v0_14 = *(x13_38 + 0x400)
                v3_14 = *(x13_38 + 0x3e0)
                v4_14 = *(x13_38 + 0x3f0)
                *(x20_6 + 0x4d8) = *(x13_38 + 0x410)
                *(x20_6 + 0x4c8) = v0_14
                *(x20_6 + 0x4b8) = v4_14
                *(x20_6 + 0x4a8) = v3_14
                v3_14 = *(x13_38 + 0x440)
                v0_14 = *(x13_38 + 0x420)
                v1_14 = *(x13_38 + 0x430)
                *(x20_6 + 0x518) = *(x13_38 + 0x450)
                *(x20_6 + 0x508) = v3_14
                *(x20_6 + 0x4f8) = v1_14
                *(x20_6 + 0x4e8) = v0_14
                *(x20_6 + 0x520) = 9
                *(x20_6 + 0x528) = x8_104
                *(x20_6 + 0x530) = 0
                int64_t x10_50 = var_128.q
                *(x20_6 + 0x544) = 0
                *(x20_6 + 0x53c) = var_120_2
                *(x20_6 + 0x534) = x10_50
                *(x20_6 + 0x540) = 0
                *(x20_6 + 0x548) = 0
                *(x8_104 + 0x1f78) = 1
                *(x20_6 + 0x258) = x13_38 + 0x1f90
                result = MoveToAnimStart(x13_38 + 0x1f90, x1_52, "buy_event", "card_position")
                void* x8_106 = *(x20_6 + 0x528)
                
                if (*(x8_106 + 0x2c) == 0)
                    return CardWhat(gDomClient + 0x20728, zx.q(*(x8_106 + 0x98)))
            
        labelid_1:
            return result
        case 9
            var_128 = arg5
            int32_t var_124_1 = arg6
            uint64_t x9_13 = zx.q(*(gDomClient + 0x205e8))
            DomGfx* i_31
            int64_t x9_14
            DomGfx* i_6
            
            if (x9_13.d != 0)
                i_31 = *(gDomClient + 0x205e0)
                x9_14 = i_31 + x9_13 * 0x21d8
                i_6 = i_31
                
                while (zx.d(*(i_6 + 0x21d2)) == 0)
                    i_6 += 0x21d8
                    
                    if (i_6 u>= x9_14)
                        goto label_b50720
            
            DomGfx* i_48
            
            if (x9_13.d == 0 || i_6 == 0xffffffff)
            label_b50720:
                i_48 = nullptr
            else
                do
                    if (*(i_6 + 0x2c) == 0 && *(i_6 + 0x98) == i_10 && zx.d(*(i_6 + 0x168)) == 0)
                        i_48 = i_6
                        
                        if (*(i_48 + 0xa4) != 3)
                            goto label_b50744
                        
                        goto label_b4ff54
                    
                    if (i_6 == 0)
                        i_6 = i_31
                    else
                        i_6 += 0x21d8
                    
                    if (i_6 u>= x9_14)
                        goto label_b50720
                    
                    while (zx.d(*(i_6 + 0x21d2)) == 0)
                        i_6 += 0x21d8
                        
                        if (i_6 u>= x9_14)
                            goto label_b50720
                    
                    i_48 = nullptr
                while (i_6 != 0xffffffff)
            
            if (*0xa4 == 3)
                goto label_b4ff54
            
        label_b50744:
            result = IsFatePile(gDomClient + 0x20728, zx.q(arg4), &var_80)
            
            if (arg7 != 0x17 && (result.d & 1) != 0)
                *(i_48 + 0xa8) = arg4
            labelid_1:
                return result
            
            int32_t x25_1
            
            if (arg4 - 0x3ee u< 3)
                x25_1 = arg8
            else
                x25_1 = 0
            
            int64_t x26_1
            
            if (arg4 - 0x3ee u< 3)
                x26_1 = fp
            else
                x26_1 = 0
            
            if (arg4 != 0x3e9 && arg4 != 0x451)
                *(i_48 + 0x10c) = 0
            
            int32_t x22_3 = *(i_48 + 0xa0)
            int32_t fp_1 = *(i_48 + 0xa4)
            int32_t x0_78 = IsBoardPile(zx.q(arg4))
            
            if (arg4 == 6)
                result = CardWhat(gDomClient + 0x20728, zx.q(*(i_48 + 0x98)))
                int32_t x8_97 = *(i_48 + 0x9c)
                
                if (x8_97 != 0)
                    uint64_t x21_3 = zx.q(x8_97.w)
                    
                    if (x21_3.d u< *(gDomClient + 0x205e8))
                        int64_t x22_4 = *(gDomClient + 0x205e0)
                        
                        if (*(x22_4 + x21_3 * 0x21d8 + 0x21d0) == x8_97)
                            DomGfx* x20_5 = x22_4 + x21_3 * 0x21d8
                            result = BoardAreaPile(result)
                            
                            if (x20_5 != result)
                                uint64_t result_1 = result
                                
                                if (*(x22_4 + x21_3 * 0x21d8 + 0x5c) != 0x3f1)
                                    result = PileRemoveToken(i_48, x20_5)
                                else
                                    result = PlayerAreaRemove(i_48)
                                
                                void* x10_101 = result_1 + 0x74
                                int32_t i_7 = *x10_101
                                int32_t x8_158
                                
                                if (i_7 == 0)
                                    x8_158 = 0
                                else
                                    x8_158 = 0
                                    void* x13_72
                                    
                                    do
                                        x13_72 = *(gDomClient + 0x205e0)
                                            + mulu.dp.d(i_7 & 0xffff, 0x21d8)
                                        i_7 = *(x13_72 + 0x213c)
                                        x8_158 += 1
                                    while (i_7 != 0)
                                    
                                    x10_101 = x13_72 + 0x213c
                                
                                *x10_101 = *(i_48 + 0x21d0)
                                *(i_48 + 0x2140) = x8_158
                                *(i_48 + 0xb0) = x8_158
                                *(i_48 + 0x9c) = *(result_1 + 0x21d0)
                                int32_t x13_73 = *(result_1 + 0x5c)
                                *(i_48 + 0x260) = 1
                                *(i_48 + 0x268) = 7
                                *(i_48 + 0x270) = 0xffffffff
                                *(i_48 + 0x274) = x8_158
                                *(i_48 + 0x26c) = x13_73
                                *(i_48 + 0x278) = zx.o(0)
                                *(i_48 + 0x288) = zx.o(0)
                                *(i_48 + 0x298) = zx.o(0)
                                *(i_48 + 0x2a8) = zx.o(0)
                                *(i_48 + 0x2b8) = zx.o(0)
                                *(i_48 + 0x2c8) = zx.o(0)
                                *(i_48 + 0x308) = 1
                                *(i_48 + 0x3b0) = 1
                                *(i_48 + 0x310) = 7
                                *(i_48 + 0x3b8) = 7
                                *(i_48 + 0x314) = x13_73
                                *(i_48 + 0x3bc) = x13_73
                                *(i_48 + 0x318) = 0xffffffff
                                *(i_48 + 0x3c0) = 0xffffffff
                                *(i_48 + 0x31c) = x8_158
                                *(i_48 + 0x3c4) = x8_158
                                *(i_48 + 0x2d8) = 0
                                *(i_48 + 0x2e0) = i_48
                                __builtin_memset(i_48 + 0x320, 0, 0x68)
                                *(i_48 + 0x388) = i_48
                                __builtin_memset(i_48 + 0x3c8, 0, 0x68)
                                *(i_48 + 0x430) = i_48
                                *(i_48 + 0x1f78) = 0
                
            labelid_1:
                return result
            
            uint64_t x0_92
            
            if ((x0_78 & 1) == 0)
                x0_92 = zx.q(var_14c)
            else
                x0_92 = 0xffffffff
            
            DomGfx* x0_93 = DomFindOrCreatePile(x0_92, zx.q(arg4), x26_1, zx.q(x25_1))
            *(i_48 + 0x118) = 0
            
            if (arg4 != 0x3e9)
                *(i_48 + 0x104) = 0
            
            if (arg7 u> 0x18)
                goto label_b4ff54
            
            uint64_t x0_113
            DomPileLoc* x3_24
            int64_t x4_22
            bool x5_26
            uint64_t x6_20
            
            switch (arg7)
                case 0
                    result = DomMoveCard(zx.q(var_14c), zx.q(i_10), x0_93, &var_128, 1, x28.b & 1, 
                        0, false)
                    
                    if ((x28 & 1) == 0)
                        result = DomSoundCardDraw(zx.q(var_14c))
                case 1, 7, 0xb, 0xc, 0xd, 0xe, 0x14, 0x16
                    goto label_b51eb0
                case 2, 3
                    if (var_14c != 0xffffffff)
                        void* x8_156 = gDomClient + muls.dp.d(var_14c, 0x4d48)
                        int64_t x9_118 = sx.q(*(x8_156 + 0x197c))
                        void* x10_99 = x8_156 + (x9_118 << 3)
                        *(x8_156 + 0x197c) = x9_118.d + 1
                        *(x10_99 + 0x7c) = 0
                        *(x10_99 + 0x80) = i_10
                    
                    if ((x28 & 1) == 0)
                        DomSoundCardPlay(zx.q(var_14c), 
                            zx.q(CardWhat(gDomClient + 0x20728, zx.q(i_10))))
                    
                    x5_26 = x28.b & 1
                    x3_24 = &var_128
                    x4_22 = 2
                    goto label_b51ebc
                case 4, 5, 6
                    if ((x28 & 1) == 0)
                        DomSoundCardGain(zx.q(var_14c), 
                            zx.q(CardWhat(gDomClient + 0x20728, zx.q(i_10))))
                    
                    result = DomMoveCard(zx.q(var_14c), zx.q(i_10), x0_93, &var_128, 1, x28.b & 1, 
                        zx.q(arg7), false)
                    int64_t (* x8_154)()
                    
                    if (var_14c == 0xffffffff)
                        x8_154 = gDomClient + 0x48
                    else
                        x8_154 = gDomClient + 0x48 + muls.dp.d(var_14c, 0x4d48)
                    
                    int64_t x9_115 = sx.q(*(x8_154 + 0x1934))
                    void* x9_116 = x8_154 + (x9_115 << 3)
                    *(x8_154 + 0x1934) = x9_115.d + 1
                    *(x9_116 + 0x34) = 1
                    *(x9_116 + 0x38) = i_10
                case 8, 0x17
                    *(i_48 + 0x104) = 0
                label_b51eb0:
                    x5_26 = x28.b & 1
                    x3_24 = &var_128
                    x4_22 = 1
                label_b51ebc:
                    result = DomMoveCard(zx.q(var_14c), zx.q(i_10), x0_93, x3_24, x4_22, x5_26, 
                        zx.q(arg7), false)
                case 9, 0x10, 0x12, 0x13, 0x15
                    int64_t x8_121 = sx.q(*(i_48 + 0xa0))
                    
                    if (x8_121.d != 0xffffffff)
                        void* x8_122 = gDomClient + x8_121 * 0x4d48
                        int64_t x9_92 = sx.q(*(x8_122 + 0x197c))
                        void* x11_91 = x8_122 + (x9_92 << 3)
                        *(x8_122 + 0x197c) = x9_92.d + 1
                        *(x11_91 + 0x7c) = 2
                        *(x11_91 + 0x80) = i_10
                    
                    goto label_b51eb0
                case 0xa
                    x0_113 = zx.q(var_14c)
                    int64_t (* x8_160)()
                    
                    if (x0_113.d == 0xffffffff)
                        x8_160 = gDomClient + 0x48
                    else
                        x8_160 = gDomClient + 0x48 + muls.dp.d(x0_113.d, 0x4d48)
                    
                    int64_t x9_124 = sx.q(*(x8_160 + 0x1934))
                    x5_26 = x28.b & 1
                    x3_24 = &var_128
                    x4_22 = 1
                    void* x9_125 = x8_160 + (x9_124 << 3)
                    *(x8_160 + 0x1934) = x9_124.d + 1
                    *(x9_125 + 0x34) = 1
                    *(x9_125 + 0x38) = i_10
                    x6_20 = 0xa
                    goto label_b520a4
                case 0xf
                    if ((x28 & 1) == 0)
                        DomSoundGameMessage(zx.q(var_14c), 0)
                    
                    x5_26 = x28.b & 1
                    x3_24 = &var_128
                    x4_22 = 3
                    x6_20 = 0xf
                    goto label_b520a0
                case 0x11
                    x5_26 = x28.b & 1
                    x3_24 = &var_128
                    x4_22 = 2
                    x6_20 = 0x11
                label_b520a0:
                    x0_113 = zx.q(var_14c)
                label_b520a4:
                    result =
                        DomMoveCard(x0_113, zx.q(i_10), x0_93, x3_24, x4_22, x5_26, x6_20, false)
                case 0x18
                    result = DomMoveCard(zx.q(var_14c), zx.q(i_10), x0_93, &var_128, 0, true, 0x18, 
                        false)
            
            if (fp_1 == 0x3ea)
                uint64_t x9_120 = zx.q(*(gDomClient + 0x205e8))
                
                if (x9_120.d == 0)
                    return PileResetCurved(zx.q(x22_3))
                
                void* i_36 = *(gDomClient + 0x205e0)
                int64_t x9_121 = i_36 + x9_120 * 0x21d8
                void* i_8 = i_36
                
                while (zx.d(*(i_8 + 0x21d2)) == 0)
                    i_8 += 0x21d8
                    
                    if (i_8 u>= x9_121)
                        return PileResetCurved(zx.q(x22_3))
                
                if (i_8 == 0xffffffff)
                    return PileResetCurved(zx.q(x22_3))
                
                int32_t x11_101 = 0
                
                do
                    if (*(i_8 + 0x2c) == 0 && *(i_8 + 0xa0) == x22_3 && *(i_8 + 0xa4) == 0x3ea
                            && *(i_8 + 0xc8) == 0)
                        x11_101 += 1
                    
                    if (i_8 == 0)
                        i_8 = i_36
                    else
                        i_8 += 0x21d8
                    
                    if (i_8 u>= x9_121)
                        break
                    
                    while (zx.d(*(i_8 + 0x21d2)) == 0)
                        i_8 += 0x21d8
                        
                        if (i_8 u>= x9_121)
                            goto label_b51f98
                while (i_8 != 0xffffffff)
                
            label_b51f98:
                
                if (x11_101 == 0)
                    return PileResetCurved(zx.q(x22_3))
            
        labelid_1:
            return result
        case 0xa
            if (arg7 - 4 u<= 2)
                if ((x28 & 1) == 0)
                    DomSoundCardGain(zx.q(var_14c), 
                        zx.q(CardWhat(gDomClient + 0x20728, zx.q(i_10))))
                
                int64_t (* x8_13)()
                
                if (var_14c == 0xffffffff)
                    x8_13 = gDomClient + 0x48
                else
                    x8_13 = gDomClient + 0x48 + muls.dp.d(var_14c, 0x4d48)
                
                int64_t x9_16 = sx.q(*(x8_13 + 0x1934))
                void* x9_17 = x8_13 + (x9_16 << 3)
                *(x8_13 + 0x1934) = x9_16.d + 1
                *(x9_17 + 0x34) = 1
                *(x9_17 + 0x38) = i_10
            
            MouseCard(gDomClient + 0x20728)
            uint64_t x9_18 = zx.q(*(gDomClient + 0x205e8))
            DomGfx* x2_3
            DomGfx* x8_15
            int64_t x9_19
            
            if (x9_18.d != 0)
                x8_15 = *(gDomClient + 0x205e0)
                x9_19 = x8_15 + x9_18 * 0x21d8
                x2_3 = x8_15
                
                while (zx.d(*(x2_3 + 0x21d2)) == 0)
                    x2_3 += 0x21d8
                    
                    if (x2_3 u>= x9_19)
                        goto label_b508a8
            
            if (x9_18.d == 0 || x2_3 == 0xffffffff)
            label_b508a8:
                x2_3 = DomCreateCardPile(zx.q(var_14c), zx.q(arg4))
            else
                while (*(x2_3 + 0x2c) != 3 || *(x2_3 + 0x58) != var_14c || *(x2_3 + 0x5c) != 0x474
                        || *(x2_3 + 0x68) != arg4)
                    if (x2_3 == 0)
                        x2_3 = x8_15
                    else
                        x2_3 += 0x21d8
                    
                    if (x2_3 u>= x9_19)
                        goto label_b508a8
                    
                    while (zx.d(*(x2_3 + 0x21d2)) == 0)
                        x2_3 += 0x21d8
                        
                        if (x2_3 u>= x9_19)
                            goto label_b508a8
                    
                    if (x2_3 == 0xffffffff)
                        goto label_b508a8
            
            result = DomMoveCard(zx.q(var_14c), zx.q(i_10), x2_3, &data_7ef484, 1, x28.b & 1, 
                zx.q(arg7), false)
            void* x8_100 = *(gDomClient + 0x205e0)
            int32_t i_9
            
            do
                i_9 = *(x8_100 + 0x21d0)
                x8_100 += 0x21d8
            while (i_9 u< 0x10000)
            void* x8_101 = x8_100 - 0x21d8
            
            while (*(x8_101 + 0x2c) != 0 || *(x8_101 + 0x98) != i_10
                    || zx.d(*(x8_101 + 0x168)) != 0)
                void* x11_47 = x8_101 + 0x43a8
                int32_t j_1
                
                do
                    j_1 = *x11_47
                    x8_101 += 0x21d8
                    x11_47 += 0x21d8
                while (j_1 u< 0x10000)
            
            *(x8_101 + 0xc8) = fp
            *(x8_101 + 0xac) = arg4
        labelid_1:
            return result
        case 0xb
            uint64_t x9_20 = zx.q(*(gDomClient + 0x205e8))
            void* x2_22
            int32_t x19_4
            
            if (x9_20.d == 0)
                x19_4 = var_14c
                
                if (*0xa4 != 3)
                label_b51610:
                    x2_22 = DomCreatePile_Other(0x3e9, zx.q(x19_4), 0, 0)
                label_b51650:
                    return DomMoveCard(zx.q(x19_4), zx.q(i_10), x2_22, &data_7ef484, 1, x28.b & 1, 
                        2, false) __tailcall
                
            label_b500ec:
                DomGfx* x0_55 = DomCreateCardPlaceholder_Fate(zx.q(i_10))
                uint64_t x9_60 = zx.q(*(gDomClient + 0x205e8))
                void* x2_26
                
                if (x9_60.d != 0)
                    void* x8_78 = *(gDomClient + 0x205e0)
                    int64_t x9_61 = x8_78 + x9_60 * 0x21d8
                    x2_26 = x8_78
                    
                    do
                        if (zx.d(*(x2_26 + 0x21d2)) != 0)
                            if (x2_26 != 0xffffffff)
                                while (true)
                                    if (*(x2_26 + 0x2c) == 3 && *(x2_26 + 0x58) == x19_4
                                            && *(x2_26 + 0x5c) == 0x3e9 && *(x2_26 + 0x60) == 0)
                                        if (x2_26 != 0)
                                            goto label_b51720
                                        
                                        break
                                    
                                    if (x2_26 == 0)
                                        x2_26 = x8_78
                                    else
                                        x2_26 += 0x21d8
                                    
                                    if (x2_26 u>= x9_61)
                                        goto label_b516e0
                                    
                                    while (zx.d(*(x2_26 + 0x21d2)) == 0)
                                        x2_26 += 0x21d8
                                        
                                        if (x2_26 u>= x9_61)
                                            goto label_b516e0
                                    
                                    if (x2_26 == 0xffffffff)
                                        goto label_b516e0
                            
                            break
                        
                        x2_26 += 0x21d8
                    while (x2_26 u< x9_61)
                
            label_b516e0:
                x2_26 = DomCreatePile_Other(0x3e9, zx.q(x19_4), 0, 0)
            label_b51720:
                return DomMoveCard(zx.q(x19_4), x0_55, x2_26, &data_7ef484, 1, x28.b & 1, 2, false)
                    __tailcall
            
            void* x8_17 = *(gDomClient + 0x205e0)
            x19_4 = var_14c
            void* x10_8 = x8_17
            int32_t i_11
            
            do
                i_11 = *(x10_8 + 0x21d0)
                x10_8 += 0x21d8
            while (i_11 u< 0x10000)
            void* x10_9 = x10_8 - 0x21d8
            
            while (*(x10_9 + 0x2c) != 0 || *(x10_9 + 0x98) != i_10 || zx.d(*(x10_9 + 0x168)) != 0)
                void* x13_9 = x10_9 + 0x43a8
                int32_t j_2
                
                do
                    j_2 = *x13_9
                    x10_9 += 0x21d8
                    x13_9 += 0x21d8
                while (j_2 u< 0x10000)
            
            if (*(x10_9 + 0xa4) == 3)
                goto label_b500ec
            
            int64_t x9_56 = x8_17 + x9_20 * 0x21d8
            x2_22 = x8_17
            
            do
                if (zx.d(*(x2_22 + 0x21d2)) != 0)
                    if (x2_22 != 0xffffffff)
                        while (true)
                            if (*(x2_22 + 0x2c) == 3 && *(x2_22 + 0x58) == x19_4
                                    && *(x2_22 + 0x5c) == 0x3e9 && *(x2_22 + 0x60) == 0)
                                if (x2_22 != 0)
                                    goto label_b51650
                                
                                break
                            
                            if (x2_22 == 0)
                                x2_22 = x8_17
                            else
                                x2_22 += 0x21d8
                            
                            if (x2_22 u>= x9_56)
                                goto label_b51610
                            
                            while (zx.d(*(x2_22 + 0x21d2)) == 0)
                                x2_22 += 0x21d8
                                
                                if (x2_22 u>= x9_56)
                                    goto label_b51610
                            
                            if (x2_22 == 0xffffffff)
                                goto label_b51610
                    
                    break
                
                x2_22 += 0x21d8
            while (x2_22 u< x9_56)
            
            goto label_b51610
        case 0xc
            if ((x28 & 1) == 0)
                return DomSoundCardResult(zx.q(var_14c), zx.q(arg4), 2) __tailcall
            
        labelid_1:
            return result
        case 0xd
            if ((x28 & 1) == 0)
                uint64_t x9_22 = zx.q(*(gDomClient + 0x205e8))
                int32_t x8_123
                int32_t x15_3
                void* x24_4
                
                if (x9_22.d != 0)
                    void* x8_20 = *(gDomClient + 0x205e0)
                    x15_3 = var_14c
                    int64_t x9_23 = x8_20 + x9_22 * 0x21d8
                    void* x10_11 = x8_20
                    
                    while (zx.d(*(x10_11 + 0x21d2)) == 0)
                        x10_11 += 0x21d8
                        
                        if (x10_11 u>= x9_23)
                            goto label_b514a4
                    
                    if (x10_11 == 0xffffffff)
                        goto label_b514a4
                    
                    while (true)
                        if (*(x10_11 + 0x2c) == 0 && *(x10_11 + 0x98) == i_10
                                && zx.d(*(x10_11 + 0x168)) == 0)
                            x24_4 = x10_11
                            x8_123 = *(x24_4 + 0xa4)
                            
                            if (x8_123 - 0x44d u< 2)
                                goto label_b514c4
                            
                            break
                        
                        if (x10_11 == 0)
                            x10_11 = x8_20
                        else
                            x10_11 += 0x21d8
                        
                        if (x10_11 u>= x9_23)
                            goto label_b514a4
                        
                        while (zx.d(*(x10_11 + 0x21d2)) == 0)
                            x10_11 += 0x21d8
                            
                            if (x10_11 u>= x9_23)
                                goto label_b514a4
                        
                        x24_4 = nullptr
                        
                        if (x10_11 == 0xffffffff)
                            goto label_b514a8
                    
                    if (x8_123 != 0x3eb)
                        goto label_b51830
                    
                    goto label_b514c4
                
                x15_3 = var_14c
            label_b514a4:
                x24_4 = nullptr
            label_b514a8:
                x8_123 = *0xa4
                
                if (x8_123 - 0x44d u< 2 || x8_123 == 0x3eb)
                label_b514c4:
                    v0.q = 0xe
                    int32_t var_120
                    var_120.q = 0xe
                    v0.q = 0
                    v0:8.q = 0
                    int64_t var_138_1 = 0
                    int64_t var_130_1 = 0
                    var_128 = 1
                    int128_t var_114
                    __builtin_memset(&var_114, 0, 0x6c)
                    int32_t var_140_1 = 1
                    int32_t var_13c_1 = x8_123
                    var_130_1.d = 0x20000
                    uint64_t x8_124 = zx.q(*(x24_4 + 0x1f78))
                    
                    if (x8_124.d s>= 1)
                        int64_t x9_95 = x8_124 + 1
                        int32_t* x10_75 = x24_4 + x8_124 * 0xd8 + 0x448
                        
                        while (*x10_75 == 3)
                            x9_95 -= 1
                            x8_124 = zx.q(x8_124.d - 1)
                            x10_75 -= 0xd8
                            *(x24_4 + 0x1f78) = x8_124.d
                            
                            if (x9_95 s<= 1)
                                goto label_b5157c
                    
                    int128_t var_98
                    int64_t var_88
                    
                    if (x8_124.d == 0x20)
                        v1 = var_128.o
                        *(x24_4 + 0x1f98) = var_114
                        *(x24_4 + 0x1f88) = x15_3.o
                        *(x24_4 + 0x1f78) = v1
                        int128_t var_d4
                        *(x24_4 + 0x1fd8) = var_d4
                        v1.q = 6
                        int128_t var_e4
                        *(x24_4 + 0x1fc8) = var_e4
                        int128_t var_f4
                        *(x24_4 + 0x1fb8) = var_f4
                        int128_t var_104
                        *(x24_4 + 0x1fa8) = var_104
                        *(x24_4 + 0x2008) = var_98
                        *(x24_4 + 0x1ff8) = x24_4.o
                        int128_t var_c4
                        *(x24_4 + 0x1fe8) = var_c4
                        *(x24_4 + 0x2018) = var_88
                        *(x24_4 + 0x2020) = 6
                        *(x24_4 + 0x2038) = var_138_1.o
                        *(x24_4 + 0x2028) = x24_4.o
                        *(x24_4 + 0x2048) = 0
                    else if (x8_124.d != 0)
                        void* x19_10 = x24_4 + muls.dp.d(x8_124.d, 0xd8)
                        var_80.o = x24_4.o
                        int128_t var_70_1 = var_138_1.o
                        *(x24_4 + 0x1f78) = x8_124.d + 1
                        result, v0, v1, v2, v3 = memmove(x19_10 + 0x478, &var_128, 0xa8)
                        v0.q = 6
                        *(x19_10 + 0x520) = 6
                        *(x19_10 + 0x528) = var_80.o
                        *(x19_10 + 0x538) = var_70_1
                        *(x19_10 + 0x548) = 0
                    else
                    label_b5157c:
                        result, v0, v1, v2, v3 = MoveComponent<DomLoc, DomMoveCallback>::Move(
                            x24_4 + 0x258, &var_128, 6, nullptr)
                    
                    int32_t var_120_5 = 0
                    var_128.q = 0
                    int64_t x11_98 = sx.q(*(x24_4 + 0x1f78))
                    v2 = *(x24_4 + 0x3d0)
                    v0 = *(x24_4 + 0x3b0)
                    v1 = *(x24_4 + 0x3c0)
                    void* x9_108 = x24_4 + x11_98 * 0xd8
                    *(x24_4 + 0x1f78) = x11_98.d + 1
                    *(x9_108 + 0x498) = v2
                    *(x9_108 + 0x488) = v1
                    *(x9_108 + 0x478) = v0
                    v3 = *(x24_4 + 0x3f0)
                    v1 = *(x24_4 + 0x400)
                    v2 = *(x24_4 + 0x3e0)
                    *(x9_108 + 0x4d8) = *(x24_4 + 0x410)
                    *(x9_108 + 0x4c8) = v1
                    *(x9_108 + 0x4b8) = v3
                    *(x9_108 + 0x4a8) = v2
                    v1 = *(x24_4 + 0x440)
                    v2 = *(x24_4 + 0x430)
                    v0 = *(x24_4 + 0x420)
                    *(x9_108 + 0x518) = *(x24_4 + 0x450)
                    *(x9_108 + 0x508) = v1
                    *(x9_108 + 0x4f8) = v2
                    *(x9_108 + 0x4e8) = v0
                    *(x9_108 + 0x528) = x24_4
                    *(x9_108 + 0x530) = 4
                    int32_t x8_149
                    
                    if ((arg6 & 2) == 0)
                        x8_149 = 0x3e8
                    else
                        x8_149 = 0xc8
                    
                    int64_t x12_57 = var_128.q
                    *(x9_108 + 0x53c) = var_120_5
                    *(x9_108 + 0x544) = 0
                    *(x9_108 + 0x534) = x12_57
                    *(x9_108 + 0x540) = 0
                    *(x9_108 + 0x548) = x8_149
                    *(x9_108 + 0x520) = 0xb
                    
                    if ((arg6 & 1) != 0)
                        v0.q = 0x3eb00000006
                        var_128 = 1
                        var_120_5.q = 0x3eb00000006
                        v0.q = 0
                        v0:8.q = 0
                        int128_t var_114_1
                        __builtin_memset(&var_114_1, 0, 0x6c)
                        int64_t var_138_2 = 0
                        int64_t var_130_2 = 0
                        var_130_2.d = 0
                        int32_t var_140_2 = 1
                        int32_t var_13c_2 = *(x24_4 + 0xa4)
                        uint64_t x8_150 = zx.q(*(x24_4 + 0x1f78))
                        
                        if (x8_150.d s>= 1)
                            int64_t x9_111 = x8_150 + 1
                            int32_t* x10_97 = x24_4 + x8_150 * 0xd8 + 0x448
                            
                            while (*x10_97 == 3)
                                x9_111 -= 1
                                x8_150 = zx.q(x8_150.d - 1)
                                x10_97 -= 0xd8
                                *(x24_4 + 0x1f78) = x8_150.d
                                
                                if (x9_111 s<= 1)
                                    return MoveComponent<DomLoc, DomMoveCallback>::Move(
                                        x24_4 + 0x258, &var_128, 6, nullptr)
                        
                        if (x8_150.d == 0x20)
                            v1 = var_128.o
                            *(x24_4 + 0x1f98) = var_114_1
                            *(x24_4 + 0x1f88) = var_14c.o
                            *(x24_4 + 0x1f78) = v1
                            int128_t var_d4_1
                            *(x24_4 + 0x1fd8) = var_d4_1
                            v1.q = 6
                            int128_t var_e4_1
                            *(x24_4 + 0x1fc8) = var_e4_1
                            int128_t var_f4_1
                            *(x24_4 + 0x1fb8) = var_f4_1
                            int128_t var_104_1
                            *(x24_4 + 0x1fa8) = var_104_1
                            *(x24_4 + 0x2008) = var_98
                            *(x24_4 + 0x1ff8) = x24_4.o
                            int128_t var_c4_1
                            *(x24_4 + 0x1fe8) = var_c4_1
                            *(x24_4 + 0x2018) = var_88
                            *(x24_4 + 0x2020) = 6
                            *(x24_4 + 0x2038) = var_138_2.o
                            *(x24_4 + 0x2028) = x24_4.o
                            *(x24_4 + 0x2048) = 0
                        else
                            if (x8_150.d == 0)
                                return MoveComponent<DomLoc, DomMoveCallback>::Move(x24_4 + 0x258, 
                                    &var_128, 6, nullptr)
                            
                            void* x19_11 = x24_4 + muls.dp.d(x8_150.d, 0xd8)
                            var_80.o = x24_4.o
                            *(x24_4 + 0x1f78) = x8_150.d + 1
                            int128_t v0_20
                            int128_t v1_20
                            result, v0_20, v1_20 = memmove(x19_11 + 0x478, &var_128, 0xa8)
                            v0_20.q = 6
                            *(x19_11 + 0x520) = 6
                            *(x19_11 + 0x528) = var_80.o
                            *(x19_11 + 0x538) = var_138_2.o
                            *(x19_11 + 0x548) = 0
                else
                label_b51830:
                    *(x24_4 + 0x130) = arg4
                    *(x24_4 + 0x128) = 1
                    *(x24_4 + 0x134) = arg5
            
        labelid_1:
            return result
        case 0xe, 0x11
            goto label_b4ff54
        case 0x10
            return DomGainResource(zx.q(arg4), zx.q(var_14c), x2, arg5, x28.b & 1, 
                (arg6 != 0 ? 1 : 0).b) __tailcall
        case 0x12
            if (arg4 != 0xb02)
                return DomCreateToken(zx.q(i_10), zx.q(arg4), zx.q(arg5), zx.q(var_14c), 
                    zx.q(arg6), arg7, x28.b & 1, sx.q(arg8))
            
        labelid_1:
            return result
        case 0x13
            return DomMoveToken(zx.q(i_10), zx.q(arg4), x28.b & 1) __tailcall
        case 0x14
            arg9.q = sx.q(arg9)
            return DomModifyToken(zx.q(i_10), zx.q(arg4), zx.q(arg5), zx.q(arg6), zx.q(arg7), 
                zx.q(arg8), zx.q(var_14c), zx.q(x28) & 1) __tailcall
        case 0x15
            uint64_t x10_15 = zx.q(*(gDomClient + 0x205e8))
            x8_25 = (arg4 != 0 ? 1 : 0).b
            
            if (x10_15.d == 0)
                goto label_b4ff54
            
            void* x9_28 = *(gDomClient + 0x205e0)
            int64_t x10_16 = x9_28 + x10_15 * 0x21d8
            x11_9 = x9_28
            
            while (zx.d(*(x11_9 + 0x21d2)) == 0)
                x11_9 += 0x21d8
                
                if (x11_9 u>= x10_16)
                    goto label_b4ff54
            
            if (x11_9 == 0xffffffff)
                goto label_b4ff54
            
            while (*(x11_9 + 0x2c) != 4 || *(x11_9 + 0x1b0) != i_10)
                if (x11_9 == 0)
                    x11_9 = x9_28
                else
                    x11_9 += 0x21d8
                
                if (x11_9 u>= x10_16)
                    goto label_b4ff54
                
                while (zx.d(*(x11_9 + 0x21d2)) == 0)
                    x11_9 += 0x21d8
                    
                    if (x11_9 u>= x10_16)
                        goto label_b4ff54
                
                if (x11_9 == 0xffffffff)
                    goto label_b4ff54
        case 0x16
            return DomSetCardParam(result, zx.q(i_10), zx.q(arg4), arg5, arg6, x28.b & 1) __tailcall
        case 0x17
            uint64_t x9_30 = zx.q(*(gDomClient + 0x205e8))
            void* i_32
            int64_t x9_31
            void* i_12
            
            if (x9_30.d != 0)
                i_32 = *(gDomClient + 0x205e0)
                x9_31 = i_32 + x9_30 * 0x21d8
                i_12 = i_32
                
                while (zx.d(*(i_12 + 0x21d2)) == 0)
                    i_12 += 0x21d8
                    
                    if (i_12 u>= x9_31)
                        goto label_b509b4
            
            void* i_44
            
            if (x9_30.d == 0 || i_12 == 0xffffffff)
            label_b509b4:
                i_44 = nullptr
            else
                do
                    if (*(i_12 + 0x2c) == 0 && *(i_12 + 0x98) == i_10 && zx.d(*(i_12 + 0x168)) == 0)
                        i_44 = i_12
                        
                        if (arg4 == 0)
                            goto label_b509c4
                        
                        goto label_b4ff54
                    
                    if (i_12 == 0)
                        i_12 = i_32
                    else
                        i_12 += 0x21d8
                    
                    if (i_12 u>= x9_31)
                        goto label_b509b4
                    
                    while (zx.d(*(i_12 + 0x21d2)) == 0)
                        i_12 += 0x21d8
                        
                        if (i_12 u>= x9_31)
                            goto label_b509b4
                    
                    i_44 = nullptr
                while (i_12 != 0xffffffff)
            
            if (arg4 != 0)
                goto label_b4ff54
            
        label_b509c4:
            int32_t x9_72 = *(i_44 + 0x100) + arg6
            *(i_44 + 0xfc) += arg5
            *(i_44 + 0x100) = x9_72
        labelid_1:
            return result
        case 0x18
            int32_t var_118_1 = arg9
            var_128 = arg4
            int32_t var_124_2 = arg6
            int32_t var_120_1 = arg7
            int32_t var_11c_1 = arg8
            
            if ((x28 & 1) == 0)
                int32_t x8_28 = *(gDomClient + 0x38)
                int32_t x8_29
                
                x8_29 = x8_28 == 0xffffffff ? 0 : x8_28
                
                if (x8_29 == var_14c)
                    DomSoundPlay(zx.q(var_14c), *SOUND_SOUND_LOAD_GAME_FX_BANNER_SPAWN, 
                        "ability spawn", false)
            
            var_80 = arg4
            int32_t var_7c_1 = arg5
            return DomCreateAbility(gDomClient, zx.q(var_14c), zx.q(i_10), &var_80, &var_128, 
                zx.q(arg10))
        case 0x19
            void* x0_24 = LookupAbility(zx.q(i_10))
            int32_t i_13 = *(x0_24 + 0x218)
            
            while (i_13 != 0)
                void* x12_9 = *(gDomClient + 0x205e0) + mulu.dp.d(i_13 & 0xffff, 0x21d8)
                i_13 = *(x12_9 + 0xd0)
                *(x12_9 + 0xd0) = 0
            
            UI2Free(x0_24 + 0x2148)
            UI2Free(x0_24 + 0x214c)
            UI2Free(x0_24 + 0x2150)
            UI2Free(x0_24 + 0x2154)
            result = zx.q(*(x0_24 + 0x1f90))
            
            if (result.d != 0)
                result = SpineDestroy(result.d)
            
            int32_t x11_11 = *(gDomClient + 0x205f0)
            *(gDomClient + 0x205f0) = zx.d(*(x0_24 + 0x21d0))
            *(x0_24 + 0x21d0) = x11_11
            *(gDomClient + 0x205f4) -= 1
        labelid_1:
            return result
        case 0x1a
            result = LookupAbility(zx.q(i_10))
            void* x8_31 = *(gDomClient + 0x205e0)
            int32_t i_14
            
            do
                i_14 = *(x8_31 + 0x21d0)
                x8_31 += 0x21d8
            while (i_14 u< 0x10000)
            void* x8_32 = x8_31 - 0x21d8
            
            while (*(x8_32 + 0x2c) != 0 || *(x8_32 + 0x98) != arg4 || zx.d(*(x8_32 + 0x168)) != 0)
                void* x11_15 = x8_32 + 0x43a8
                int32_t j_3
                
                do
                    j_3 = *x11_15
                    x8_32 += 0x21d8
                    x11_15 += 0x21d8
                while (j_3 u< 0x10000)
            
            int32_t x10_39 = *(x8_32 + 0x21d0)
            *(x8_32 + 0xd0) = *(result + 0x218)
            *(result + 0x218) = x10_39
        labelid_1:
            return result
        case 0x1b
            uint64_t x8_33 = zx.q(i_10 - 8)
            
            if (x8_33.d u> 0x14)
            labelid_1:
                return result
            
            uint64_t x1_45
            int64_t (* x8_140)()
            
            switch (x8_33)
                case 0
                    int64_t (* x8_35)()
                    
                    if (var_14c == 0xffffffff)
                        x8_35 = gDomClient + 0x48
                    else
                        x8_35 = gDomClient + 0x48 + muls.dp.d(var_14c, 0x4d48)
                    
                    int64_t x9_33 = sx.q(*(x8_35 + 0x4d20))
                    *(x8_35 + 0x4d20) = x9_33.d + 1
                    *(x8_35 + (x9_33 << 2) + 0x40a0) = arg4
                labelid_1:
                    return result
                case 1
                    return DomCreateTokenIcon(5, 0, zx.q(var_14c), false) __tailcall
                case 2
                    int64_t (* x8_136)()
                    
                    if (var_14c == 0xffffffff)
                        x8_136 = gDomClient + 0x48
                    else
                        x8_136 = gDomClient + 0x48 + muls.dp.d(var_14c, 0x4d48)
                    
                    int32_t x10_90 = *(x8_136 + 0x4d28)
                    *(x8_136 + 0x4d28) = x10_90 + 1
                    
                    if (x10_90 != 0 || zx.d(*(x8_136 + 0x4d26)) != 0)
                    labelid_1:
                        return result
                    
                    return DomCreateTokenIcon(1, 0, zx.q(var_14c), false) __tailcall
                case 3
                    x1_45 = zx.q(var_14c)
                    
                    if (x1_45.d == 0xffffffff)
                        x8_140 = gDomClient + 0x48
                    else
                        x8_140 = gDomClient + 0x48 + muls.dp.d(x1_45.d, 0x4d48)
                    
                    *(x8_140 + 0x4d26) = 1
                    return DomRemoveTokenIconSimple(1, x1_45, false) __tailcall
                case 4
                    x1_45 = zx.q(var_14c)
                    
                    if (x1_45.d == 0xffffffff)
                        x8_140 = gDomClient + 0x48
                    else
                        x8_140 = gDomClient + 0x48 + muls.dp.d(x1_45.d, 0x4d48)
                    
                    *(x8_140 + 0x4d2c) = 1
                    return DomRemoveTokenIconSimple(9, x1_45, false) __tailcall
                case 5, 6, 7, 8, 9, 0xa, 0xb, 0xd, 0xe
                labelid_1:
                    return result
                case 0xc
                    if (arg4 != 0xe)
                        return DomCreateTokenIcon(zx.q(arg4), zx.q(arg5), zx.q(var_14c), false)
                            __tailcall
                    
                    int64_t (* x8_143)()
                    
                    if (var_14c == 0xffffffff)
                        x8_143 = gDomClient + 0x48
                    else
                        x8_143 = gDomClient + 0x48 + muls.dp.d(var_14c, 0x4d48)
                    
                    int32_t x10_93 = *(x8_143 + 0x4d38)
                    *(x8_143 + 0x4d38) = x10_93 + 1
                    
                    if (x10_93 != 0 || zx.d(*(x8_143 + 0x4d34)) != 0)
                    labelid_1:
                        return result
                    
                    return DomCreateTokenIcon(0xe, 0, zx.q(var_14c), false) __tailcall
        case 0x1c
            uint64_t x8_36 = zx.q(i_10 - 8)
            
            if (x8_36.d u> 0x11)
            labelid_1:
                return result
            
            switch (x8_36)
                case 0
                    int64_t (* x8_38)()
                    
                    if (var_14c == 0xffffffff)
                        x8_38 = gDomClient + 0x48
                    else
                        x8_38 = gDomClient + 0x48 + muls.dp.d(var_14c, 0x4d48)
                    
                    uint64_t x10_24 = zx.q(*(x8_38 + 0x4d20))
                    
                    if (x10_24.d s< 1)
                        goto label_b4ff54
                    
                    int64_t (* x11_19)() = x8_38 + 0x40a0
                    uint64_t x12_11 = x10_24
                    
                    while (*x11_19 != arg4)
                        uint64_t temp6_1 = x12_11
                        x12_11 -= 1
                        x11_19 += 4
                        
                        if (temp6_1 == 1)
                            goto label_b4ff54
                    
                    *(x8_38 + 0x4d20) = x10_24.d - 1
                    *x11_19 = *(x8_38 + ((sx.q(x10_24.d) - 1) << 2) + 0x40a0)
                labelid_1:
                    return result
                case 1
                    return DomTryRemoveTokenIcon(5, 0, zx.q(var_14c), false) __tailcall
                case 2
                    int64_t (* x8_128)()
                    
                    if (var_14c == 0xffffffff)
                        x8_128 = gDomClient + 0x48
                    else
                        x8_128 = gDomClient + 0x48 + muls.dp.d(var_14c, 0x4d48)
                    
                    int32_t x10_79 = *(x8_128 + 0x4d28)
                    *(x8_128 + 0x4d28) = x10_79 - 1
                    
                    if (x10_79 != 1)
                    labelid_1:
                        return result
                    
                    return DomRemoveTokenIconSimple(1, zx.q(var_14c), false) __tailcall
                case 3, 4, 5, 6, 7, 8, 9, 0xa, 0xb, 0xd, 0xe
                labelid_1:
                    return result
                case 0xc
                    if (arg4 != 0xe)
                        return DomTryRemoveTokenIcon(zx.q(arg4), zx.q(arg5), zx.q(var_14c), false)
                            __tailcall
                    
                    int64_t (* x8_130)()
                    
                    if (var_14c == 0xffffffff)
                        x8_130 = gDomClient + 0x48
                    else
                        x8_130 = gDomClient + 0x48 + muls.dp.d(var_14c, 0x4d48)
                    
                    int32_t x10_82 = *(x8_130 + 0x4d38)
                    *(x8_130 + 0x4d38) = x10_82 - 1
                    
                    if (x10_82 != 1)
                    labelid_1:
                        return result
                    
                    return DomRemoveTokenIconSimple(0xe, zx.q(var_14c), false) __tailcall
                case 0xf
                    int64_t (* x8_132)()
                    
                    if (var_14c == 0xffffffff)
                        x8_132 = gDomClient + 0x48
                    else
                        x8_132 = gDomClient + 0x48 + muls.dp.d(var_14c, 0x4d48)
                    
                    int32_t x10_85 = *(x8_132 + 0x4d30)
                    *(x8_132 + 0x4d30) = x10_85 - 1
                    
                    if (x10_85 != 1)
                    labelid_1:
                        return result
                    
                    return DomRemoveTokenIconSimple(9, zx.q(var_14c), false) __tailcall
                case 0x10
                    return DomTryRemoveTokenIcon(0xa, 0, zx.q(var_14c), false) __tailcall
                case 0x11
                    return DomTryRemoveTokenIcon(0xc, 0, zx.q(var_14c), false) __tailcall
        case 0x1f
            while (*(gDomClient + 0x1d00c) != 0)
                DomZoomDismissBack()
            
            *(gDomClient + 0x205b8) = arg4
            ActiveGameComplete_Stats(ActiveGame())
            
            if ((x28 & 1) != 0)
                return ToggleScore() __tailcall
            
            int32_t x21_1 = 0
            *(gDomClient + 0x205a0) = &data_114f758
            
            while (true)
                int64_t x0_50 = Now()
                int64_t x23_2 = *(gDomClient + 0x205a0)
                *(gDomClient + 0x205b0) = x0_50
                *(gDomClient + 0x205a8) = x21_1
                void* x24_3 = x23_2 + muls.dp.d(x21_1, 0x18)
                result = (*(x24_3 + 0x10))()
                
                if (*(x24_3 + 8) != 0)
                    break
                
                x21_1 = *(x23_2 + sx.q(x21_1) * 0x18 + 4)
                
                if (x21_1 == 0xffffffff)
                    *(gDomClient + 0x205a0) = 0
                    break
            
        labelid_1:
            return result
        case 0x20
            int64_t (* x8_43)()
            
            if (var_14c == 0xffffffff)
                x8_43 = gDomClient + 0x48
            else
                x8_43 = gDomClient + 0x48 + muls.dp.d(var_14c, 0x4d48)
            
            *(x8_43 + 0x24) = arg4
            *(x8_43 + 0x28) = arg6
            *(x8_43 + 0x20) = arg5 + 1
        labelid_1:
            return result
        case 0x21
            void* x8_44 = *(gDomClient + 0x205e0)
            int32_t i_15
            
            do
                i_15 = *(x8_44 + 0x21d0)
                x8_44 += 0x21d8
            while (i_15 u< 0x10000)
            void* x8_45 = x8_44 - 0x21d8
            
            while (*(x8_45 + 0x2c) != 0 || *(x8_45 + 0x98) != i_10 || zx.d(*(x8_45 + 0x168)) != 0)
                void* x11_25 = x8_45 + 0x43a8
                int32_t j_4
                
                do
                    j_4 = *x11_25
                    x8_45 += 0x21d8
                    x11_25 += 0x21d8
                while (j_4 u< 0x10000)
            
            *(x8_45 + 0x117) = (arg4 != 0 ? 1 : 0).b
        labelid_1:
            return result
        case 0x22
            if (arg4 != 0)
                int32_t x8_46 = arg4 & 0xffff
                
                if (x8_46 u< *(gDomClient + 0x205e8))
                    int64_t x9_39 = *(gDomClient + 0x205e0)
                    
                    if (*(x9_39 + mulu.dp.d(x8_46, 0x21d8) + 0x21d0) == arg4)
                        return DomExpandPile(x9_39 + zx.q(x8_46) * 0x21d8, false) __tailcall
            
        labelid_1:
            return result
        case 0x23
            if ((x28 & 1) == 0)
                return DomSoundCardReaction(zx.q(var_14c), 
                    zx.q(CardWhat(gDomClient + 0x20728, zx.q(i_10)))) __tailcall
            
        labelid_1:
            return result
        case 0x24
            if ((x28 & 1) == 0)
                result = DomSoundCardResult(zx.q(var_14c), 
                    zx.q(CardWhat(gDomClient + 0x20728, zx.q(i_10))), zx.q(arg4))
            
            uint64_t x9_42 = zx.q(*(gDomClient + 0x205e8))
            void* i_33
            int64_t x9_43
            void* i_16
            
            if (x9_42.d != 0)
                i_33 = *(gDomClient + 0x205e0)
                x9_43 = i_33 + x9_42 * 0x21d8
                i_16 = i_33
                
                while (zx.d(*(i_16 + 0x21d2)) == 0)
                    i_16 += 0x21d8
                    
                    if (i_16 u>= x9_43)
                        goto label_b50a40
            
            if (x9_42.d == 0 || i_16 == 0xffffffff)
            label_b50a40:
                i_46 = nullptr
            else
                do
                    if (*(i_16 + 0x2c) == 0 && *(i_16 + 0x98) == i_10 && zx.d(*(i_16 + 0x168)) == 0)
                        i_46 = i_16
                        
                        if ((x28 & 1) == 0)
                            goto label_b50a48
                        
                        goto label_b52444_3
                    
                    if (i_16 == 0)
                        i_16 = i_33
                    else
                        i_16 += 0x21d8
                    
                    if (i_16 u>= x9_43)
                        goto label_b50a40
                    
                    while (zx.d(*(i_16 + 0x21d2)) == 0)
                        i_16 += 0x21d8
                        
                        if (i_16 u>= x9_43)
                            goto label_b50a40
                    
                    i_46 = nullptr
                while (i_16 != 0xffffffff)
            
            if ((x28 & 1) != 0)
            labelid_1:
                return result
            
        label_b50a48:
            x1_47 = zx.q(*(i_46 + 0x98))
            x0_75 = gDomClient + 0x20728
            x2_29 = 0x20000000
        label_b50a5c:
            result, v0_14, v1_14, v2_14, v3_14, v4_14, v5_14, v6_14 = CardIs(x0_75, x1_47, x2_29)
            
            if ((result.d & 1) != 0)
                goto label_b50a6c
            
        labelid_1:
            return result
        case 0x25
            if ((x28 & 1) != 0)
            labelid_1:
                return result
            
            result = CardWhat(gDomClient + 0x20728, zx.q(i_10))
            int32_t x8_51
            
            if (result.d - 0x1038 u<= 0x11)
                x8_51 = 1
            
            if (result.d - 0x1038 u> 0x11 || (1 << (result.d - 0x1038) & 0x30401) == 0)
                x8_51 = 0
            
            if (x8_51 != (arg5 != 0 ? 1 : 0))
            labelid_1:
                return result
            
            DomSoundCardAlly(zx.q(var_14c), zx.q(result.d))
            void* x22_1 = *(gDomClient + 0x205e0)
            void* x8_52 = x22_1
            int32_t i_17
            
            do
                i_17 = *(x8_52 + 0x21d0)
                x8_52 += 0x21d8
            while (i_17 u< 0x10000)
            void* x8_53 = x8_52 - 0x21d8
            
            while (*(x8_53 + 0x2c) != 0 || *(x8_53 + 0x98) != i_10 || zx.d(*(x8_53 + 0x168)) != 0)
                void* x11_31 = x8_53 + 0x43a8
                int32_t j_5
                
                do
                    j_5 = *x11_31
                    x8_53 += 0x21d8
                    x11_31 += 0x21d8
                while (j_5 u< 0x10000)
            
            uint64_t x23_4 = zx.q(*(x8_53 + 0x9c))
            void* x19_9 = x22_1 + x23_4 * 0x21d8
            int128_t v0_16
            int128_t v1_16
            int128_t v2_16
            int128_t v3_16
            int128_t v4_16
            int128_t v5_16
            int128_t v6_16
            result, v0_16, v1_16, v2_16, v3_16, v4_16, v5_16, v6_16 =
                CardIs(gDomClient + 0x20728, zx.q(i_10), 0x4000000000)
            
            if (*(x19_9 + 0x1f78) s>= 1 && *(x22_1 + x23_4 * 0x21d8 + 0x520) == 9)
            labelid_1:
                return result
            
            int32_t var_120_4 = 0
            var_128.q = 0
            void* x10_63 = x22_1 + x23_4 * 0x21d8
            XAsset* x1_58 = *SPINE_ANIM_EVENT_OPPONENT_BUY_EVENT_OPPONENT_BUY
            
            if (*(x10_63 + 0x3b0) != 0)
                v0_16 = *(x10_63 + 0x3d0)
                v1_16 = *(x10_63 + 0x3b0)
                void* x10_64 = x22_1 + x23_4 * 0x21d8
                *(x10_64 + 0x270) = *(x10_63 + 0x3c0)
                *(x10_64 + 0x280) = v0_16
                *(x10_64 + 0x260) = v1_16
                v0_16 = *(x10_63 + 0x410)
                v3_16 = *(x10_63 + 0x3e0)
                v2_16 = *(x10_63 + 0x3f0)
                *(x10_64 + 0x2b0) = *(x10_63 + 0x400)
                *(x10_64 + 0x2c0) = v0_16
                *(x10_64 + 0x290) = v3_16
                *(x10_64 + 0x2a0) = v2_16
                v1_16 = *(x10_63 + 0x430)
                v0_16 = *(x10_63 + 0x440)
                v2_16 = *(x10_63 + 0x420)
                *(x10_64 + 0x300) = *(x10_63 + 0x450)
                *(x10_64 + 0x2e0) = v1_16
                *(x10_64 + 0x2f0) = v0_16
                *(x10_64 + 0x2d0) = v2_16
            
            void* x21_5 = x22_1 + x23_4 * 0x21d8
            v0_16 = *(x10_63 + 0x420)
            v1_16 = *(x10_63 + 0x430)
            v2_16 = *(x10_63 + 0x440)
            *(x21_5 + 0x3a8) = *(x10_63 + 0x450)
            v5_16 = *(x10_63 + 0x3c0)
            v4_16 = *(x10_63 + 0x3b0)
            *(x21_5 + 0x328) = *(x10_63 + 0x3d0)
            *(x21_5 + 0x318) = v5_16
            *(x21_5 + 0x308) = v4_16
            v5_16 = *(x10_63 + 0x400)
            v6_16 = *(x10_63 + 0x410)
            v3_16 = *(x10_63 + 0x3e0)
            v4_16 = *(x10_63 + 0x3f0)
            *(x21_5 + 0x398) = v2_16
            *(x21_5 + 0x388) = v1_16
            *(x21_5 + 0x378) = v0_16
            *(x21_5 + 0x368) = v6_16
            *(x21_5 + 0x358) = v5_16
            *(x21_5 + 0x348) = v4_16
            *(x21_5 + 0x338) = v3_16
            *(x21_5 + 0x1f84) = 0
            v3_16 = *(x10_63 + 0x3c0)
            v1_16 = *(x10_63 + 0x3b0)
            *(x21_5 + 0x498) = *(x10_63 + 0x3d0)
            *(x21_5 + 0x488) = v3_16
            *(x21_5 + 0x478) = v1_16
            v0_16 = *(x10_63 + 0x400)
            v3_16 = *(x10_63 + 0x3e0)
            v4_16 = *(x10_63 + 0x3f0)
            *(x21_5 + 0x4d8) = *(x10_63 + 0x410)
            *(x21_5 + 0x4c8) = v0_16
            *(x21_5 + 0x4b8) = v4_16
            *(x21_5 + 0x4a8) = v3_16
            v3_16 = *(x10_63 + 0x440)
            v0_16 = *(x10_63 + 0x420)
            v1_16 = *(x10_63 + 0x430)
            *(x21_5 + 0x518) = *(x10_63 + 0x450)
            *(x21_5 + 0x508) = v3_16
            *(x21_5 + 0x4f8) = v1_16
            *(x21_5 + 0x4e8) = v0_16
            *(x21_5 + 0x520) = 9
            *(x21_5 + 0x528) = x19_9
            *(x21_5 + 0x530) = 0
            int64_t x11_89 = var_128.q
            *(x21_5 + 0x544) = 0
            *(x21_5 + 0x53c) = var_120_4
            *(x21_5 + 0x534) = x11_89
            *(x21_5 + 0x540) = 0
            *(x21_5 + 0x548) = 0
            *(x19_9 + 0x1f78) = 1
            *(x21_5 + 0x258) = x10_63 + 0x1f90
            result = MoveToAnimStart(x10_63 + 0x1f90, x1_58, "buy_event", "card_position")
            x8_109 = *(x21_5 + 0x528)
            goto label_b5138c
        case 0x26
            return EarnedAchievement(zx.q(var_14c), zx.q(i_10), (arg4 != 0 ? 1 : 0).b, false, 
                x28.b & 1) __tailcall
        case 0x27
            uint64_t x8_55 = zx.q(*(gDomClient + 0x205e8))
            void* i_47 = *(gDomClient + 0x205e0)
            int64_t x8_56
            void* i_18
            
            if (x8_55.d != 0)
                x8_56 = i_47 + x8_55 * 0x21d8
                i_18 = i_47
                
                while (zx.d(*(i_18 + 0x21d2)) == 0)
                    i_18 += 0x21d8
                    
                    if (i_18 u>= x8_56)
                        goto label_b50cf0
            
            void* i_45
            
            if (x8_55.d == 0 || i_18 == 0xffffffff)
            label_b50cf0:
                i_45 = nullptr
            else
                do
                    if (*(i_18 + 0x2c) == 0 && *(i_18 + 0x98) == i_10 && zx.d(*(i_18 + 0x168)) == 0)
                        i_45 = i_18
                        break
                    
                    if (i_18 == 0)
                        i_18 = i_47
                    else
                        i_18 += 0x21d8
                    
                    if (i_18 u>= x8_56)
                        goto label_b50cf0
                    
                    while (zx.d(*(i_18 + 0x21d2)) == 0)
                        i_18 += 0x21d8
                        
                        if (i_18 u>= x8_56)
                            goto label_b50cf0
                    
                    i_45 = nullptr
                while (i_18 != 0xffffffff)
            
            uint64_t x23_3 = zx.q(*(i_45 + 0x9c))
            void* x21_4 = i_47 + x23_3 * 0x21d8
            *(x21_4 + 0x78) = 1
            
            if ((x28 & 1) != 0)
            labelid_1:
                return result
            
            DomSoundPlay(zx.q(var_14c), *SOUND_SOUND_LOAD_GAME_FX_PROPHECY_EARNED, "prophecy", 
                false)
            int128_t v0_15
            int128_t v1_15
            int128_t v2_15
            int128_t v3_15
            int128_t v4_15
            int128_t v5_15
            int128_t v6_15
            result, v0_15, v1_15, v2_15, v3_15, v4_15, v5_15, v6_15 =
                CardIs(gDomClient + 0x20728, zx.q(*(i_45 + 0x98)), 0x80000000000)
            void* x8_107 = i_47 + x23_3 * 0x21d8
            
            if (*(x8_107 + 0x1f78) s>= 1 && *(i_47 + x23_3 * 0x21d8 + 0x520) == 9)
            labelid_1:
                return result
            
            int32_t var_120_3 = 0
            var_128.q = 0
            void* x10_51 = i_47 + x23_3 * 0x21d8
            XAsset* x1_56 = *SPINE_ANIM_EVENT_OPPONENT_BUY_EVENT_OPPONENT_BUY
            
            if (*(x10_51 + 0x3b0) != 0)
                v0_15 = *(x10_51 + 0x3d0)
                v1_15 = *(x10_51 + 0x3b0)
                void* x10_52 = i_47 + x23_3 * 0x21d8
                *(x10_52 + 0x270) = *(x10_51 + 0x3c0)
                *(x10_52 + 0x280) = v0_15
                *(x10_52 + 0x260) = v1_15
                v0_15 = *(x10_51 + 0x410)
                v3_15 = *(x10_51 + 0x3e0)
                v2_15 = *(x10_51 + 0x3f0)
                *(x10_52 + 0x2b0) = *(x10_51 + 0x400)
                *(x10_52 + 0x2c0) = v0_15
                *(x10_52 + 0x290) = v3_15
                *(x10_52 + 0x2a0) = v2_15
                v1_15 = *(x10_51 + 0x430)
                v0_15 = *(x10_51 + 0x440)
                v2_15 = *(x10_51 + 0x420)
                *(x10_52 + 0x300) = *(x10_51 + 0x450)
                *(x10_52 + 0x2e0) = v1_15
                *(x10_52 + 0x2f0) = v0_15
                *(x10_52 + 0x2d0) = v2_15
            
            void* x19_8 = i_47 + x23_3 * 0x21d8
            v0_15 = *(x10_51 + 0x420)
            v1_15 = *(x10_51 + 0x430)
            v2_15 = *(x10_51 + 0x440)
            *(x19_8 + 0x3a8) = *(x10_51 + 0x450)
            v5_15 = *(x10_51 + 0x3c0)
            v4_15 = *(x10_51 + 0x3b0)
            *(x19_8 + 0x328) = *(x10_51 + 0x3d0)
            *(x19_8 + 0x318) = v5_15
            *(x19_8 + 0x308) = v4_15
            v5_15 = *(x10_51 + 0x400)
            v6_15 = *(x10_51 + 0x410)
            v3_15 = *(x10_51 + 0x3e0)
            v4_15 = *(x10_51 + 0x3f0)
            *(x19_8 + 0x398) = v2_15
            *(x19_8 + 0x388) = v1_15
            *(x19_8 + 0x378) = v0_15
            *(x19_8 + 0x368) = v6_15
            *(x19_8 + 0x358) = v5_15
            *(x19_8 + 0x348) = v4_15
            *(x19_8 + 0x338) = v3_15
            *(x19_8 + 0x1f84) = 0
            v3_15 = *(x10_51 + 0x3c0)
            v1_15 = *(x10_51 + 0x3b0)
            *(x19_8 + 0x498) = *(x10_51 + 0x3d0)
            *(x19_8 + 0x488) = v3_15
            *(x19_8 + 0x478) = v1_15
            v0_15 = *(x10_51 + 0x400)
            v3_15 = *(x10_51 + 0x3e0)
            v4_15 = *(x10_51 + 0x3f0)
            *(x19_8 + 0x4d8) = *(x10_51 + 0x410)
            *(x19_8 + 0x4c8) = v0_15
            *(x19_8 + 0x4b8) = v4_15
            *(x19_8 + 0x4a8) = v3_15
            v3_15 = *(x10_51 + 0x440)
            v0_15 = *(x10_51 + 0x420)
            v1_15 = *(x10_51 + 0x430)
            *(x19_8 + 0x518) = *(x10_51 + 0x450)
            *(x19_8 + 0x508) = v3_15
            *(x19_8 + 0x4f8) = v1_15
            *(x19_8 + 0x4e8) = v0_15
            *(x19_8 + 0x520) = 9
            *(x19_8 + 0x528) = x21_4
            *(x19_8 + 0x530) = 0
            int64_t x11_71 = var_128.q
            *(x19_8 + 0x544) = 0
            *(x19_8 + 0x53c) = var_120_3
            *(x19_8 + 0x534) = x11_71
            *(x19_8 + 0x540) = 0
            *(x19_8 + 0x548) = 0
            *(x8_107 + 0x1f78) = 1
            *(x19_8 + 0x258) = x10_51 + 0x1f90
            result = MoveToAnimStart(x10_51 + 0x1f90, x1_56, "buy_event", "card_position")
            x8_109 = *(x19_8 + 0x528)
        label_b5138c:
            
            if (*(x8_109 + 0x2c) == 0)
                return CardWhat(gDomClient + 0x20728, zx.q(*(x8_109 + 0x98)))
            
        labelid_1:
            return result
        case 0x28
            void* x8_57 = *(gDomClient + 0x205e0)
            int32_t i_19
            
            do
                i_19 = *(x8_57 + 0x21d0)
                x8_57 += 0x21d8
            while (i_19 u< 0x10000)
            void* x8_58 = x8_57 - 0x21d8
            
            while (*(x8_58 + 0x2c) != 0 || *(x8_58 + 0x98) != i_10 || zx.d(*(x8_58 + 0x168)) != 0)
                void* x11_36 = x8_58 + 0x43a8
                int32_t j_6
                
                do
                    j_6 = *x11_36
                    x8_58 += 0x21d8
                    x11_36 += 0x21d8
                while (j_6 u< 0x10000)
            
            *(x8_58 + (sx.q(var_14c) << 2) + 0xe4) = arg4
        labelid_1:
            return result
        case 0x29
            *(gDomClient + 0x20594) = arg4
        labelid_1:
            return result
        case 0x2a
            uint64_t x10_33 = zx.q(*(gDomClient + 0x205e8))
            void* i_37
            int64_t x10_34
            void* i_20
            
            if (x10_33.d != 0)
                i_37 = *(gDomClient + 0x205e0)
                x10_34 = i_37 + x10_33 * 0x21d8
                i_20 = i_37
                
                while (zx.d(*(i_20 + 0x21d2)) == 0)
                    i_20 += 0x21d8
                    
                    if (i_20 u>= x10_34)
                        goto label_b50f9c
            
            void* i_35
            
            if (x10_33.d == 0 || i_20 == 0xffffffff)
            label_b50f9c:
                i_35 = nullptr
            else
                do
                    if (*(i_20 + 0x2c) == 0 && *(i_20 + 0x98) == i_10 && zx.d(*(i_20 + 0x168)) == 0)
                        i_35 = i_20
                        break
                    
                    if (i_20 == 0)
                        i_20 = i_37
                    else
                        i_20 += 0x21d8
                    
                    if (i_20 u>= x10_34)
                        goto label_b50f9c
                    
                    while (zx.d(*(i_20 + 0x21d2)) == 0)
                        i_20 += 0x21d8
                        
                        if (i_20 u>= x10_34)
                            goto label_b50f9c
                    
                    i_35 = nullptr
                while (i_20 != 0xffffffff)
            
            int32_t x9_85 = *(i_35 + 0x3b8)
            int32_t x10_61 = *(i_35 + 0xa0)
            int32_t x11_72 = *(i_35 + 0xb0)
            *(i_35 + 0xa4) = arg4
            *(i_35 + 0x26c) = arg4
            *(i_35 + 0x260) = 1
            *(i_35 + 0x268) = x9_85
            *(i_35 + 0x270) = x10_61
            *(i_35 + 0x274) = x11_72
            *(i_35 + 0x278) = zx.o(0)
            *(i_35 + 0x288) = zx.o(0)
            *(i_35 + 0x298) = zx.o(0)
            *(i_35 + 0x2a8) = zx.o(0)
            *(i_35 + 0x2b8) = zx.o(0)
            *(i_35 + 0x2c8) = zx.o(0)
            *(i_35 + 0x310) = x9_85
            *(i_35 + 0x308) = 1
            *(i_35 + 0x3b0) = 1
            *(i_35 + 0x318) = x10_61
            *(i_35 + 0x3c0) = x10_61
            *(i_35 + 0x31c) = x11_72
            *(i_35 + 0x3c4) = x11_72
            *(i_35 + 0x2d8) = 0
            *(i_35 + 0x314) = arg4
            *(i_35 + 0x3bc) = arg4
            *(i_35 + 0x2e0) = i_35
            __builtin_memset(i_35 + 0x320, 0, 0x68)
            *(i_35 + 0x388) = i_35
            __builtin_memset(i_35 + 0x3c8, 0, 0x68)
            *(i_35 + 0x430) = i_35
            *(i_35 + 0x1f78) = 0
        labelid_1:
            return result
        case 0x2b
            uint64_t x10_35 = zx.q(*(gDomClient + 0x205e8))
            
            if (x10_35.d != 0)
                void* i_38 = *(gDomClient + 0x205e0)
                void* i_21 = i_38
                
                do
                    if (zx.d(*(i_21 + 0x21d2)) != 0)
                        while (i_21 != 0xffffffff)
                            int32_t x16_14 = *(i_21 + 0x2c)
                            
                            if (x16_14 == 3)
                                if (*(i_21 + 0x5c) == arg4)
                                    int32_t x9_138 = *(i_21 + 0x3b8)
                                    *(i_21 + 0x5c) = arg5
                                    *(i_21 + 0x26c) = arg5
                                    *(i_21 + 0x260) = 1
                                    *(i_21 + 0x270) = 0xffffffff
                                    *(i_21 + 0x268) = x9_138
                                    *(i_21 + 0x274) = zx.o(0)
                                    *(i_21 + 0x284) = zx.o(0)
                                    *(i_21 + 0x294) = zx.o(0)
                                    *(i_21 + 0x2a4) = zx.o(0)
                                    *(i_21 + 0x2b4) = zx.o(0)
                                    __builtin_memset(i_21 + 0x2c4, 0, 0x1c)
                                    *(i_21 + 0x310) = x9_138
                                    *(i_21 + 0x2e0) = i_21
                                    *(i_21 + 0x308) = 1
                                    *(i_21 + 0x314) = arg5
                                    *(i_21 + 0x318) = 0xffffffff
                                    __builtin_memset(i_21 + 0x31c, 0, 0x6c)
                                    *(i_21 + 0x3c0) = 0xffffffff
                                    *(i_21 + 0x3b0) = 1
                                    *(i_21 + 0x388) = i_21
                                    *(i_21 + 0x3bc) = arg5
                                    *(i_21 + 0x3f4) = zx.o(0)
                                    __builtin_memset(i_21 + 0x404, 0, 0x2c)
                                    __builtin_memset(i_21 + 0x3c4, 0, 0x30)
                                    *(i_21 + 0x430) = i_21
                                    *(i_21 + 0x1f78) = 0
                                    i_38 = *(gDomClient + 0x205e0)
                                    x10_35 = zx.q(*(gDomClient + 0x205e8))
                                    break
                            else if (x16_14 == 0 && *(i_21 + 0xa4) == arg4)
                                *(i_21 + 0xa4) = arg5
                                i_38 = *(gDomClient + 0x205e0)
                                x10_35 = zx.q(*(gDomClient + 0x205e8))
                            
                            if (i_21 == 0)
                                i_21 = i_38
                            else
                                i_21 += 0x21d8
                            
                            void* x16_18 = i_38 + mulu.dp.d(x10_35.d, 0x21d8)
                            
                            if (i_21 u>= x16_18)
                                break
                            
                            while (zx.d(*(i_21 + 0x21d2)) == 0)
                                i_21 += 0x21d8
                                
                                if (i_21 u>= x16_18)
                                    goto label_b5233c
                        
                        break
                    
                    i_21 += 0x21d8
                while (i_21 u< i_38 + x10_35 * 0x21d8)
                
            label_b5233c:
                
                if (x10_35.d != 0)
                    void* i_22 = i_38
                    
                    do
                        if (zx.d(*(i_22 + 0x21d2)) != 0)
                            while (i_22 != 0xffffffff)
                                if (*(i_22 + 0x2c) == 0 && *(i_22 + 0xa4) == 6
                                        && *(i_22 + 0x3bc) == arg4)
                                    *(i_22 + 0x3bc) = arg5
                                    i_38 = *(gDomClient + 0x205e0)
                                    x10_35 = zx.q(*(gDomClient + 0x205e8))
                                
                                if (i_22 == 0)
                                    i_22 = i_38
                                else
                                    i_22 += 0x21d8
                                
                                void* x15_35 = i_38 + mulu.dp.d(x10_35.d, 0x21d8)
                                
                                if (i_22 u>= x15_35)
                                    break
                                
                                while (zx.d(*(i_22 + 0x21d2)) == 0)
                                    i_22 += 0x21d8
                                    
                                    if (i_22 u>= x15_35)
                                        return result
                            
                            break
                        
                        i_22 += 0x21d8
                    while (i_22 u< i_38 + mulu.dp.d(x10_35.d, 0x21d8))
            
        labelid_1:
            return result
        case 0x2c
            if (arg4 == 0)
                result = ActiveGame()
                
                if (*(result + 0x11b4) s>= 1)
                    int64_t i_23 = 0
                    int64_t (* x20_3)() = gDomClient + 0x4d84
                    
                    do
                        *x20_3 = 0
                        i_23 += 1
                        result = ActiveGame()
                        x20_3 += 0x4d48
                    while (i_23 s< sx.q(*(result + 0x11b4)))
            else
                int64_t (* x8_61)()
                
                if (var_14c == 0xffffffff)
                    x8_61 = gDomClient + 0x48
                else
                    x8_61 = gDomClient + 0x48 + muls.dp.d(var_14c, 0x4d48)
                
                *(x8_61 + 0x4d3c) = arg4
                *(x8_61 + 0x4d40) = arg5
            
        labelid_1:
            return result
        case 0x2d
            int64_t i_51 = sx.q(*(gDomClient + 0x83b08))
            int64_t i_49 = i_51
            
            if (i_51.d s> 0)
                i_49 = i_51 & 0xffffffff
                int64_t (* x11_38)() = gDomClient + 0x83708
                int64_t i_40 = i_49
                int64_t i_24
                
                do
                    if (*x11_38 == arg4)
                        return result
                    
                    i_24 = i_40
                    i_40 -= 1
                    x11_38 += 4
                while (i_24 != 1)
            
            *(gDomClient + 0x83b08) = i_51.d + 1
            *(gDomClient + (i_49 << 2) + 0x83708) = arg4
        label_b52444:
            return result
        case 0x2e
            char x21 = 1
            int64_t (* x20_1)() = gDomClient + 0x21cc4
            
            for (int64_t i_25 = 7; i_25 != 0x48; )
                result = zx.q(*x20_1)
                
                if (result.d != 0)
                    result = PregameCardIs(result, 0x40000)
                    
                    if ((result.d & 1) != 0)
                        break
                
                bool cond:20_1 = i_25 u< 0x47
                i_25 += 1
                x21 = (cond:20_1 ? 1 : 0).b
                x20_1 += 0x10
            
            *(gDomClient + 0x20598) = x21 & 1
            
            if ((x28 & 1) == 0)
                return GameDlgManagerRefreshMainLayout() __tailcall
            
        label_b52444_1:
            return result
        case 0x2f
            result = DomRemoveAllTokenIcons(zx.q(arg5), false)
            uint64_t x11_40 = zx.q(*(gDomClient + 0x205e8))
            
            if (x11_40.d != 0)
                void* i_34 = *(gDomClient + 0x205e0)
                void* i_26 = i_34
                
                do
                    if (zx.d(*(i_26 + 0x21d2)) != 0)
                        if (i_26 != 0xffffffff)
                            int64_t x11_74 = i_34 + x11_40 * 0x21d8
                            
                            do
                                if (*(i_26 + 0x2c) == 3 && *(i_26 + 0x5c) == arg4)
                                    UI2Free(i_26 + 0x2148)
                                    UI2Free(i_26 + 0x214c)
                                    UI2Free(i_26 + 0x2150)
                                    UI2Free(i_26 + 0x2154)
                                    result = zx.q(*(i_26 + 0x1f90))
                                    
                                    if (result.d != 0)
                                        result = SpineDestroy(result.d)
                                    
                                    int32_t x10_104 = *(gDomClient + 0x205f0)
                                    *(gDomClient + 0x205f0) = zx.d(*(i_26 + 0x21d0))
                                    *(i_26 + 0x21d0) = x10_104
                                    *(gDomClient + 0x205f4) -= 1
                                    break
                                
                                if (i_26 == 0)
                                    i_26 = i_34
                                else
                                    i_26 += 0x21d8
                                
                                if (i_26 u>= x11_74)
                                    break
                                
                                while (zx.d(*(i_26 + 0x21d2)) == 0)
                                    i_26 += 0x21d8
                                    
                                    if (i_26 u>= x11_74)
                                        return result
                            while (i_26 != 0xffffffff)
                        
                        break
                    
                    i_26 += 0x21d8
                while (i_26 u< i_34 + x11_40 * 0x21d8)
            
        label_b52444_2:
            return result
*(x11_9 + 0x1d0) = x8_25

if ((x28 & 1) == 0)
    return DomSoundToken(zx.q(var_14c), 0xb01, 0) __tailcall

label_b52444_3:
return result
