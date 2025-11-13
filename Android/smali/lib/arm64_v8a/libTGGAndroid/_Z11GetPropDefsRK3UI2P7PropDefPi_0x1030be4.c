// 函数: _Z11GetPropDefsRK3UI2P7PropDefPi
// 地址: 0x1030be4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8_1 = zx.q(*(arg1 + 0x167c) - 1)
uint64_t result
int64_t (* const x1)()
int64_t (* const x8_2)()
int128_t v0
int128_t v1
int128_t v2
int128_t v3
int128_t v4
int128_t v5
int128_t v6

if (x8_1.d u<= 0xa)
    switch (x8_1)
        case 0
            x1 = PROPS_IMAGE
        label_1030c44:
            v0, v1, v2, v3, v4, v5, v6 = memcpy(arg2, x1, 0x1e0)
            result = 0xf
            
            if (arg3 != 0)
                goto label_1030de8
            
            goto label_1030dec
        case 1
            x1 = PROPS_TABLE
            goto label_1030c44
        case 2
            v0, v1, v2, v3, v4, v5, v6 = memcpy(arg2, PROPS_TEXT, 0x260)
            result = 0x13
            
            if (arg3 == 0)
                goto label_1030dec
            
        label_1030de8:
            *arg3 = result.d
        label_1030dec:
            void* x8_3 = *(arg1 + 0x1620)
            int32_t x8_4
            int32_t x9_2
            
            if (x8_3 != 0)
                x9_2 = *(x8_3 + 0x10)
                
                x8_4 = x9_2 s< 3 ? x9_2 : 3
            
            if (x8_3 == 0 || x8_4 == 0)
                v0 = *(PROPS_ANIM + 0x10)
                void* x8_6 = arg2 + (zx.q(result.d) << 5)
                result = zx.q(result.d + 1)
                *x8_6 = *PROPS_ANIM
                *(x8_6 + 0x10) = v0
            else if (x9_2 s>= 1)
                int32_t x9_3 = 0
                
                do
                    v1 = *PROPS_ANIM
                    void* x11_3 = arg2 + (sx.q(result.d) << 5)
                    result = zx.q(result.d + 5)
                    *(x11_3 + 0x10) = *(PROPS_ANIM + 0x10)
                    v3 = *(PROPS_ANIM + 0x20)
                    v4 = *(PROPS_ANIM + 0x40)
                    v2 = *(PROPS_ANIM + 0x50)
                    *(x11_3 + 0x30) = *(PROPS_ANIM + 0x30)
                    *(x11_3 + 0x50) = v2
                    v0 = *(PROPS_ANIM + 0x80)
                    v2 = *(PROPS_ANIM + 0x90)
                    v5 = *(PROPS_ANIM + 0x60)
                    v6 = *(PROPS_ANIM + 0x70)
                    *(x11_3 + 0x1c) = x9_3
                    *(x11_3 + 0x3c) = x9_3
                    *(x11_3 + 0x5c) = x9_3
                    *(x11_3 + 0x80) = v0
                    *(x11_3 + 0x90) = v2
                    *(x11_3 + 0x60) = v5
                    *(x11_3 + 0x70) = v6
                    *(x11_3 + 0x7c) = x9_3
                    *(x11_3 + 0x9c) = x9_3
                    x9_3 += 1
                    *x11_3 = v1
                    *(x11_3 + 0x40) = v4
                    *(x11_3 + 0x20) = v3
                while (x9_3 s< x8_4)
            
            return result
        case 4
            v0, v1, v2, v3, v4, v5, v6 = memcpy(arg2, PROPS_BUTTON, 0x3a0)
            result = 0x1d
            
            if (arg3 != 0)
                goto label_1030de8
            
            goto label_1030dec
        case 5
            x8_2 = PROPS_GROUP
        label_1030cc8:
            v0 = *(x8_2 + 0x10)
            result = 7
            *arg2 = *x8_2
            *(arg2 + 0x10) = v0
            v0 = *(x8_2 + 0x50)
            v3 = *(x8_2 + 0x20)
            v2 = *(x8_2 + 0x30)
            *(arg2 + 0x40) = *(x8_2 + 0x40)
            *(arg2 + 0x50) = v0
            *(arg2 + 0x20) = v3
            *(arg2 + 0x30) = v2
            v0 = *(x8_2 + 0x90)
            v3 = *(x8_2 + 0x60)
            v2 = *(x8_2 + 0x70)
            *(arg2 + 0x80) = *(x8_2 + 0x80)
            *(arg2 + 0x90) = v0
            *(arg2 + 0x60) = v3
            *(arg2 + 0x70) = v2
            v0 = *(x8_2 + 0xd0)
            v3 = *(x8_2 + 0xa0)
            v2 = *(x8_2 + 0xb0)
            *(arg2 + 0xc0) = *(x8_2 + 0xc0)
            *(arg2 + 0xd0) = v0
            *(arg2 + 0xa0) = v3
            *(arg2 + 0xb0) = v2
            
            if (arg3 != 0)
                goto label_1030de8
            
            goto label_1030dec
        case 6
            v0, v1, v2, v3, v4, v5, v6 = memcpy(arg2, PROPS_MODEL, 0x140)
            result = 0xa
            
            if (arg3 != 0)
                goto label_1030de8
            
            goto label_1030dec
        case 7
            x8_2 = PROPS_FLANIM
            goto label_1030cc8
        case 8
            result = 8
            v0 = *(PROPS_PARTICLE + 0x30)
            v3 = *PROPS_PARTICLE
            v2 = *(PROPS_PARTICLE + 0x10)
            *(arg2 + 0x20) = *(PROPS_PARTICLE + 0x20)
            *(arg2 + 0x30) = v0
            *arg2 = v3
            *(arg2 + 0x10) = v2
            v0 = *(PROPS_PARTICLE + 0x70)
            v3 = *(PROPS_PARTICLE + 0x40)
            v2 = *(PROPS_PARTICLE + 0x50)
            *(arg2 + 0x60) = *(PROPS_PARTICLE + 0x60)
            *(arg2 + 0x70) = v0
            *(arg2 + 0x40) = v3
            *(arg2 + 0x50) = v2
            v0 = *(PROPS_PARTICLE + 0xb0)
            v3 = *(PROPS_PARTICLE + 0x80)
            v2 = *(PROPS_PARTICLE + 0x90)
            *(arg2 + 0xa0) = *(PROPS_PARTICLE + 0xa0)
            *(arg2 + 0xb0) = v0
            *(arg2 + 0x80) = v3
            *(arg2 + 0x90) = v2
            v0 = *(PROPS_PARTICLE + 0xf0)
            v3 = *(PROPS_PARTICLE + 0xc0)
            v2 = *(PROPS_PARTICLE + 0xd0)
            *(arg2 + 0xe0) = *(PROPS_PARTICLE + 0xe0)
            *(arg2 + 0xf0) = v0
            *(arg2 + 0xc0) = v3
            *(arg2 + 0xd0) = v2
            
            if (arg3 != 0)
                goto label_1030de8
            
            goto label_1030dec
        case 9
            v0, v1, v2, v3, v4, v5, v6 = memcpy(arg2, PROPS_SPINE, 0x140)
            XAsset* x0_5 = *(arg1 + 0x14b8)
            char* var_430[0x80]
            int32_t x0_6
            
            if (x0_5 != 0)
                x0_6, v0, v1, v2, v3, v4, v5, v6 = SpineGetSlotNames(x0_5, &var_430, 0x76)
            
            if (x0_5 == 0 || x0_6 s< 1)
                result = 0xa
                
                if (arg3 == 0)
                    goto label_1030dec
                
                goto label_1030de8
            
            int64_t i = 0
            void* __offset(PropDef, 0x15c) x10_2 = arg2 + 0x15c
            
            do
                *(x10_2 - 0x1c) = "Slot"
                int64_t x14_1 = var_430[i]
                *(x10_2 - 4) = 5
                *x10_2 = i.d
                i += 1
                *(x10_2 - 0x14) = 0x111
                *(x10_2 - 0xc) = x14_1
                x10_2 += 0x20
            while (zx.q(x0_6) != i)
            
            result = zx.q(i.d + 0xa)
            
            if (arg3 != 0)
                goto label_1030de8
            
            goto label_1030dec
        case 0xa
            v0, v1, v2, v3, v4, v5, v6 = memcpy(arg2, PROPS_QUADLOOP, 0x220)
            result = 0x11
            
            if (arg3 != 0)
                goto label_1030de8
            
            goto label_1030dec
pthread_kill(pthread_self(), 6)
UI2* x0_9
int64_t x1_7
int32_t x2
x0_9, x1_7, x2 = XNoReturn()
return AttribMapCoerceToString(x0_9, x1_7, x2) __tailcall
