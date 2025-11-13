// 函数: _Z19CalcUITransform_IntR6DomLocPb
// 地址: 0xafa848
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v15
int64_t var_a0 = v15
int64_t v14
int64_t var_98 = v14
int64_t v13
int64_t var_90 = v13
int64_t v12
int64_t var_88 = v12
int64_t v11
int64_t var_80 = v11
int64_t v10
int64_t var_78 = v10
int64_t v9
int64_t var_70 = v9
int64_t v8
int64_t var_68 = v8
DomLoc& x20 = arg1
uint64_t result
int128_t v0
int128_t v1
result, v0, v1 = GameMainUI()
int32_t* entry_x8
int64_t (* const x8_307)()

if (result.d == 0)
label_afd2d0:
    x8_307 = TI
label_afd2d4:
    v1 = *x8_307
    v0 = *(x8_307 + 0x10)
label_afd2d8:
    *entry_x8 = v1
    *(entry_x8 + 0x10) = v0
    return result

int32_t x21_1 = result.d

if (arg2 != 0)
    *arg2 = false

uint64_t x8_1 = zx.q(*x20 - 6)
int128_t var_c0
int128_t var_b0
uint64_t x0_10
int32_t x22_3
int32_t x22_4
char const* const x22_5
char const* const x23_3
char* x23_5
int32_t x23_6
char const* const x24_1
char* x24_3

if (x8_1.d u> 0x1f)
    pthread_kill(pthread_self(), 6)
    result, v0, v1 = XNoReturn()
