// 函数: _ZN13MoveComponentI6DomLoc15DomMoveCallbackE10MoveUpdateEf
// 地址: 0xae99c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v8
int64_t var_30 = v8
MoveAnimData** entry_x0

if (entry_x0[0x3a4].d != 0)
    v8 = arg1.q
    
    if (entry_x0[0x59].d != 0xb)
        bool var_34 = false
        bool var_38
        CalcTransform<DomLoc>(&entry_x0[0x16], &var_38)
        bool var_3c
        CalcTransform<DomLoc>(&entry_x0[0x2b], &var_3c)
        bool var_40
        int128_t v0
        int128_t v1_1
        v0, v1_1 = CalcTransform<DomLoc>(&entry_x0[0x44], &var_40)
        bool x4_1
        uint64_t x8_7
        
        if ((zx.d(var_3c) | zx.d(var_38) | zx.d(var_40)) != 0)
            x4_1 = true
            x8_7 = zx.q(entry_x0[0x59].d)
            
            if (x8_7.d u> 0xa)
                goto label_ae9b5c
            
            goto label_ae9aa4
        
        x4_1 = *(entry_x0 + 0x2cc) & 1
        x8_7 = zx.q(entry_x0[0x59].d)
        int128_t var_c0
        int128_t var_b0_1
        Transform var_a0
        int128_t var_80
        void* x0_14
        int128_t v0_3
        int128_t v1_3
        
        if (x8_7.d u> 0xa)
        label_ae9b5c:
            pthread_kill(pthread_self(), 6)
            XNoReturn()
        label_ae9b78:
            v0_3, v1_3 = MoveToExp(&var_80, &var_a0, &var_34, v8.d)
        label_ae9c44:
            int128_t var_e0
            var_c0 = var_e0
            int128_t var_d0
            var_b0_1 = var_d0
            x0_14 = &entry_x0[0x5a]
            
            if (zx.d(var_34) == 0)
                goto label_ae9de4
            
            goto label_ae9c58
        
    label_ae9aa4:
        Transform var_60
        Transform* x0_4
        Transform* x1_4
        void* x2_1
        bool* x3_1
        
        switch (x8_7)
            case 0, 3, 6
                x2_1 = entry_x0 + 0x1d2c
                x0_4 = &var_60
                x1_4 = &var_a0
                x3_1 = &var_34
                v1_1.d = 0f
            label_ae9bfc:
                v0_3, v1_3 = MoveToSCurve(x0_4, x1_4, x2_1, x3_1, x4_1, v8.d, v1_1.d)
                goto label_ae9c44
            case 1
                goto label_ae9b78
            case 2
                v0_3, v1_3 = MoveToLinear(&var_80, &var_a0, &var_34, v8.d)
                goto label_ae9c44
            case 4
                v0_3, v1_3 = MoveToDrag(&var_80, &var_a0, &var_34, v8.d)
                goto label_ae9c44
            case 5
                v0_3, v1_3 = MoveToRoll(&var_80, &var_a0, &var_34, v8.d)
                goto label_ae9c44
            case 7
                x2_1 = entry_x0 + 0x1d2c
                x0_4 = &var_60
                x1_4 = &var_a0
                x3_1 = &var_34
                v1_1.d = float.s(0x3ecccccd)
                goto label_ae9bfc
            case 8
                v0_3, v1_3 = MoveToInstant(&var_80, &var_a0, &var_34, v8.d)
                goto label_ae9c44
            case 9
                v0_3, v1_3 = MoveToAnim(&var_60, &var_80, &var_a0, *entry_x0, &var_34, v8.d)
                goto label_ae9c44
            case 0xa
                var_c0 = var_80
                int128_t var_70
                var_b0_1 = var_70
                MoveToDampened(&var_c0, &entry_x0[0x40], &entry_x0[0x43], entry_x0 + 0x20c, 
                    &var_a0, &var_34, v8.d)
                float v0_12 = var_b0_1:4.d - var_70:4.d
                float v1_5 = var_b0_1:8.d - var_70:8.d
                float v2_3 = var_b0_1:0xc.d - var_70:0xc.d
                *(entry_x0 + 0x1d2c) = sqrt(v0_12 * v0_12 + v1_5 * v1_5 + v2_3 * v2_3)
                x0_14 = &entry_x0[0x5a]
                
                if (zx.d(var_34) != 0)
                label_ae9c58:
                    int128_t v0_10
                    int128_t v1_4
                    int128_t v2_2
                    int128_t v3_2
                    v0_10, v1_4, v2_2, v3_2 = TriggerMovementEnd(x0_14, 0)
                    *(entry_x0 + 0x1d2c) = 0
                    v0_10 = *(entry_x0 + 0x240)
                    v2_2 = *(entry_x0 + 0x220)
                    *(entry_x0 + 0x168) = *(entry_x0 + 0x230)
                    *(entry_x0 + 0x178) = v0_10
                    *(entry_x0 + 0x158) = v2_2
                    v0_10 = *(entry_x0 + 0x280)
                    v3_2 = *(entry_x0 + 0x250)
                    v2_2 = *(entry_x0 + 0x260)
                    *(entry_x0 + 0x1a8) = *(entry_x0 + 0x270)
                    *(entry_x0 + 0x1b8) = v0_10
                    *(entry_x0 + 0x188) = v3_2
                    *(entry_x0 + 0x198) = v2_2
                    v1_4 = *(entry_x0 + 0x2a0)
                    v0_10 = *(entry_x0 + 0x2b0)
                    v2_2 = *(entry_x0 + 0x290)
                    entry_x0[0x3f] = entry_x0[0x58]
                    *(entry_x0 + 0x1d8) = v1_4
                    *(entry_x0 + 0x1e8) = v0_10
                    *(entry_x0 + 0x1c8) = v2_2
                    v0_10 = *(entry_x0 + 0x280)
                    v3_2 = *(entry_x0 + 0x250)
                    v2_2 = *(entry_x0 + 0x260)
                    *(entry_x0 + 0x100) = *(entry_x0 + 0x270)
                    *(entry_x0 + 0x110) = v0_10
                    *(entry_x0 + 0xe0) = v3_2
                    *(entry_x0 + 0xf0) = v2_2
                    v0_10 = *(entry_x0 + 0x240)
                    v1_4 = *(entry_x0 + 0x220)
                    *(entry_x0 + 0xc0) = *(entry_x0 + 0x230)
                    *(entry_x0 + 0xd0) = v0_10
                    *(entry_x0 + 0xb0) = v1_4
                    v1_4 = *(entry_x0 + 0x2a0)
                    v0_10 = *(entry_x0 + 0x2b0)
                    v2_2 = *(entry_x0 + 0x290)
                    entry_x0[0x2a] = entry_x0[0x58]
                    *(entry_x0 + 0x130) = v1_4
                    *(entry_x0 + 0x140) = v0_10
                    *(entry_x0 + 0x120) = v2_2
                    v1_4 = *(entry_x0 + 0x1a8)
                    v3_2 = *(entry_x0 + 0x188)
                    v2_2 = *(entry_x0 + 0x198)
                    int64_t x8_15 = sx.q(entry_x0[0x3a4].d)
                    *(entry_x0 + 0x68) = *(entry_x0 + 0x1b8)
                    *(entry_x0 + 0x58) = v1_4
                    *(entry_x0 + 0x48) = v2_2
                    *(entry_x0 + 0x38) = v3_2
                    v2_2 = *(entry_x0 + 0x168)
                    v1_4 = *(entry_x0 + 0x158)
                    *(entry_x0 + 0x28) = *(entry_x0 + 0x178)
                    *(entry_x0 + 8) = v1_4
                    *(entry_x0 + 0x18) = v2_2
                    v0_10 = *(entry_x0 + 0x1c8)
                    v1_4 = *(entry_x0 + 0x1d8)
                    v2_2 = *(entry_x0 + 0x1e8)
                    entry_x0[0x3a4].d = (x8_15 - 1).d
                    entry_x0[0x15] = entry_x0[0x3f]
                    *(entry_x0 + 0x98) = v2_2
                    *(entry_x0 + 0x88) = v1_4
                    *(entry_x0 + 0x78) = v0_10
                    memmove(&entry_x0[0x44], &entry_x0[0x5f], (x8_15 - 1) * 0xd8)
                    
                    if (entry_x0[0x3a4].d s>= 1)
                        void* x8_18 = entry_x0[0x5a]
                        
                        if (*(x8_18 + 0x2c) == 0)
                            CardWhat(gDomClient + 0x20728, zx.q(*(x8_18 + 0x98)))
                else
                label_ae9de4:
                    int128_t v0_13
                    int128_t v1_6
                    int128_t v2_4
                    int128_t v3_4
                    v0_13, v1_6, v2_4, v3_4 = TriggerMovementUpdate(x0_14)
                    v3_4 = *(entry_x0 + 0x230)
                    *(entry_x0 + 0x158) = *(entry_x0 + 0x220)
                    *(entry_x0 + 0x168) = v3_4
                    v0_13 = *(entry_x0 + 0x260)
                    v2_4 = *(entry_x0 + 0x240)
                    *(entry_x0 + 0x188) = *(entry_x0 + 0x250)
                    *(entry_x0 + 0x198) = v0_13
                    *(entry_x0 + 0x178) = v2_4
                    v1_6 = *(entry_x0 + 0x280)
                    v0_13 = *(entry_x0 + 0x290)
                    v2_4 = *(entry_x0 + 0x270)
                    entry_x0[0x3b] = entry_x0[0x54]
                    *(entry_x0 + 0x1b8) = v1_6
                    *(entry_x0 + 0x1c8) = v0_13
                    *(entry_x0 + 0x1a8) = v2_4
                    entry_x0[0x2b].d = 0
                    *(entry_x0 + 0x1e0) = var_c0
                    *(entry_x0 + 0x1f0) = var_b0_1
        
        return zx.q(zx.d(var_34) != 0 ? 1 : 0)
    
    float v2 = v8.d f* float.s(0x447a0000)
    
    if (v2 < 0f)
        arg1 = fconvert.s(-0.5f)
    else
        arg1 = fconvert.s(0.5f)
    
    int32_t x8_3 = entry_x0[0x5e].d - vcvts_s32_f32(v2 + arg1)
    entry_x0[0x5e].d = x8_3
    
    if (x8_3 s<= 0)
        int128_t v0_1
        int128_t v1_2
        int128_t v2_1
        int128_t v3_1
        v0_1, v1_2, v2_1, v3_1 = TriggerMovementEnd(&entry_x0[0x5a], 0)
        v0_1 = *(entry_x0 + 0x178)
        v2_1 = *(entry_x0 + 0x158)
        *(entry_x0 + 0x230) = *(entry_x0 + 0x168)
        *(entry_x0 + 0x240) = v0_1
        *(entry_x0 + 0x220) = v2_1
        v0_1 = *(entry_x0 + 0x1b8)
        v3_1 = *(entry_x0 + 0x188)
        v2_1 = *(entry_x0 + 0x198)
        *(entry_x0 + 0x270) = *(entry_x0 + 0x1a8)
        *(entry_x0 + 0x280) = v0_1
        *(entry_x0 + 0x250) = v3_1
        *(entry_x0 + 0x260) = v2_1
        v1_2 = *(entry_x0 + 0x1d8)
        v0_1 = *(entry_x0 + 0x1e8)
        v2_1 = *(entry_x0 + 0x1c8)
        entry_x0[0x58] = entry_x0[0x3f]
        *(entry_x0 + 0x2a0) = v1_2
        *(entry_x0 + 0x2b0) = v0_1
        *(entry_x0 + 0x290) = v2_1
        int64_t x8_10 = sx.q(entry_x0[0x3a4].d) - 1
        entry_x0[0x3a4].d = x8_10.d
        memmove(&entry_x0[0x44], &entry_x0[0x5f], x8_10 * 0xd8)
        return 1

return 0