else
    switch (x8_1)
        case 0
            int32_t x22_6 = *(x20 + 4)
            int32_t x23_4 = x22_6 - 7
            
            if (x23_4 u> 0xb)
                int32_t x23_7 = x22_6 - 0x13
                uint64_t x0_106
                
                if (x23_7 u<= 0xe)
                    int32_t x24_4
                    
                    if (*(gDomClient + 0x21e24) == 0)
                        x24_4 = 0xa
                    else if (*(gDomClient + 0x21e34) == 0)
                        x24_4 = 0xb
                    else if (*(gDomClient + 0x21e44) == 0)
                        x24_4 = 0xc
                    else if (*(gDomClient + 0x21e54) == 0)
                        x24_4 = 0xd
                    else if (*(gDomClient + 0x21e64) != 0)
                        x24_4 = 0xf
                    else
                        x24_4 = 0xe
                    
                    int32_t x25_2
                    
                    if (*(gDomClient + 0x21e74) == 0)
                        x25_2 = 0
                    else if (*(gDomClient + 0x21e84) == 0)
                        x25_2 = 1
                    else if (*(gDomClient + 0x21e94) == 0)
                        x25_2 = 2
                    else if (*(gDomClient + 0x21ea4) == 0)
                        x25_2 = 3
                    else if (*(gDomClient + 0x21eb4) != 0)
                        x25_2 = 5
                    else
                        x25_2 = 4
                    
                    int32_t x0_91 = NumExtraPiles()
                    int32_t x0_92 = NearestAspectRatio()
                    char x4_6
                    
                    if (zx.d(*(GetLocalSettings() + 0x38)) == 0)
                        x4_6 = 0
                    else if (*(GetClient() + 0x5068) != 1)
                        x4_6 = 1
                    else
                        int32_t x0_97 = GetActiveTutorial(zx.q(*(ActiveGameSafe() + 0x1c)), &var_c0)
                        x4_6 = (*(gDomClient + 0x205cc) s>= x0_97 ? 1 : 0).b
                            | (var_c0.q == 0 ? 1 : 0).b
                    
                    int64_t x0_99 =
                        CalcLayoutStyle(x24_4, x25_2, x0_91, (x0_92 != 0 ? 1 : 0).b, x4_6)
                    
                    if (x22_6 s>= 0x18)
                        if (LayoutBaneStyle(x0_99) == 1)
                            x23_7 = x22_6 - 0x12
                        label_afc5d8:
                            
                            if (LayoutBaneStyle(zx.q(x0_99.d)) == 4)
                                x23_7 += 1
                        else if (x22_6 s>= 0x19)
                            goto label_afc5d8
                    
                    int32_t x0_104
                    
                    if (*(x20 + 0x40) == "tbl_center" && *(x20 + 0x38) == x21_1
                            && *(x20 + 0x48) == x23_7 && *(x20 + 0x50) == 0)
                        x0_104 = UI2Exists(zx.q(*(x20 + 0x70)))
                    
                    if (*(x20 + 0x40) == "tbl_center" && *(x20 + 0x38) == x21_1
                            && *(x20 + 0x48) == x23_7 && *(x20 + 0x50) == 0 && (x0_104 & 1) != 0)
                        return UI2GetTransform(zx.q(*(x20 + 0x70)))
                    
                    x0_106 = UI2GetHandle(zx.q(x21_1), "tbl_center", x23_7)
                    *(x20 + 0x70) = x0_106.d
                    
                    if (x0_106.d == 0)
                        return UI2GetTransform(x0_106)
                    
                    *(x20 + 0x40) = "tbl_center"
                    *(x20 + 0x38) = x21_1
                    *(x20 + 0x48) = x23_7
                    *(x20 + 0x50) = 0
                    return UI2GetTransform(x0_106)
                
                if (x22_6 - 0x22 u<= 4)
                    int32_t x23_8
                    
                    if (*(gDomClient + 0x21e24) == 0)
                        x23_8 = 0xa
                    else if (*(gDomClient + 0x21e34) == 0)
                        x23_8 = 0xb
                    else if (*(gDomClient + 0x21e44) == 0)
                        x23_8 = 0xc
                    else if (*(gDomClient + 0x21e54) == 0)
                        x23_8 = 0xd
                    else if (*(gDomClient + 0x21e64) != 0)
                        x23_8 = 0xf
                    else
                        x23_8 = 0xe
                    
                    int32_t x24_8
                    
                    if (*(gDomClient + 0x21e74) == 0)
                        x24_8 = 0
                    else if (*(gDomClient + 0x21e84) == 0)
                        x24_8 = 1
                    else if (*(gDomClient + 0x21e94) == 0)
                        x24_8 = 2
                    else if (*(gDomClient + 0x21ea4) == 0)
                        x24_8 = 3
                    else if (*(gDomClient + 0x21eb4) != 0)
                        x24_8 = 5
                    else
                        x24_8 = 4
                    
                    int32_t x0_107 = NumExtraPiles()
                    int32_t x0_108 = NearestAspectRatio()
                    char x4_7
                    
                    if (zx.d(*(GetLocalSettings() + 0x38)) == 0)
                        x4_7 = 0
                    else if (*(GetClient() + 0x5068) != 1)
                        x4_7 = 1
                    else
                        int32_t x0_113 =
                            GetActiveTutorial(zx.q(*(ActiveGameSafe() + 0x1c)), &var_c0)
                        x4_7 = (*(gDomClient + 0x205cc) s>= x0_113 ? 1 : 0).b
                            | (var_c0.q == 0 ? 1 : 0).b
                    
                    bool v_1
                    bool z_1
                    bool n_1
                    
                    if (CalcLayoutStyle(x23_8, x24_8, x0_107, (x0_108 != 0 ? 1 : 0).b, x4_7) - 0x45
                            u< 4)
                        v_1 = add_overflow(x22_6, 0xffffffdd)
                        z_1 = x22_6 == 0x23
                        n_1 = x22_6 - 0x23 s< 0
                    else
                        n_1 = false
                        z_1 = true
                        v_1 = false
                    
                    int32_t x8_209
                    
                    if (not(z_1) && n_1 == v_1)
                        x8_209 = -0x21
                    else
                        x8_209 = -0x22
                    
                    int32_t x22_10 = x8_209 + x22_6
                    int32_t x0_117
                    
                    if (*(x20 + 0x40) == "tbl_landscape" && *(x20 + 0x38) == x21_1
                            && *(x20 + 0x48) == x22_10 && *(x20 + 0x50) == 0)
                        x0_117 = UI2Exists(zx.q(*(x20 + 0x70)))
                    
                    if (*(x20 + 0x40) == "tbl_landscape" && *(x20 + 0x38) == x21_1
                            && *(x20 + 0x48) == x22_10 && *(x20 + 0x50) == 0 && (x0_117 & 1) != 0)
                        return UI2GetTransform(zx.q(*(x20 + 0x70)))
                    
                    x0_106 = UI2GetHandle(zx.q(x21_1), "tbl_landscape", x22_10)
                    *(x20 + 0x70) = x0_106.d
                    
                    if (x0_106.d == 0)
                        return UI2GetTransform(x0_106)
                    
                    *(x20 + 0x40) = "tbl_landscape"
                    *(x20 + 0x38) = x21_1
                    *(x20 + 0x48) = x22_10
                    *(x20 + 0x50) = 0
                    return UI2GetTransform(x0_106)
                
                int32_t x22_11
                char* x23_13
                
                if (x22_6 - 0x27 u> 0x20)
                    uint64_t x8_165 = zx.q(x22_6 - 0x3e9)
                    
                    if (x8_165.d u> 0x89)
                        uint64_t x8_229 = zx.q(x22_6 - 1)
                        
                        if (x8_229.d u> 5)
                            pthread_kill(pthread_self(), 6)
                            result, v0, v1 = XNoReturn()
                        else
                            switch (x8_229)
                                case 0, 4
                                    goto label_afd2d0
                                case 1
                                    int32_t x0_138
                                    
                                    if (*(x20 + 0x40) == "tbl_trash" && *(x20 + 0x38) == x21_1
                                            && *(x20 + 0x48) == 0 && *(x20 + 0x50) == 0)
                                        x0_138 = UI2Exists(zx.q(*(x20 + 0x70)))
                                    
                                    if (*(x20 + 0x40) == "tbl_trash" && *(x20 + 0x38) == x21_1
                                            && *(x20 + 0x48) == 0 && *(x20 + 0x50) == 0
                                            && (x0_138 & 1) != 0)
                                        return UI2GetTransform(zx.q(*(x20 + 0x70))) __tailcall
                                    
                                    x22_5 = "tbl_trash"
                                    goto label_afb0e0
                                case 2
                                    result, v0, v1 = BoardPileWhere(gDomClient + 0x20728, 0xd00)
                                    uint64_t x9_43 = zx.q(*(gDomClient + 0x205e8))
                                    
                                    if (x9_43.d == 0)
                                        goto label_afd2d0
                                    
                                    DomLoc* x8_295 = *(gDomClient + 0x205e0)
                                    int64_t x9_44 = x8_295 + x9_43 * 0x21d8
                                    x20 = x8_295
                                    
                                    while (zx.d(*(x20 + 0x21d2)) == 0)
                                        x20 += 0x21d8
                                        
                                        if (x20 u>= x9_44)
                                            goto label_afd2d0
                                    
                                    if (x20 == 0xffffffff)
                                        goto label_afd2d0
                                    
                                    while (*(x20 + 0x2c) != 3 || *(x20 + 0x58) != 0xffffffff
                                            || *(x20 + 0x5c) != result.d || *(x20 + 0x60) != 0)
                                        if (x20 == 0)
                                            x20 = x8_295
                                        else
                                            x20 += 0x21d8
                                        
                                        if (x20 u>= x9_44)
                                            goto label_afd2d0
                                        
                                        while (zx.d(*(x20 + 0x21d2)) == 0)
                                            x20 += 0x21d8
                                            
                                            if (x20 u>= x9_44)
                                                goto label_afd2d0
                                        
                                        if (x20 == 0xffffffff)
                                            goto label_afd2d0
                                case 3
                                    pthread_kill(pthread_self(), 6)
                                    result, v0, v1 = XNoReturn()
                                case 5
                                    int32_t x0_172 = BoardPileWhere(gDomClient + 0x20728, 0xd3d)
                                    int32_t x22_12
                                    
                                    if (*(gDomClient + 0x21e24) == 0)
                                        x22_12 = 0xa
                                    else if (*(gDomClient + 0x21e34) == 0)
                                        x22_12 = 0xb
                                    else if (*(gDomClient + 0x21e44) == 0)
                                        x22_12 = 0xc
                                    else if (*(gDomClient + 0x21e54) == 0)
                                        x22_12 = 0xd
                                    else if (*(gDomClient + 0x21e64) != 0)
                                        x22_12 = 0xf
                                    else
                                        x22_12 = 0xe
                                    
                                    int32_t x24_12
                                    
                                    if (*(gDomClient + 0x21e74) == 0)
                                        x24_12 = 0
                                    else if (*(gDomClient + 0x21e84) == 0)
                                        x24_12 = 1
                                    else if (*(gDomClient + 0x21e94) == 0)
                                        x24_12 = 2
                                    else if (*(gDomClient + 0x21ea4) == 0)
                                        x24_12 = 3
                                    else if (*(gDomClient + 0x21eb4) != 0)
                                        x24_12 = 5
                                    else
                                        x24_12 = 4
                                    
                                    int32_t x0_174 = NumExtraPiles()
                                    int32_t x0_175 = NearestAspectRatio()
                                    char x4_13
                                    
                                    if (zx.d(*(GetLocalSettings() + 0x38)) == 0)
                                        x4_13 = 0
                                    else if (*(GetClient() + 0x5068) != 1)
                                        x4_13 = 1
                                    else
                                        int32_t x0_180 = GetActiveTutorial(
                                            zx.q(*(ActiveGameSafe() + 0x1c)), &var_c0)
                                        x4_13 = (*(gDomClient + 0x205cc) s>= x0_180 ? 1 : 0).b
                                            | (var_c0.q == 0 ? 1 : 0).b
                                    
                                    int64_t x0_183 = LayoutExtraIdx(
                                        CalcLayoutStyle(x22_12, x24_12, x0_174, 
                                            (x0_175 != 0 ? 1 : 0).b, x4_13), 
                                        x0_172 - 0x27)
                                    x22_11 = (x0_183 u>> 0x20).d
                                    
                                    if (x0_183.d == 2)
                                        if (*(x20 + 0x40) != "tbl_centerOther"
                                                || *(x20 + 0x38) != x21_1
                                                || *(x20 + 0x48) != x22_11 || *(x20 + 0x50) != 0)
                                            goto label_afd4c0
                                        
                                        goto label_afccc0
                                    
                                    if (x0_183.d == 1)
                                        if (*(x20 + 0x40) == "tbl_centerExtraBottom"
                                                && *(x20 + 0x38) == x21_1
                                                && *(x20 + 0x48) == x22_11 && *(x20 + 0x50) == 0)
                                            goto label_afcd04
                                        
                                        x23_13 = "tbl_centerExtraBottom"
                                        goto label_afd510
                                    
                                    if (x0_183.d == 0)
                                        if (*(x20 + 0x40) == "tbl_centerExtra"
                                                && *(x20 + 0x38) == x21_1
                                                && *(x20 + 0x48) == x22_11 && *(x20 + 0x50) == 0)
                                            goto label_afcc7c
                                        
                                        x23_13 = "tbl_centerExtra"
                                        goto label_afd510
                                    
                                    pthread_kill(pthread_self(), 6)
                                    result, v0, v1 = XNoReturn()
                    else
                        switch (x8_165)
                            case 0
                                uint64_t x1_42 = zx.q(*(x20 + 8))
                                
                                if (x1_42.d == *(gDomClient + 0x205c4))
                                    return CalcPlayerInPlayTransform(zx.q(x21_1), x20) __tailcall
                                
                                return UI2GetTransform(GetPlayerPodCard(0x3e9, x1_42, 
                                    *(x20 + 0x10))) __tailcall
                            case 1
                                return CalcPlayerHandTransform(zx.q(x21_1), x20) __tailcall
                            case 2, 0x64, 0x65, 0x66, 0x67
                                uint64_t x0_139 = zx.q(*(x20 + 8))
                                int32_t x8_234 = *(gDomClient + 0x38)
                                uint64_t x1_36
                                
                                if (x8_234 == 0xffffffff)
                                    x1_36 = 0
                                else
                                    x1_36 = zx.q(x8_234)
                                
                                if (x0_139.d != x1_36.d)
                                    x22_4 = PlayerWhoToSeat(x0_139, x1_36) - 1
                                    
                                    if (*(x20 + 0x40) == "tbl_opponents" && *(x20 + 0x38) == x21_1
                                            && *(x20 + 0x48) == x22_4
                                            && *(x20 + 0x50) == "tbl_deck" && *(x20 + 0x58) == 0
                                            && *(x20 + 0x60) == 0)
                                        return UI2GetTransform(zx.q(*(x20 + 0x70))) __tailcall
                                    
                                    x24_1 = "tbl_opponents"
                                    x23_3 = "tbl_deck"
                                    goto label_afb73c
                                
                                int32_t x0_141
                                
                                if (*(x20 + 0x40) == "tbl_player_deck" && *(x20 + 0x38) == x21_1
                                        && *(x20 + 0x48) == 0 && *(x20 + 0x50) == 0)
                                    x0_141 = UI2Exists(zx.q(*(x20 + 0x70)))
                                
                                if (*(x20 + 0x40) == "tbl_player_deck" && *(x20 + 0x38) == x21_1
                                        && *(x20 + 0x48) == 0 && *(x20 + 0x50) == 0
                                        && (x0_141 & 1) != 0)
                                    return UI2GetTransform(zx.q(*(x20 + 0x70))) __tailcall
                                
                                x22_5 = "tbl_player_deck"
                                goto label_afb0e0
                            case 3
                                uint64_t x0_165 = zx.q(*(x20 + 8))
                                int32_t x8_276 = *(gDomClient + 0x38)
                                uint64_t x1_45
                                
                                if (x8_276 == 0xffffffff)
                                    x1_45 = 0
                                else
                                    x1_45 = zx.q(x8_276)
                                
                                if (x0_165.d != x1_45.d)
                                    x22_4 = PlayerWhoToSeat(x0_165, x1_45) - 1
                                    
                                    if (*(x20 + 0x40) == "tbl_opponents" && *(x20 + 0x38) == x21_1
                                            && *(x20 + 0x48) == x22_4
                                            && *(x20 + 0x50) == "tbl_discard" && *(x20 + 0x58) == 0
                                            && *(x20 + 0x60) == 0)
                                        return UI2GetTransform(zx.q(*(x20 + 0x70))) __tailcall
                                    
                                    x24_1 = "tbl_opponents"
                                    x23_3 = "tbl_discard"
                                    goto label_afb73c
                                
                                int32_t x0_167
                                
                                if (*(x20 + 0x40) == "tbl_player_discard" && *(x20 + 0x38) == x21_1
                                        && *(x20 + 0x48) == 0 && *(x20 + 0x50) == 0)
                                    x0_167 = UI2Exists(zx.q(*(x20 + 0x70)))
                                
                                if (*(x20 + 0x40) == "tbl_player_discard" && *(x20 + 0x38) == x21_1
                                        && *(x20 + 0x48) == 0 && *(x20 + 0x50) == 0
                                        && (x0_167 & 1) != 0)
                                    return UI2GetTransform(zx.q(*(x20 + 0x70))) __tailcall
                                
                                x22_5 = "tbl_player_discard"
                                goto label_afb0e0
                            case 4
                                int32_t x8_281 = *(gDomClient + 0x38)
                                int32_t x8_282
                                
                                x8_282 = x8_281 == 0xffffffff ? 0 : x8_281
                                
                                if (*(x20 + 8) != x8_282)
                                    return CalcPlayerHandTransform(zx.q(x21_1), x20) __tailcall
                                
                                return UI2GetTableTransform(zx.q(x21_1), "tbl_player_receiving", 0, 
                                    nullptr) __tailcall
                            case 5
                                uint64_t x11_12 = zx.q(*(gDomClient + 0x205e8))
                                
                                if (x11_12.d == 0)
                                    goto label_afd2d0
                                
                                void* x10_20 = *(gDomClient + 0x205e0)
                                result = sx.q(*(x20 + 8))
                                int64_t i = *(x20 + 0x10)
                                int64_t x12_15 = x10_20 + x11_12 * 0x21d8
                                void* x11_13 = x10_20
                                
                                while (zx.d(*(x11_13 + 0x21d2)) == 0)
                                    x11_13 += 0x21d8
                                    
                                    if (x11_13 u>= x12_15)
                                        goto label_afd2d0
                                
                                if (x11_13 == 0xffffffff)
                                    goto label_afd2d0
                                
                                while (*(x11_13 + 0x2c) != 3 || *(x11_13 + 0x58) != result.d
                                        || *(x11_13 + 0x5c) != 0x3ee || *(x11_13 + 0x60) != i)
                                    if (x11_13 == 0)
                                        x11_13 = x10_20
                                    else
                                        x11_13 += 0x21d8
                                    
                                    if (x11_13 u>= x12_15)
                                        goto label_afd2d0
                                    
                                    while (zx.d(*(x11_13 + 0x21d2)) == 0)
                                        x11_13 += 0x21d8
                                        
                                        if (x11_13 u>= x12_15)
                                            goto label_afd2d0
                                    
                                    if (x11_13 == 0xffffffff)
                                        goto label_afd2d0
                                
                                if (x11_13 == 0)
                                    goto label_afd2d0
                                
                                uint32_t i_2 = (i u>> 0x20).d
                                
                                if (i_2 == 0)
                                    goto label_afd2d0
                                
                                void* x12_17 = x10_20
                                int32_t i_1
                                
                                do
                                    i_1 = *(x12_17 + 0x21d0)
                                    x12_17 += 0x21d8
                                while (i_1 u< 0x10000)
                                void* x12_18 = x12_17 - 0x21d8
                                
                                while (*(x12_18 + 0x2c) != 0 || *(x12_18 + 0x98) != i_2
                                        || zx.d(*(x12_18 + 0x168)) != 0)
                                    void* x15_14 = x12_18 + 0x43a8
                                    int32_t j
                                    
                                    do
                                        j = *x15_14
                                        x12_18 += 0x21d8
                                        x15_14 += 0x21d8
                                    while (j u< 0x10000)
                                
                                int32_t x8_330 = *(x12_18 + 0x2148)
                                
                                if (x8_330 != 0)
                                    return UI2GetTransform(UI2GetHandle(zx.q(x8_330), 
                                        "tbl_assocPile", 0, "tbl_card", 0)) __tailcall
                                
                                int32_t i_4 = *(x11_13 + 0x68)
                                
                                if (i_4 != 0)
                                    void* x11_14 = x10_20
                                    int32_t i_3
                                    
                                    do
                                        i_3 = *(x11_14 + 0x21d0)
                                        x11_14 += 0x21d8
                                    while (i_3 u< 0x10000)
                                    void* x11_15 = x11_14 - 0x21d8
                                    
                                    while (*(x11_15 + 0x2c) != 0 || *(x11_15 + 0x98) != i_4
                                            || zx.d(*(x11_15 + 0x168)) != 0)
                                        void* x14_10 = x11_15 + 0x43a8
                                        int32_t j_1
                                        
                                        do
                                            j_1 = *x14_10
                                            x11_15 += 0x21d8
                                            x14_10 += 0x21d8
                                        while (j_1 u< 0x10000)
                                    
                                    x8_330 = *(x11_15 + 0x2148)
                                
                                if (i_4 != 0 && x8_330 != 0)
                                    return UI2GetTransform(UI2GetHandle(zx.q(x8_330), 
                                        "tbl_assocPile", 0, "tbl_card", 0)) __tailcall
                                
                                int32_t i_5
                                
                                if (result.d != 0xffffffff)
                                    i_5 = *(gDomClient + result * 0x4d48 + 0x40e4)
                                
                                if (result.d == 0xffffffff || i_5 == 0)
                                    x22_4 = 0
                                else
                                    x22_4 = 0
                                    
                                    do
                                        i_5 = *(x10_20 + mulu.dp.d(i_5 & 0xffff, 0x21d8) + 0x213c)
                                        x22_4 += 1
                                    while (i_5 != 0)
                                
                                int32_t x8_334 = *(gDomClient + 0x38)
                                uint64_t x1_52
                                
                                if (x8_334 == 0xffffffff)
                                    x1_52 = 0
                                else
                                    x1_52 = zx.q(x8_334)
                                
                                if (result.d != x1_52.d)
                                    x23_6 = PlayerWhoToSeat(result, x1_52) - 1
                                    
                                    if (*(x20 + 0x40) != "tbl_opponents" || *(x20 + 0x38) != x21_1
                                            || *(x20 + 0x48) != x23_6
                                            || *(x20 + 0x50) != "tbl_opponent_pods"
                                            || *(x20 + 0x58) != x22_4
                                            || *(x20 + 0x60) != "tbl_card" || *(x20 + 0x68) != 0)
                                        x24_3 = "tbl_card"
                                        goto label_afb3a4
                                    
                                    return UI2GetTransform(zx.q(*(x20 + 0x70))) __tailcall
                                
                                if (*(x20 + 0x40) == "tbl_player_pods" && *(x20 + 0x38) == x21_1
                                        && *(x20 + 0x48) == x22_4 && *(x20 + 0x50) == "tbl_card"
                                        && *(x20 + 0x58) == 0 && *(x20 + 0x60) == 0)
                                    return UI2GetTransform(zx.q(*(x20 + 0x70))) __tailcall
                                
                                x24_1 = "tbl_player_pods"
                                x23_3 = "tbl_card"
                                goto label_afb73c
                            case 6
                                x22_3 = *(x20 + 0xc)
                                
                                if (*(x20 + 0x40) != "tbl_player_reveal_left"
                                        || *(x20 + 0x38) != x21_1 || *(x20 + 0x48) != x22_3
                                        || *(x20 + 0x50) != 0)
                                    goto label_afb7ac
                                
                                goto label_afb7a0
                            case 7
                                x22_3 = *(x20 + 0xc)
                                
                                if (*(x20 + 0x40) == "tbl_player_reveal_right"
                                        && *(x20 + 0x38) == x21_1 && *(x20 + 0x48) == x22_3
                                        && *(x20 + 0x50) == 0)
                                    goto label_afac20
                                
                                x23_5 = "tbl_player_reveal_right"
                                goto label_afce30
                            case 8
                                goto label_afd2d0
                            case 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 
                                    0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 
                                    0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 
                                    0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x31, 0x32, 
                                    0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 
                                    0x3d, 0x3e, 0x3f, 0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 
                                    0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 0x50, 
                                    0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 
                                    0x5b, 0x5c, 0x5d, 0x5e, 0x5f, 0x60, 0x61, 0x62, 0x63
                                pthread_kill(pthread_self(), 6)
                                result, v0, v1 = XNoReturn()
                            case 0x68, 0x69, 0x6a, 0x6b, 0x6c, 0x6d, 0x6e, 0x6f, 0x70, 0x71, 0x72, 
                                    0x73, 0x74, 0x75, 0x76, 0x77, 0x78, 0x79, 0x7a, 0x7b, 0x7c, 
                                    0x7d, 0x7e, 0x7f, 0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 
                                    0x87, 0x88, 0x89
                                return UI2GetTransform(GetPlayerPodCard(zx.q(x22_6), 
                                    zx.q(*(x20 + 8)), *(x20 + 0x10))) __tailcall
                else
                    int32_t x22_9
                    
                    if (*(gDomClient + 0x21e24) == 0)
                        x22_9 = 0xa
                    else if (*(gDomClient + 0x21e34) == 0)
                        x22_9 = 0xb
                    else if (*(gDomClient + 0x21e44) == 0)
                        x22_9 = 0xc
                    else if (*(gDomClient + 0x21e54) == 0)
                        x22_9 = 0xd
                    else if (*(gDomClient + 0x21e64) != 0)
                        x22_9 = 0xf
                    else
                        x22_9 = 0xe
                    
                    int32_t x24_11
                    
                    if (*(gDomClient + 0x21e74) == 0)
                        x24_11 = 0
                    else if (*(gDomClient + 0x21e84) == 0)
                        x24_11 = 1
                    else if (*(gDomClient + 0x21e94) == 0)
                        x24_11 = 2
                    else if (*(gDomClient + 0x21ea4) == 0)
                        x24_11 = 3
                    else if (*(gDomClient + 0x21eb4) != 0)
                        x24_11 = 5
                    else
                        x24_11 = 4
                    
                    int32_t x0_142 = NumExtraPiles()
                    int32_t x0_143 = NearestAspectRatio()
                    char x4_9
                    
                    if (zx.d(*(GetLocalSettings() + 0x38)) == 0)
                        x4_9 = 0
                    else if (*(GetClient() + 0x5068) != 1)
                        x4_9 = 1
                    else
                        int32_t x0_148 =
                            GetActiveTutorial(zx.q(*(ActiveGameSafe() + 0x1c)), &var_c0)
                        x4_9 = (*(gDomClient + 0x205cc) s>= x0_148 ? 1 : 0).b
                            | (var_c0.q == 0 ? 1 : 0).b
                    
                    int64_t x0_151 = LayoutExtraIdx(
                        CalcLayoutStyle(x22_9, x24_11, x0_142, (x0_143 != 0 ? 1 : 0).b, x4_9), 
                        x22_6 - 0x27)
                    x22_11 = (x0_151 u>> 0x20).d
                    
                    if (x0_151.d == 2)
                        if (*(x20 + 0x40) == "tbl_centerOther" && *(x20 + 0x38) == x21_1
                            && *(x20 + 0x48) == x22_11 && *(x20 + 0x50) == 0)
                        label_afccc0:
                            
                            if ((UI2Exists(zx.q(*(x20 + 0x70))) & 1) != 0)
                                return UI2GetTransform(zx.q(*(x20 + 0x70)))
                            
                            goto label_afd4c0
                        
                    label_afd4c0:
                        x23_13 = "tbl_centerOther"
                    label_afd510:
                        x0_106 = UI2GetHandle(zx.q(x21_1), x23_13, x22_11)
                        *(x20 + 0x70) = x0_106.d
                        
                        if (x0_106.d == 0)
                            return UI2GetTransform(x0_106)
                        
                        *(x20 + 0x40) = x23_13
                        *(x20 + 0x38) = x21_1
                        *(x20 + 0x48) = x22_11
                        *(x20 + 0x50) = 0
                        return UI2GetTransform(x0_106)
                    
                    if (x0_151.d == 1)
                        if (*(x20 + 0x40) != "tbl_centerExtraBottom" || *(x20 + 0x38) != x21_1
                                || *(x20 + 0x48) != x22_11 || *(x20 + 0x50) != 0)
                            x23_13 = "tbl_centerExtraBottom"
                            goto label_afd510
                        
                    label_afcd04:
                        
                        if ((UI2Exists(zx.q(*(x20 + 0x70))) & 1) != 0)
                            return UI2GetTransform(zx.q(*(x20 + 0x70)))
                        
                        x23_13 = "tbl_centerExtraBottom"
                        goto label_afd510
                    
                    if (x0_151.d == 0)
                        if (*(x20 + 0x40) != "tbl_centerExtra" || *(x20 + 0x38) != x21_1
                                || *(x20 + 0x48) != x22_11 || *(x20 + 0x50) != 0)
                            x23_13 = "tbl_centerExtra"
                            goto label_afd510
                        
                    label_afcc7c:
                        
                        if ((UI2Exists(zx.q(*(x20 + 0x70))) & 1) != 0)
                            return UI2GetTransform(zx.q(*(x20 + 0x70)))
                        
                        x23_13 = "tbl_centerExtra"
                        goto label_afd510
                    
                    pthread_kill(pthread_self(), 6)
                    result, v0, v1 = XNoReturn()
            else
                if (NumStandardCards() s< 9)
                    goto label_afac94
                
                if (x23_4 u< 0xc)
                    x23_4 = *(&data_801b00 + (sx.q(x23_4) << 2))
                label_afac94:
                    int32_t x0_21
                    
                    if (*(x20 + 0x40) == "tbl_centerStandard" && *(x20 + 0x38) == x21_1
                            && *(x20 + 0x48) == x23_4 && *(x20 + 0x50) == 0)
                        x0_21 = UI2Exists(zx.q(*(x20 + 0x70)))
                    
                    if (*(x20 + 0x40) == "tbl_centerStandard" && *(x20 + 0x38) == x21_1
                            && *(x20 + 0x48) == x23_4 && *(x20 + 0x50) == 0 && (x0_21 & 1) != 0)
                        return UI2GetTransform(zx.q(*(x20 + 0x70))) __tailcall
                    
                    x0_10 = UI2GetHandle(zx.q(x21_1), "tbl_centerStandard", x23_4)
                    *(x20 + 0x70) = x0_10.d
                    
                    if (x0_10.d == 0)
                        return UI2GetTransform(x0_10) __tailcall
                    
                    *(x20 + 0x40) = "tbl_centerStandard"
                    *(x20 + 0x38) = x21_1
                    *(x20 + 0x48) = x23_4
                    *(x20 + 0x50) = 0
                    return UI2GetTransform(x0_10) __tailcall
                
                pthread_kill(pthread_self(), 6)
                result, v0, v1 = XNoReturn()
        case 1, 2
            int32_t x23_1 = *(x20 + 4)
            int32_t x22_1 = x23_1 - 7
            int32_t x22_2
            
            if (x22_1 u> 0xb)
                int32_t x22_7 = x23_1 - 0x13
                
                if (x22_7 u<= 0xe)
                    int32_t x24_2
                    
                    if (*(gDomClient + 0x21e24) == 0)
                        x24_2 = 0xa
                    else if (*(gDomClient + 0x21e34) == 0)
                        x24_2 = 0xb
                    else if (*(gDomClient + 0x21e44) == 0)
                        x24_2 = 0xc
                    else if (*(gDomClient + 0x21e54) == 0)
                        x24_2 = 0xd
                    else if (*(gDomClient + 0x21e64) != 0)
                        x24_2 = 0xf
                    else
                        x24_2 = 0xe
                    
                    int32_t x25_1
                    
                    if (*(gDomClient + 0x21e74) == 0)
                        x25_1 = 0
                    else if (*(gDomClient + 0x21e84) == 0)
                        x25_1 = 1
                    else if (*(gDomClient + 0x21e94) == 0)
                        x25_1 = 2
                    else if (*(gDomClient + 0x21ea4) == 0)
                        x25_1 = 3
                    else if (*(gDomClient + 0x21eb4) != 0)
                        x25_1 = 5
                    else
                        x25_1 = 4
                    
                    int32_t x0_75 = NumExtraPiles()
                    int32_t x0_76 = NearestAspectRatio()
                    char x4_3
                    
                    if (zx.d(*(GetLocalSettings() + 0x38)) == 0)
                        x4_3 = 0
                    else if (*(GetClient() + 0x5068) != 1)
                        x4_3 = 1
                    else
                        int32_t x0_81 = GetActiveTutorial(zx.q(*(ActiveGameSafe() + 0x1c)), &var_c0)
                        x4_3 = (*(gDomClient + 0x205cc) s>= x0_81 ? 1 : 0).b
                            | (var_c0.q == 0 ? 1 : 0).b
                    
                    int64_t x0_83 =
                        CalcLayoutStyle(x24_2, x25_1, x0_75, (x0_76 != 0 ? 1 : 0).b, x4_3)
                    
                    if (x23_1 s>= 0x18)
                        if (LayoutBaneStyle(x0_83) == 1)
                            x22_7 = x23_1 - 0x12
                        label_afc300:
                            
                            if (LayoutBaneStyle(zx.q(x0_83.d)) == 4)
                                x22_7 += 1
                        else if (x23_1 s>= 0x19)
                            goto label_afc300
                    
                    int32_t x4_4
                    
                    if (*x20 != 8)
                        *(x20 + 0xc)
                        x4_4 = 0x7477b6
                    else
                        x4_4 = 0x794122
                    
                    result, v0, v1 = UI2Selector::Lookup(x20 + 0x38, zx.q(x21_1), "tbl_center", 
                        zx.q(x22_7), x4_4)
                    
                    if (result.d == 0)
                        goto label_afd2d0
                    
                label_afc364:
                    result, v0, v1 = UI2GetTransform(result)
                    v1 = var_c0
                    v0 = var_b0
                    goto label_afd2d8
                
                int32_t x24_5 = x23_1 - 0x22
                
                if (x24_5 u<= 4)
                    if (*(gDomClient + 0x21e24) != 0 && *(gDomClient + 0x21e34) == 0)
                        int32_t x9_13 = 0
                        
                        if (*(gDomClient + 0x21e74) != 0 && *(gDomClient + 0x21e84) != 0
                                && *(gDomClient + 0x21e94) != 0)
                            x9_13 = *(gDomClient + 0x21ea4) == 0 ? 1 : 0
                        
                        if (((x24_5 == 2 ? 1 : 0) & x9_13) != 0)
                            x24_5 = 3
                    
                    int32_t x0_60
                    
                    if (*(x20 + 0x40) == "tbl_landscape" && *(x20 + 0x38) == x21_1
                            && *(x20 + 0x48) == x24_5 && *(x20 + 0x50) == 0)
                        x0_60 = UI2Exists(zx.q(*(x20 + 0x70)))
                    
                    if (*(x20 + 0x40) == "tbl_landscape" && *(x20 + 0x38) == x21_1
                        && *(x20 + 0x48) == x24_5 && *(x20 + 0x50) == 0 && (x0_60 & 1) != 0)
                    label_afb64c:
                        x22_2 = *(x20 + 0x70)
                        goto label_afa908
                    
                    int32_t x0_72 = UI2GetHandle(zx.q(x21_1), "tbl_landscape", x24_5)
                    x22_2 = x0_72
                    *(x20 + 0x70) = x0_72
                    
                    if (x0_72 != 0)
                        *(x20 + 0x40) = "tbl_landscape"
                        *(x20 + 0x38) = x21_1
                        *(x20 + 0x48) = x24_5
                        *(x20 + 0x50) = 0
                    
                    goto label_afa908
                
                if (x23_1 - 0x27 u> 0x20)
                    if (x23_1 - 0x44c u<= 0x26)
                        return UI2GetTransform(GetPlayerPodCard(zx.q(x23_1), zx.q(*(x20 + 8)), 
                            *(x20 + 0x10))) __tailcall
                    
                    if (x23_1 == 0 || x23_1 == 1 || x23_1 != 6)
                        goto label_afd2d0
                    
                    pthread_kill(pthread_self(), 6)
                    result, v0, v1 = XNoReturn()
                else
                    int32_t x23_9
                    
                    if (*(gDomClient + 0x21e24) == 0)
                        x23_9 = 0xa
                    else if (*(gDomClient + 0x21e34) == 0)
                        x23_9 = 0xb
                    else if (*(gDomClient + 0x21e44) == 0)
                        x23_9 = 0xc
                    else if (*(gDomClient + 0x21e54) == 0)
                        x23_9 = 0xd
                    else if (*(gDomClient + 0x21e64) != 0)
                        x23_9 = 0xf
                    else
                        x23_9 = 0xe
                    
                    int32_t x24_9
                    
                    if (*(gDomClient + 0x21e74) == 0)
                        x24_9 = 0
                    else if (*(gDomClient + 0x21e84) == 0)
                        x24_9 = 1
                    else if (*(gDomClient + 0x21e94) == 0)
                        x24_9 = 2
                    else if (*(gDomClient + 0x21ea4) == 0)
                        x24_9 = 3
                    else if (*(gDomClient + 0x21eb4) != 0)
                        x24_9 = 5
                    else
                        x24_9 = 4
                    
                    int32_t x0_119 = NumExtraPiles()
                    int32_t x0_120 = NearestAspectRatio()
                    char x4_8
                    
                    if (zx.d(*(GetLocalSettings() + 0x38)) == 0)
                        x4_8 = 0
                    else if (*(GetClient() + 0x5068) != 1)
                        x4_8 = 1
                    else
                        int32_t x0_125 =
                            GetActiveTutorial(zx.q(*(ActiveGameSafe() + 0x1c)), &var_c0)
                        x4_8 = (*(gDomClient + 0x205cc) s>= x0_125 ? 1 : 0).b
                            | (var_c0.q == 0 ? 1 : 0).b
                    
                    int64_t x0_128 = LayoutExtraIdx(
                        CalcLayoutStyle(x23_9, x24_9, x0_119, (x0_120 != 0 ? 1 : 0).b, x4_8), 
                        x23_1 - 0x27)
                    uint32_t x23_11 = (x0_128 u>> 0x20).d
                    char* x24_10
                    
                    if (x0_128.d == 2)
                        int32_t x0_134
                        
                        if (*(x20 + 0x40) == "tbl_centerOther" && *(x20 + 0x38) == x21_1
                                && *(x20 + 0x48) == x23_11 && *(x20 + 0x50) == 0)
                            x0_134 = UI2Exists(zx.q(*(x20 + 0x70)))
                        
                        if (*(x20 + 0x40) == "tbl_centerOther" && *(x20 + 0x38) == x21_1
                                && *(x20 + 0x48) == x23_11 && *(x20 + 0x50) == 0
                                && (x0_134 & 1) != 0)
                            goto label_afb64c
                        
                        x24_10 = "tbl_centerOther"
                    label_afca1c:
                        int32_t x0_136 = UI2GetHandle(zx.q(x21_1), x24_10, x23_11)
                        x22_2 = x0_136
                        *(x20 + 0x70) = x0_136
                        
                        if (x0_136 != 0)
                            *(x20 + 0x40) = x24_10
                            *(x20 + 0x38) = x21_1
                            *(x20 + 0x48) = x23_11
                            *(x20 + 0x50) = 0
                        
                        goto label_afa908
                    
                    if (x0_128.d == 1)
                        int32_t x0_132
                        
                        if (*(x20 + 0x40) == "tbl_centerExtraBottom" && *(x20 + 0x38) == x21_1
                                && *(x20 + 0x48) == x23_11 && *(x20 + 0x50) == 0)
                            x0_132 = UI2Exists(zx.q(*(x20 + 0x70)))
                        
                        if (*(x20 + 0x40) == "tbl_centerExtraBottom" && *(x20 + 0x38) == x21_1
                                && *(x20 + 0x48) == x23_11 && *(x20 + 0x50) == 0
                                && (x0_132 & 1) != 0)
                            goto label_afb64c
                        
                        x24_10 = "tbl_centerExtraBottom"
                        goto label_afca1c
                    
                    if (x0_128.d == 0)
                        int32_t x0_130
                        
                        if (*(x20 + 0x40) == "tbl_centerExtra" && *(x20 + 0x38) == x21_1
                                && *(x20 + 0x48) == x23_11 && *(x20 + 0x50) == 0)
                            x0_130 = UI2Exists(zx.q(*(x20 + 0x70)))
                        
                        if (*(x20 + 0x40) == "tbl_centerExtra" && *(x20 + 0x38) == x21_1
                                && *(x20 + 0x48) == x23_11 && *(x20 + 0x50) == 0
                                && (x0_130 & 1) != 0)
                            goto label_afb64c
                        
                        x24_10 = "tbl_centerExtra"
                        goto label_afca1c
                    
                    pthread_kill(pthread_self(), 6)
                    result, v0, v1 = XNoReturn()
            else
                if (NumStandardCards() s< 9)
                    goto label_afa900
                
                if (x22_1 u< 0xc)
                    x22_1 = *(&data_801b00 + (sx.q(x22_1) << 2))
                label_afa900:
                    x22_2 = UI2GetHandle(zx.q(x21_1), "tbl_centerStandard", x22_1)
                label_afa908:
                    int32_t x21_2 = *(x20 + 0xc)
                    int64_t x8_2 = *(x20 + 0x40)
                    char* x23_2
                    
                    if (*x20 != 8)
                        int32_t x0_51
                        
                        if (x8_2 == "tbl_tokens" && *(x20 + 0x38) == x22_2 && *(x20 + 0x48) == x21_2
                                && *(x20 + 0x50) == 0)
                            x0_51 = UI2Exists(zx.q(*(x20 + 0x70)))
                        
                        if (x8_2 != "tbl_tokens" || *(x20 + 0x38) != x22_2 || *(x20 + 0x48) != x21_2
                                || *(x20 + 0x50) != 0 || (x0_51 & 1) == 0)
                            x23_2 = "tbl_tokens"
                        label_afb2dc:
                            result = UI2GetHandle(zx.q(x22_2), x23_2, x21_2)
                            *(x20 + 0x70) = result.d
                            
                            if (result.d != 0)
                                *(x20 + 0x40) = x23_2
                                *(x20 + 0x38) = x22_2
                                *(x20 + 0x48) = x21_2
                                *(x20 + 0x50) = 0
                        else
                            result = zx.q(*(x20 + 0x70))
                    else
                        int32_t x0_4
                        
                        if (x8_2 == "tbl_card" && *(x20 + 0x38) == x22_2 && *(x20 + 0x48) == x21_2
                                && *(x20 + 0x50) == 0)
                            x0_4 = UI2Exists(zx.q(*(x20 + 0x70)))
                        
                        if (x8_2 != "tbl_card" || *(x20 + 0x38) != x22_2 || *(x20 + 0x48) != x21_2
                                || *(x20 + 0x50) != 0 || (x0_4 & 1) == 0)
                            x23_2 = "tbl_card"
                            goto label_afb2dc
                        
                        result = zx.q(*(x20 + 0x70))
                    goto label_afc364
                
                pthread_kill(pthread_self(), 6)
                result, v0, v1 = XNoReturn()
        case 3
            uint64_t x10_2 = zx.q(*(gDomClient + 0x205e8))
            void* i_9 = *(gDomClient + 0x205e0)
            int64_t x10_3
            void* i_6
            
            if (x10_2.d != 0)
                x10_3 = i_9 + x10_2 * 0x21d8
                i_6 = i_9
                
                while (zx.d(*(i_6 + 0x21d2)) == 0)
                    i_6 += 0x21d8
                    
                    if (i_6 u>= x10_3)
                        goto label_afb8ac
            
            void* i_12
            
            if (x10_2.d == 0 || i_6 == 0xffffffff)
            label_afb8ac:
                i_12 = nullptr
            else
                do
                    if (*(i_6 + 0x2c) == 0 && *(i_6 + 0x98) == *(x20 + 4)
                            && zx.d(*(i_6 + 0x168)) == 0)
                        i_12 = i_6
                        
                        if (*(i_12 + 0x1f78) != 0)
                            goto label_afb8bc
                        
                        goto label_afcd90
                    
                    if (i_6 == 0)
                        i_6 = i_9
                    else
                        i_6 += 0x21d8
                    
                    if (i_6 u>= x10_3)
                        goto label_afb8ac
                    
                    while (zx.d(*(i_6 + 0x21d2)) == 0)
                        i_6 += 0x21d8
                        
                        if (i_6 u>= x10_3)
                            goto label_afb8ac
                    
                    i_12 = nullptr
                while (i_6 != 0xffffffff)
            
            if (*0x1f78 != 0)
            label_afb8bc:
                
                if (*(i_12 + 0x3b0) != 1 || (*(i_12 + 0x3b8) & 0xfffffffe) != 6)
                    goto label_afcdc8
                
                int32_t x9_19 = *(i_12 + 0x3bc)
                
                if (x9_19 u> 0x48 || *(i_12 + 0x478) != 1 || (*(i_12 + 0x480) & 0xfffffffe) != 6
                        || *(i_12 + 0x484) != x9_19)
                    goto label_afcdc8
                
                goto label_afcdbc
            
        label_afcd90:
            
            if ((*(i_12 + 0x3b8) & 0xfffffffe) != 6 || *(i_12 + 0x3b0) != 1
                || *(i_12 + 0x3bc) u> 0x48)
            label_afcdc8:
                x21_1 = *(i_12 + 0x2148)
                
                if (x21_1 == 0)
                    goto label_afd2d0
            else
            label_afcdbc:
                x21_1 = *(i_9 + zx.q(*(i_12 + 0x9c)) * 0x21d8 + 0x2148)
                
                if (x21_1 == 0)
                    goto label_afd2d0
            
            x22_3 = *(x20 + 0xc)
            int32_t x0_160
            
            if (*(x20 + 0x40) == "tbl_tokens" && *(x20 + 0x38) == x21_1 && *(x20 + 0x48) == x22_3
                    && *(x20 + 0x50) == 0)
                x0_160 = UI2Exists(zx.q(*(x20 + 0x70)))
            
            if (*(x20 + 0x40) != "tbl_tokens" || *(x20 + 0x38) != x21_1 || *(x20 + 0x48) != x22_3
                    || *(x20 + 0x50) != 0 || (x0_160 & 1) == 0)
                x23_5 = "tbl_tokens"
                goto label_afce30
            
            return UI2GetTransform(zx.q(*(x20 + 0x70))) __tailcall
        case 4
            int32_t x0_35
            
            if (*(x20 + 0x40) == "tbl_trash_display" && *(x20 + 0x38) == x21_1 && *(x20 + 0x48) == 0
                    && *(x20 + 0x50) == 0)
                x0_35 = UI2Exists(zx.q(*(x20 + 0x70)))
            
            if (*(x20 + 0x40) == "tbl_trash_display" && *(x20 + 0x38) == x21_1 && *(x20 + 0x48) == 0
                    && *(x20 + 0x50) == 0 && (x0_35 & 1) != 0)
                return UI2GetTransform(zx.q(*(x20 + 0x70))) __tailcall
            
            x22_5 = "tbl_trash_display"
        label_afb0e0:
            x0_10 = UI2GetHandle(zx.q(x21_1), x22_5, 0)
            *(x20 + 0x70) = x0_10.d
            
            if (x0_10.d == 0)
                return UI2GetTransform(x0_10) __tailcall
            
            *(x20 + 0x40) = x22_5
            *(x20 + 0x38) = x21_1
            *(x20 + 0x48) = 0
            *(x20 + 0x50) = 0
            return UI2GetTransform(x0_10) __tailcall
        case 5
            uint64_t x0_41 = zx.q(*(x20 + 8))
            int32_t x8_80 = *(gDomClient + 0x38)
            uint64_t x1_9
            
            if (x8_80 == 0xffffffff)
                x1_9 = 0
            else
                x1_9 = zx.q(x8_80)
            
            if (x0_41.d != x1_9.d)
                x22_4 = PlayerWhoToSeat(x0_41, x1_9) - 1
                
                if (*(x20 + 0x40) == "tbl_opponents" && *(x20 + 0x38) == x21_1
                        && *(x20 + 0x48) == x22_4 && *(x20 + 0x50) == "tbl_opponent_hand_display"
                        && *(x20 + 0x58) == 0 && *(x20 + 0x60) == 0)
                    return UI2GetTransform(zx.q(*(x20 + 0x70))) __tailcall
                
                x24_1 = "tbl_opponents"
                x23_3 = "tbl_opponent_hand_display"
                goto label_afb73c
            
            int32_t x0_43
            
            if (*(x20 + 0x40) == "tbl_player_display" && *(x20 + 0x38) == x21_1
                    && *(x20 + 0x48) == 0 && *(x20 + 0x50) == 0)
                x0_43 = UI2Exists(zx.q(*(x20 + 0x70)))
            
            if (*(x20 + 0x40) == "tbl_player_display" && *(x20 + 0x38) == x21_1
                    && *(x20 + 0x48) == 0 && *(x20 + 0x50) == 0 && (x0_43 & 1) != 0)
                return UI2GetTransform(zx.q(*(x20 + 0x70))) __tailcall
            
            x22_5 = "tbl_player_display"
            goto label_afb0e0
        case 6
            uint64_t x0_12 = zx.q(*(x20 + 8))
            int32_t x8_22 = *(gDomClient + 0x38)
            uint64_t x1_2
            
            if (x8_22 == 0xffffffff)
                x1_2 = 0
            else
                x1_2 = zx.q(x8_22)
            
            if (x0_12.d != x1_2.d)
                x22_4 = PlayerWhoToSeat(x0_12, x1_2) - 1
                
                if (*(x20 + 0x40) == "tbl_opponents" && *(x20 + 0x38) == x21_1
                        && *(x20 + 0x48) == x22_4 && *(x20 + 0x50) == "tbl_opponent_deck_display"
                        && *(x20 + 0x58) == 0 && *(x20 + 0x60) == 0)
                    return UI2GetTransform(zx.q(*(x20 + 0x70))) __tailcall
                
            label_afb484:
                x24_1 = "tbl_opponents"
                x23_3 = "tbl_opponent_deck_display"
                goto label_afb73c
            
            if (*(x20 + 0x40) != "tbl_player_deck_display" || *(x20 + 0x38) != x21_1
                    || *(x20 + 0x48) != 0 || *(x20 + 0x50) != 0)
                x22_5 = "tbl_player_deck_display"
                goto label_afb0e0
            
        label_afab50:
            
            if ((UI2Exists(zx.q(*(x20 + 0x70))) & 1) != 0)
                return UI2GetTransform(zx.q(*(x20 + 0x70))) __tailcall
            
            x22_5 = "tbl_player_deck_display"
            goto label_afb0e0
        case 7
            uint64_t x0_38 = zx.q(*(x20 + 8))
            int32_t x8_75 = *(gDomClient + 0x38)
            uint64_t x1_8
            
            if (x8_75 == 0xffffffff)
                x1_8 = 0
            else
                x1_8 = zx.q(x8_75)
            
            if (x0_38.d != x1_8.d)
                x22_4 = PlayerWhoToSeat(x0_38, x1_8) - 1
                
                if (*(x20 + 0x40) == "tbl_opponents" && *(x20 + 0x38) == x21_1
                        && *(x20 + 0x48) == x22_4
                        && *(x20 + 0x50) == "tbl_opponent_discard_display" && *(x20 + 0x58) == 0
                        && *(x20 + 0x60) == 0)
                    return UI2GetTransform(zx.q(*(x20 + 0x70))) __tailcall
                
                x24_1 = "tbl_opponents"
                x23_3 = "tbl_opponent_discard_display"
                goto label_afb73c
            
            int32_t x0_40
            
            if (*(x20 + 0x40) == "tbl_player_discard_display" && *(x20 + 0x38) == x21_1
                    && *(x20 + 0x48) == 0 && *(x20 + 0x50) == 0)
                x0_40 = UI2Exists(zx.q(*(x20 + 0x70)))
            
            if (*(x20 + 0x40) == "tbl_player_discard_display" && *(x20 + 0x38) == x21_1
                    && *(x20 + 0x48) == 0 && *(x20 + 0x50) == 0 && (x0_40 & 1) != 0)
                return UI2GetTransform(zx.q(*(x20 + 0x70))) __tailcall
            
            x22_5 = "tbl_player_discard_display"
            goto label_afb0e0
        case 8
            uint64_t x0_13 = zx.q(*(x20 + 8))
            int32_t x8_27 = *(gDomClient + 0x38)
            uint64_t x1_3
            
            if (x8_27 == 0xffffffff)
                x1_3 = 0
            else
                x1_3 = zx.q(x8_27)
            
            if (x0_13.d == x1_3.d)
                if (*(x20 + 0x40) != "tbl_player_deck_display" || *(x20 + 0x38) != x21_1
                        || *(x20 + 0x48) != 0 || *(x20 + 0x50) != 0)
                    x22_5 = "tbl_player_deck_display"
                    goto label_afb0e0
                
                goto label_afab50
            
            x22_4 = PlayerWhoToSeat(x0_13, x1_3) - 1
            
            if (*(x20 + 0x40) != "tbl_opponents" || *(x20 + 0x38) != x21_1 || *(x20 + 0x48) != x22_4
                    || *(x20 + 0x50) != "tbl_opponent_deck_display" || *(x20 + 0x58) != 0
                    || *(x20 + 0x60) != 0)
                goto label_afb484
            
            return UI2GetTransform(zx.q(*(x20 + 0x70))) __tailcall
        case 9
            uint64_t x0_11 = zx.q(*(x20 + 8))
            int32_t x8_15 = *(gDomClient + 0x38)
            uint64_t x1_1
            
            if (x8_15 == 0xffffffff)
                x1_1 = 0
            else
                x1_1 = zx.q(x8_15)
            
            if (x0_11.d == x1_1.d)
                x22_4 = *(x20 + 0xc)
                
                if (*(x20 + 0x40) != "tbl_player_pods" || *(x20 + 0x38) != x21_1
                        || *(x20 + 0x48) != x22_4 || *(x20 + 0x50) != "tbl_card_display"
                        || *(x20 + 0x58) != 0 || *(x20 + 0x60) != 0)
                    x24_1 = "tbl_player_pods"
                    x23_3 = "tbl_card_display"
                label_afb73c:
                    x0_10 = UI2GetHandle(zx.q(x21_1), x24_1, x22_4, x23_3, 0)
                    *(x20 + 0x70) = x0_10.d
                    
                    if (x0_10.d != 0)
                        *(x20 + 0x38) = x21_1
                        *(x20 + 0x40) = x24_1
                        *(x20 + 0x48) = x22_4
                        *(x20 + 0x50) = x23_3
                        *(x20 + 0x58) = 0
                        *(x20 + 0x60) = 0
                    
                    return UI2GetTransform(x0_10) __tailcall
                
                return UI2GetTransform(zx.q(*(x20 + 0x70))) __tailcall
            
            int32_t x0_53 = PlayerWhoToSeat(x0_11, x1_1)
            x22_4 = *(x20 + 0xc)
            x23_6 = x0_53 - 1
            
            if (*(x20 + 0x40) == "tbl_opponents" && *(x20 + 0x38) == x21_1 && *(x20 + 0x48) == x23_6
                    && *(x20 + 0x50) == "tbl_opponent_pods" && *(x20 + 0x58) == x22_4
                    && *(x20 + 0x60) == "tbl_card_display_below" && *(x20 + 0x68) == 0)
                return UI2GetTransform(zx.q(*(x20 + 0x70))) __tailcall
            
            x24_3 = "tbl_card_display_below"
        label_afb3a4:
            x0_10 = UI2GetHandle(zx.q(x21_1), "tbl_opponents", x23_6, "tbl_opponent_pods", x22_4, 
                x24_3, 0)
            *(x20 + 0x70) = x0_10.d
            
            if (x0_10.d != 0)
                *(x20 + 0x38) = x21_1
                *(x20 + 0x40) = "tbl_opponents"
                *(x20 + 0x48) = x23_6
                *(x20 + 0x50) = "tbl_opponent_pods"
                *(x20 + 0x58) = x22_4
                *(x20 + 0x60) = x24_3
                *(x20 + 0x68) = 0
            
            return UI2GetTransform(x0_10) __tailcall
        case 0xa, 0xd
            uint64_t x0_5 = zx.q(*(x20 + 8))
            x22_3 = *(x20 + 0xc)
            int32_t x8_6 = *(gDomClient + 0x38)
            uint64_t x1
            
            if (x8_6 == 0xffffffff)
                x1 = 0
            else
                x1 = zx.q(x8_6)
            
            if (x0_5.d != x1.d)
                return UI2GetTransform(UI2Selector::Lookup(x20 + 0x38, zx.q(x21_1), 
                    "tbl_opponents", zx.q(PlayerWhoToSeat(x0_5, x1) - 1), "tbl_opponent_pods"))
                    __tailcall
            
            if (*(x20 + 0x40) != "tbl_player_pods" || *(x20 + 0x38) != x21_1
                    || *(x20 + 0x48) != x22_3 || *(x20 + 0x50) != 0)
                x23_5 = "tbl_player_pods"
                goto label_afce30
            
            if ((UI2Exists(zx.q(*(x20 + 0x70))) & 1) == 0)
                x23_5 = "tbl_player_pods"
                goto label_afce30
            
            return UI2GetTransform(zx.q(*(x20 + 0x70))) __tailcall
        case 0xb, 0xc, 0xe, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16
            pthread_kill(pthread_self(), 6)
            result, v0, v1 = XNoReturn()
        case 0xf
            int32_t x8_38 = *(x20 + 4)
            
            if (x8_38 == 0x3ef)
                x22_3 = *(x20 + 0xc)
                
                if (*(x20 + 0x40) != "tbl_player_reveal_left" || *(x20 + 0x38) != x21_1
                    || *(x20 + 0x48) != x22_3 || *(x20 + 0x50) != 0)
                label_afb7ac:
                    x23_5 = "tbl_player_reveal_left"
                    goto label_afce30
                
            label_afb7a0:
                
                if ((UI2Exists(zx.q(*(x20 + 0x70))) & 1) == 0)
                    goto label_afb7ac
                
                return UI2GetTransform(zx.q(*(x20 + 0x70))) __tailcall
            
            if (x8_38 == 0x3f0)
                x22_3 = *(x20 + 0xc)
                
                if (*(x20 + 0x40) != "tbl_player_reveal_right" || *(x20 + 0x38) != x21_1
                        || *(x20 + 0x48) != x22_3 || *(x20 + 0x50) != 0)
                    x23_5 = "tbl_player_reveal_right"
                    goto label_afce30
                
            label_afac20:
                
                if ((UI2Exists(zx.q(*(x20 + 0x70))) & 1) != 0)
                    return UI2GetTransform(zx.q(*(x20 + 0x70))) __tailcall
                
                x23_5 = "tbl_player_reveal_right"
                goto label_afce30
            
            int32_t x11_4 = *(gDomClient + 0x1f8e4)
            int64_t x9_21
            
            if (x11_4 == 0)
            label_afba8c:
                x22_3 = *(x20 + 0xc)
                x9_21 = *(x20 + 0x40)
                
                if (zx.d(data_17dc470) != 0)
                label_afbac4:
                    int32_t x0_69
                    
                    if (x9_21 == "tbl_player_reveal_slide" && *(x20 + 0x38) == x21_1
                            && *(x20 + 0x48) == x22_3 && *(x20 + 0x50) == 0)
                        x0_69 = UI2Exists(zx.q(*(x20 + 0x70)))
                    
                    if (x9_21 == "tbl_player_reveal_slide" && *(x20 + 0x38) == x21_1
                            && *(x20 + 0x48) == x22_3 && *(x20 + 0x50) == 0 && (x0_69 & 1) != 0)
                        return UI2GetTransform(zx.q(*(x20 + 0x70))) __tailcall
                    
                    x23_5 = "tbl_player_reveal_slide"
                    goto label_afce30
            else
                uint64_t x13_2 = zx.q(*(gDomClient + 0x205e8))
                uint64_t x9_14 = zx.q(x11_4.w)
                
                if (x9_14.d u>= x13_2.d)
                    goto label_afba8c
                
                void* i_11 = *(gDomClient + 0x205e0)
                
                if (*(i_11 + x9_14 * 0x21d8 + 0x21d0) != x11_4)
                    goto label_afba8c
                
                void* x12_5 = i_11 + x9_14 * 0x21d8
                uint64_t x0_66 = zx.q(*(x12_5 + 0x5c))
                int64_t x13_3 = i_11 + x13_2 * 0x21d8
                void* i_7 = i_11
                int32_t x4_5
                
                while (true)
                    if (zx.d(*(i_7 + 0x21d2)) == 0)
                        i_7 += 0x21d8
                        
                        if (i_7 u< x13_3)
                            continue
                    else if (i_7 != 0xffffffff)
                        x4_5 = 0
                        
                        do
                            if (*(i_7 + 0x2c) == 0 && *(i_7 + 0xa0) == *(x12_5 + 0x58)
                                    && *(i_7 + 0xa4) == x0_66.d
                                    && *(i_7 + 0xc8) == *(x12_5 + 0x60))
                                x4_5 += 1
                            
                            if (i_7 == 0)
                                i_7 = i_11
                            else
                                i_7 += 0x21d8
                            
                            if (i_7 u>= x13_3)
                                break
                            
                            while (zx.d(*(i_7 + 0x21d2)) == 0)
                                i_7 += 0x21d8
                                
                                if (i_7 u>= x13_3)
                                    goto label_afc43c
                        while (i_7 != 0xffffffff)
                        
                        break
                    
                    x4_5 = 0
                    break
                
            label_afc43c:
                int32_t x8_177 = (CalcPileState(x0_66, zx.q(*(i_11 + x9_14 * 0x21d8 + 0x30)), 
                    zx.q(*(gDomClient + 0x2074c)), zx.q(*(gDomClient + 0x20758)), x4_5) & 0xfffffffe)
                    == 2 ? 1 : 0
                data_17dc470 = x8_177.b
                x22_3 = *(x20 + 0xc)
                x9_21 = *(x20 + 0x40)
                
                if (x8_177 != 0)
                    goto label_afbac4
            
            int32_t x0_90
            
            if (x9_21 == "tbl_player_reveal" && *(x20 + 0x38) == x21_1 && *(x20 + 0x48) == x22_3
                    && *(x20 + 0x50) == 0)
                x0_90 = UI2Exists(zx.q(*(x20 + 0x70)))
            
            if (x9_21 == "tbl_player_reveal" && *(x20 + 0x38) == x21_1 && *(x20 + 0x48) == x22_3
                    && *(x20 + 0x50) == 0 && (x0_90 & 1) != 0)
                return UI2GetTransform(zx.q(*(x20 + 0x70))) __tailcall
            
            x23_5 = "tbl_player_reveal"
            goto label_afce30
        case 0x17
            uint64_t x10_4 = zx.q(*(gDomClient + 0x205e8))
            DomGfx* i_10
            int64_t x10_5
            DomGfx* i_8
            
            if (x10_4.d != 0)
                i_10 = *(gDomClient + 0x205e0)
                x10_5 = i_10 + x10_4 * 0x21d8
                i_8 = i_10
                
                while (zx.d(*(i_8 + 0x21d2)) == 0)
                    i_8 += 0x21d8
                    
                    if (i_8 u>= x10_5)
                        goto label_afb97c
            
            DomGfx* i_13
            
            if (x10_4.d == 0 || i_8 == 0xffffffff)
            label_afb97c:
                i_13 = nullptr
            else
                do
                    if (*(i_8 + 0x2c) == 0 && *(i_8 + 0x98) == *(x20 + 4)
                            && zx.d(*(i_8 + 0x168)) == 0)
                        i_13 = i_8
                        break
                    
                    if (i_8 == 0)
                        i_8 = i_10
                    else
                        i_8 += 0x21d8
                    
                    if (i_8 u>= x10_5)
                        goto label_afb97c
                    
                    while (zx.d(*(i_8 + 0x21d2)) == 0)
                        i_8 += 0x21d8
                        
                        if (i_8 u>= x10_5)
                            goto label_afb97c
                    
                    i_13 = nullptr
                while (i_8 != 0xffffffff)
            
            int128_t v2_3
            int128_t v3_3
            uint128_t v4_3
            int128_t v5_3
            result, v2_3, v3_3, v4_3, v5_3 = CurrentTransformWithMouseover(i_13)
            int32_t x8_141
            float v0_3
            float v1_3
            
            if (*(i_13 + 0x1f78) == 0)
                if (*(i_13 + 0x3b0) == 1)
                    x8_141 = *(i_13 + 0x3b8)
                label_afb9d0:
                    
                    if (x8_141 != 0x21)
                        goto label_afba3c
                    
                    goto label_afb9e0
                
            label_afba3c:
                v0_3 = *entry_x8
                v2_3.q = *(entry_x8 + 0x14)
                v3_3.d = entry_x8[7]
                v4_3.d = float.s(0x42480000)
                v4_3.d = v0_3 f* v4_3.d
                v1_3 = float.s(*(x20 + 0xc) + 1)
                v4_3.d = v4_3.d f* v1_3
                *(entry_x8 + 0x14) = vadd_f32(v2_3, vdup_laneq_s32(v4_3, 0))
                entry_x8[7] = v0_3 * 0f * v1_3 f+ v3_3.d
            else
                if (*(i_13 + 0x308) != 1 || *(i_13 + 0x310) != 0x21)
                    if (*(i_13 + 0x478) != 1)
                        goto label_afba3c
                    
                    x8_141 = *(i_13 + 0x480)
                    goto label_afb9d0
                
            label_afb9e0:
                v3_3.q = 0x4248000042c80000
                v4_3.q = 0x4334000043ed8000
                v1_3 = float.s(*(x20 + 0xc))
                v0_3 = *entry_x8
                v3_3.d = 100f * v1_3
                v3_3:4.d = 50f * v1_3
                v2_3.d = 0f
                v5_3.q = *(entry_x8 + 0x14)
                int128_t v3_4 = vadd_f32(v3_3, v4_3)
                v4_3.d = entry_x8[7]
                v1_3 = v1_3 f* v2_3.d f+ v2_3.d
                v2_3.d = fconvert.s(0.5f)
                v2_3.d = v0_3 f* v2_3.d
                v3_4.d = v3_4.d f* v0_3
                v3_4:4.d = v3_4:4.d f* v0_3
                *(entry_x8 + 0x14) = vadd_f32(v5_3, v3_4)
                entry_x8[7] = v0_3 * v1_3 f+ v4_3.d
                *entry_x8 = v2_3.d
            return result
        case 0x18
            uint64_t x0_28 = zx.q(*(x20 + 8))
            int32_t x8_57 = *(gDomClient + 0x38)
            uint64_t x1_6
            
            if (x8_57 == 0xffffffff)
                x1_6 = 0
            else
                x1_6 = zx.q(x8_57)
            
            if (x0_28.d != x1_6.d)
                int32_t x0_57 = PlayerWhoToSeat(x0_28, x1_6)
                *(x20 + 0xc)
                return UI2GetTransform(UI2Selector::Lookup(x20 + 0x38, zx.q(x21_1), 
                    "tbl_opponents", zx.q(x0_57 - 1), "tbl_opponent_pods")) __tailcall
            
            x22_3 = *(x20 + 0xc)
            
            if (*(x20 + 0x40) != "tbl_player_pods" || *(x20 + 0x38) != x21_1
                    || *(x20 + 0x48) != x22_3 || *(x20 + 0x50) != 0)
                x23_5 = "tbl_player_pods"
                goto label_afce30
            
            if ((UI2Exists(zx.q(*(x20 + 0x70))) & 1) != 0)
                return UI2GetTransform(zx.q(*(x20 + 0x70))) __tailcall
            
            x23_5 = "tbl_player_pods"
            goto label_afce30
        case 0x19
            x22_3 = *(x20 + 0xc)
            int32_t x0_33
            
            if (*(x20 + 0x40) == "tbl_abilityTriggers" && *(x20 + 0x38) == x21_1
                    && *(x20 + 0x48) == x22_3 && *(x20 + 0x50) == 0)
                x0_33 = UI2Exists(zx.q(*(x20 + 0x70)))
            
            if (*(x20 + 0x40) == "tbl_abilityTriggers" && *(x20 + 0x38) == x21_1
                    && *(x20 + 0x48) == x22_3 && *(x20 + 0x50) == 0 && (x0_33 & 1) != 0)
                return UI2GetTransform(zx.q(*(x20 + 0x70))) __tailcall
            
            x23_5 = "tbl_abilityTriggers"
        label_afce30:
            x0_10 = UI2GetHandle(zx.q(x21_1), x23_5, x22_3)
            *(x20 + 0x70) = x0_10.d
            
            if (x0_10.d == 0)
                return UI2GetTransform(x0_10) __tailcall
            
        label_afce3c:
            *(x20 + 0x40) = x23_5
            *(x20 + 0x38) = x21_1
            *(x20 + 0x48) = x22_3
            *(x20 + 0x50) = 0
            return UI2GetTransform(x0_10) __tailcall
        case 0x1a
            return UI2GetTransform(UI2GetHandle(GameDlgMangerGetUI(0x3e8, 5, true), "tbl_names", 
                *(x20 + 0xc))) __tailcall
        case 0x1b
            if (arg2 != 0)
                *arg2 = true
            
            int32_t x0_24
            
            if (*(x20 + 0x40) == "tbl_zoom" && *(x20 + 0x38) == x21_1 && *(x20 + 0x48) == 0
                    && *(x20 + 0x50) == 0)
                x0_24 = UI2Exists(zx.q(*(x20 + 0x70)))
            
            uint64_t x0_25
            
            if (*(x20 + 0x40) != "tbl_zoom" || *(x20 + 0x38) != x21_1 || *(x20 + 0x48) != 0
                    || *(x20 + 0x50) != 0 || (x0_24 & 1) == 0)
                x0_25 = UI2GetHandle(zx.q(x21_1), "tbl_zoom", 0)
                *(x20 + 0x70) = x0_25.d
                
                if (x0_25.d != 0)
                    *(x20 + 0x40) = "tbl_zoom"
                    *(x20 + 0x38) = x21_1
                    *(x20 + 0x48) = 0
                    *(x20 + 0x50) = 0
            else
                x0_25 = zx.q(*(x20 + 0x70))
            
            UI2GetTransform(x0_25)
            float v2_1 = RectScreen()
            float v5_1 = *TI
            v11.d = *(TI + 4)
            float v1_1 = *(gDomClient + 0x1d008)
            v9.d = *(TI + 8)
            v10.d = *(TI + 0xc)
            v12.d = *(TI + 0x10)
            float v3_1 = fconvert.s(0.5f)
            float v4_1 = fconvert.s(1f)
            bool cond:2_1 = v1_1 <= 0f
            float v0_1 = *PI
            v14.d = v2_1 * v3_1
            v1_1 = v1_1 + v4_1
            
            if (cond:2_1)
                v2_1 = v1_1 * v3_1
                v1_1 = 0f
                
                if (not(v2_1 <= 0f))
                    v1_1 = v0_1 * v3_1
                    
                    if (not(v2_1 >= v4_1))
                        v3_1 = fconvert.s(3f)
                        v0_1 = v2_1 * v2_1 * (v3_1 - (v2_1 + v2_1))
                        v1_1 = v0_1 * v0_1 * (v3_1 - (v0_1 + v0_1)) * v1_1 + 0f
            else
                v2_1 = v1_1 * v3_1
                
                if (v2_1 <= 0f)
                    v1_1 = fneg(v0_1)
                else
                    v1_1 = 0f
                    
                    if (not(v2_1 >= v4_1))
                        v3_1 = fconvert.s(3f)
                        v1_1 = v2_1 * v2_1 * (v3_1 - (v2_1 + v2_1))
                        v1_1 = v1_1 * v1_1 * (v3_1 - (v1_1 + v1_1)) * (v0_1 + 0f) - v0_1
            
            v13.d = *(TI + 0x18)
            v8.d = *(TI + 0x1c)
            float var_d8_1 = *(TI + 0x14)
            int32_t var_c8_1 = v13.d
            float cosp
            float sinp
            result = sincosf(&sinp, &cosp, v1_1 * fconvert.s(0.5f))
            float v18_2 = v12.d f* v12.d
            float v19_2 = v11.d f* v11.d
            float v6_2 = v9.d f* v9.d
            float v21_2 = v11.d f* v9.d
            float v22_2 = v11.d f* v10.d
            float v26_2 = v9.d f* v10.d
            float v20_2 = v10.d f* v12.d
            float v23_2 = v9.d f* v12.d
            float v24_2 = v11.d f* v12.d
            float v25_2 = v19_2 + v18_2
            float v17_2 = v12.d f* fneg(v10.d)
            float v16_2 = v12.d f* fneg(v9.d)
            float v7_2 = v12.d f* fneg(v11.d)
            float cosp_1 = cosp
            float sinp_1 = sinp
            float v5_4 = v14.d f+ v14.d
            float v29_2 = v13.d f+ v13.d
            v18_2 = v18_2 - v19_2
            float v28_2 = v21_2 - v20_2
            float v30_2 = v22_2 + v23_2
            float v31_2 = v21_2 + v20_2
            int32_t var_d0_1 = v14.d
            v13.d = v26_2 - v24_2
            v15.d = v22_2 - v23_2
            v14.d = v26_2 + v24_2
            v23_2 = v25_2 - v6_2
            v20_2 = v21_2 - v17_2
            v24_2 = v21_2 + v17_2
            v17_2 = v22_2 + v16_2
            v25_2 = v22_2 - v16_2
            v19_2 = v26_2 - v7_2
            v22_2 = v26_2 + v7_2
            v7_2 = v8.d f+ v8.d
            float v27_2 = v6_2 + v18_2
            v26_2 = v18_2 - v6_2
            float v6_3 = v8.d
            v8.d = var_d8_1
            float var_cc_1 = v30_2 * v7_2
            v30_2 = entry_x8[4]
            float v4_4 = v10.d f* v10.d
            v21_2 = v8.d f+ v8.d
            v23_2 = v23_2 - v4_4
            v7_2 = v13.d f* v7_2
            v16_2 = v31_2 * v21_2
            v13.d = var_c8_1
            v31_2 = v23_2 f* v8.d
            v8.d = var_d0_1
            v18_2 = v28_2 * v29_2
            v28_2 = v15.d f* v21_2
            v21_2 = 0f
            v24_2 = v5_4 * v24_2
            v5_4 = v5_4 * v25_2
            v25_2 = v4_4 + v26_2
            v29_2 = v14.d f* v29_2
            v27_2 = v27_2 - v4_4
            float v3_5 = fconvert.s(1f) / v5_1
            v14.d = v25_2 * v6_3
            v28_2 = v28_2 + v29_2
            v20_2 = v20_2 * v21_2 + v8.d f* v23_2
            v23_2 = fneg(v3_5)
            v17_2 = v17_2 * v21_2 + v20_2
            v20_2 = (v5_4 + v22_2 * v21_2 + v25_2 * v21_2) * v23_2
            v13.d = v27_2 f* v13.d
            v22_2 = sinp_1 * *VY
            v26_2 = sinp_1 * *(VY + 4)
            v29_2 = sinp_1 * *(VY + 8)
            v19_2 = v19_2 * v21_2 + v24_2 + v27_2 * v21_2
            v6_3 = v16_2 f+ v13.d + v7_2
            v7_2 = v5_1 * (v14.d f+ v28_2)
            v21_2 = 0f
            v13.d = v9.d f* v29_2
            v17_2 = v17_2 * v23_2
            v19_2 = v19_2 * v23_2
            v14.d = v10.d f* v26_2
            v15.d = v5_1 * (v31_2 + v18_2 + var_cc_1)
            v5_4 = v7_2 + v21_2
            v21_2 = v5_1 * v6_3 + v21_2
            v6_3 = v12.d f* cosp_1 - v11.d f* v22_2 - v9.d f* v26_2 - v10.d f* v29_2
            v16_2 = v11.d f* cosp_1 + v12.d f* v22_2 f+ v13.d f- v14.d
            v7_2 = v10.d f* v22_2 + v9.d f* cosp_1 + v12.d f* v26_2 - v11.d f* v29_2
            v18_2 = v11.d f* v26_2 + v10.d f* cosp_1 + v12.d f* v29_2 - v9.d f* v22_2
            v22_2 = v6_3 * v6_3
            v23_2 = v16_2 * v16_2
            v24_2 = v16_2 * v7_2
            v25_2 = v6_3 * v18_2
            v26_2 = v6_3 * v7_2
            v27_2 = v16_2 * v18_2
            v28_2 = v7_2 * v18_2
            v29_2 = v6_3 * v16_2
            cosp_1 = v8.d f+ v15.d
            v13.d = v11.d f* v16_2
            v14.d = v12.d f* v16_2
            v15.d = v24_2 - v25_2
            v24_2 = v24_2 + v25_2
            v25_2 = v22_2 + v23_2
            v22_2 = v22_2 - v23_2
            v23_2 = v26_2 + v27_2
            v26_2 = v27_2 - v26_2
            v27_2 = v28_2 - v29_2
            v28_2 = v29_2 + v28_2
            v31_2 = v12.d f* v6_3 f+ v13.d
            v13.d = v12.d f* v7_2
            v29_2 = v14.d f- v11.d f* v6_3
            v14.d = v9.d f* v6_3
            v13.d = v13.d f- v14.d
            v14.d = v20_2 + v20_2
            v12.d = v12.d f* v18_2
            v23_2 = v14.d f* v23_2
            v27_2 = v14.d f* v27_2
            v14.d = v17_2 + v17_2
            v6_3 = v12.d f- v10.d f* v6_3
            v12.d = v19_2 + v19_2
            v24_2 = v14.d f* v24_2
            v26_2 = v14.d f* v26_2
            v14.d = v7_2 * v7_2
            v25_2 = v25_2 f- v14.d
            v15.d = v12.d f* v15.d
            v28_2 = v12.d f* v28_2
            v12.d = v14.d f+ v22_2
            v22_2 = v22_2 f- v14.d
            v14.d = v9.d f* v7_2
            v31_2 = v14.d f+ v31_2
            v14.d = v10.d f* v7_2
            v7_2 = v11.d f* v7_2
            v11.d = v11.d f* v18_2
            v29_2 = v29_2 f- v14.d
            v14.d = v9.d f* v16_2
            v11.d = v13.d f- v11.d
            v6_3 = v6_3 f- v14.d
            v14.d = *entry_x8
            v13.d = entry_x8[1]
            sinp_1 = entry_x8[2]
            v4_4 = entry_x8[3]
            v16_2 = v10.d f* v16_2
            v10.d = v10.d f* v18_2
            v9.d = v9.d f* v18_2
            v18_2 = v18_2 * v18_2
            v25_2 = v25_2 - v18_2
            v12.d = v12.d f- v18_2
            v26_2 = v26_2 + v28_2
            v18_2 = v18_2 + v22_2
            v22_2 = v10.d f+ v31_2
            v28_2 = v9.d f+ v29_2
            v16_2 = v16_2 f+ v11.d
            v6_3 = v7_2 + v6_3
            v7_2 = v17_2 * v25_2
            v17_2 = v19_2 f* v12.d
            v18_2 = v20_2 * v18_2
            v19_2 = v22_2 * v22_2
            v20_2 = v28_2 * v28_2
            v25_2 = v28_2 * v16_2
            v29_2 = v22_2 * v6_3
            v31_2 = v22_2 * v16_2
            v9.d = v28_2 * v6_3
            v10.d = v16_2 * v6_3
            v11.d = v22_2 * v28_2
            v12.d = v30_2 * v22_2
            v7_2 = v15.d f+ v7_2
            v15.d = v13.d f* v28_2
            v17_2 = v24_2 + v17_2
            v18_2 = v18_2 + v26_2
            v26_2 = v25_2 - v29_2
            v25_2 = v25_2 + v29_2
            v29_2 = v19_2 + v20_2
            v19_2 = v19_2 - v20_2
            v20_2 = v31_2 f+ v9.d
            v31_2 = v9.d f- v31_2
            v9.d = v10.d f- v11.d
            v10.d = v11.d f+ v10.d
            v11.d = v30_2 * v28_2
            v12.d = v12.d f- v15.d
            v15.d = sinp_1 * v22_2
            v24_2 = v11.d f+ v13.d f* v22_2
            v11.d = v30_2 * v16_2
            v8.d = v11.d f+ v15.d
            v22_2 = v4_4 * v22_2 + v30_2 * v6_3
            v15.d = entry_x8[6]
            v30_2 = entry_x8[7]
            v11.d = entry_x8[5]
            v17_2 = v27_2 + v17_2
            v7_2 = v23_2 + v7_2
            v27_2 = v30_2 + v30_2
            v20_2 = v27_2 * v20_2
            v27_2 = v27_2 f* v9.d
            v9.d = v11.d f+ v11.d
            v23_2 = v15.d f+ v15.d
            v25_2 = v9.d f* v25_2
            v31_2 = v9.d f* v31_2
            v9.d = v16_2 * v16_2
            v29_2 = v29_2 f- v9.d
            v26_2 = v23_2 * v26_2
            v23_2 = v23_2 f* v10.d
            v10.d = v9.d f+ v19_2
            v19_2 = v19_2 f- v9.d
            v9.d = sinp_1 * v16_2
            v9.d = v12.d f- v9.d
            v12.d = v4_4 * v16_2
            v24_2 = v12.d f+ v24_2
            v12.d = v13.d f* v6_3
            v16_2 = v13.d f* v16_2
            v13.d = v12.d f+ v8.d
            v8.d = v5_1 * v5_1
            v12.d = sinp_1 * v28_2
            v28_2 = v4_4 * v28_2
            v4_4 = v4_4 * v6_3
            sinp_1 = sinp_1 * v6_3
            v6_3 = v6_3 * v6_3
            v3_5 = v8.d f* v3_5
            v22_2 = v12.d f+ v22_2
            v12.d = v3_5 f* v14.d
            *entry_x8 = v12.d
            entry_x8[1] = v24_2 - sinp_1
            entry_x8[2] = v13.d f- v28_2
            entry_x8[3] = v22_2 - v16_2
            entry_x8[4] = v9.d f- v4_4
            entry_x8[5] = cosp_1 + v8.d f* v7_2 + v3_5 * (v20_2 + v26_2 + v11.d f* (v29_2 - v6_3))
            entry_x8[6] = v21_2 + v8.d f* v17_2 + v3_5 * (v27_2 + v25_2 + v15.d f* (v10.d f- v6_3))
            entry_x8[7] = v5_4 + v8.d f* v18_2 + v3_5 * (v30_2 * (v6_3 + v19_2) + v31_2 + v23_2)
            return result
        case 0x1c
            if (arg2 != 0)
                *arg2 = true
            
            return UI2GetTableTransform(zx.q(x21_1), "tbl_zoom_landscape", 0, nullptr) __tailcall
        case 0x1d
            if (arg2 != 0)
                *arg2 = true
            
            int32_t x8_32 = *(x20 + 0xc)
            int64_t x8_34 = muls.dp.d(x8_32 s>> 0x10, 0x2aaaaaab)
            x0_10 = UI2Selector::Lookup(x20 + 0x38, zx.q(x21_1), "tbl_zoom_extra", 
                zx.q(sx.d((x8_32 u>> 0x10).w - ((x8_34 u>> 0x21).w + (x8_34 u>> 0x3f).w) * 0xc)), 
                "tbl_assoc_pile")
            
            if (x0_10.d != 0)
                return UI2GetTransform(x0_10) __tailcall
            
            return UI2GetTableTransform(zx.q(x21_1), "tbl_zoom_extra", 0, nullptr) __tailcall
        case 0x1e
            if (arg2 != 0)
                *arg2 = true
            
            x22_3 = *(x20 + 0xc)
            int32_t x0_9
            
            if (*(x20 + 0x40) == "tbl_zoom_extra_expand" && *(x20 + 0x38) == x21_1
                    && *(x20 + 0x48) == x22_3 && *(x20 + 0x50) == 0)
                x0_9 = UI2Exists(zx.q(*(x20 + 0x70)))
            
            if (*(x20 + 0x40) == "tbl_zoom_extra_expand" && *(x20 + 0x38) == x21_1
                    && *(x20 + 0x48) == x22_3 && *(x20 + 0x50) == 0 && (x0_9 & 1) != 0)
                x0_10 = zx.q(*(x20 + 0x70))
                
                if (x0_10.d != 0)
                    return UI2GetTransform(x0_10) __tailcall
                
                return UI2GetTableTransform(zx.q(x21_1), "tbl_zoom_extra_expand", 0, nullptr)
                    __tailcall
            
            x23_5 = "tbl_zoom_extra_expand"
            x0_10 = UI2GetHandle(zx.q(x21_1), "tbl_zoom_extra_expand", x22_3)
            *(x20 + 0x70) = x0_10.d
            
            if (x0_10.d != 0)
                goto label_afce3c
            
            return UI2GetTableTransform(zx.q(x21_1), "tbl_zoom_extra_expand", 0, nullptr) __tailcall
        case 0x1f
            if (arg2 != 0)
                *arg2 = true
            
            int64_t x8_53 = sx.q(*(x20 + 0xc))
            int32_t x9_7 = ((x8_53 * -0x7df7df7d) u>> 0x20).d + x8_53.d
            x22_3 = x8_53.d - ((x9_7 s>> 5) + (x9_7 u>> 0x1f)) * 0x3f
            int32_t x0_27
            
            if (*(x20 + 0x40) == "tbl_podicons" && *(x20 + 0x38) == x21_1 && *(x20 + 0x48) == x22_3
                    && *(x20 + 0x50) == 0)
                x0_27 = UI2Exists(zx.q(*(x20 + 0x70)))
            
            if (*(x20 + 0x40) == "tbl_podicons" && *(x20 + 0x38) == x21_1 && *(x20 + 0x48) == x22_3
                    && *(x20 + 0x50) == 0 && (x0_27 & 1) != 0)
                x0_10 = zx.q(*(x20 + 0x70))
                
                if (x0_10.d != 0)
                    return UI2GetTransform(x0_10) __tailcall
                
                return UI2GetTableTransform(zx.q(x21_1), "tbl_podicons", 0, nullptr) __tailcall
            
            x23_5 = "tbl_podicons"
            x0_10 = UI2GetHandle(zx.q(x21_1), "tbl_podicons", x22_3)
            *(x20 + 0x70) = x0_10.d
            
            if (x0_10.d != 0)
                goto label_afce3c
            
            return UI2GetTableTransform(zx.q(x21_1), "tbl_podicons", 0, nullptr) __tailcall

if (x20 == 0)
    goto label_afd2d0

result = zx.q(*(x20 + 0x2148))

if (result.d == 0)
    x8_307 = x20 + 0x21ac
else
    result, v0, v1 = UI2GetTransform(UI2GetHandle(result, "tbl_assocPile", 0, "tbl_card", 0))
    x8_307 = x20 + 0x21ac
    *x8_307 = var_c0
    *(x8_307 + 0x10) = var_b0

goto label_afd2d4
