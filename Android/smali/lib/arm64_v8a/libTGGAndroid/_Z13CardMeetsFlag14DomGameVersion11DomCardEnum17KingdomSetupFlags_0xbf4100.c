// 函数: _Z13CardMeetsFlag14DomGameVersion11DomCardEnum17KingdomSetupFlags
// 地址: 0xbf4100
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(arg3 - 1)

if (x8.d u<= 0x3f)
    int32_t x20_1 = arg2
    int32_t x19_1 = arg1
    
    switch (x8)
        case 0
            int32_t x8_2 = (x20_1 + (x19_1 << 0x10)) s% 0x3e5
            int32_t* x9_4 = *(&data_1838a20 + (sx.q(x8_2) << 3))
            void* x0_3
            
            if (x9_4 != 0)
                while (*x9_4 != x20_1 || x9_4[1] != x19_1)
                    x9_4 = *(x9_4 + 0x10)
                    
                    if (x9_4 == 0)
                        goto label_bf417c
                
                x0_3 = *(x9_4 + 8)
            else
            label_bf417c:
                DomDefGetSlow(zx.q(x20_1), zx.q(x19_1))
                int32_t* x0_1 = malloc(0x18)
                int64_t x8_3 = sx.q(x8_2) << 3
                int64_t x9_5 = *(&data_1838a20 + x8_3)
                *x0_1 = x20_1
                x0_1[1] = x19_1
                *(&data_1838a20 + x8_3) = x0_1
                *(x0_1 + 0x10) = x9_5
                x0_3 = DomDefGetSlow(zx.q(x20_1), zx.q(x19_1))
                *(x0_1 + 8) = x0_3
            
            return zx.q(zx.d(*(x0_3 + 0xc8)) u>> 5) & 1
        case 1
            int32_t x8_6 = (x20_1 + (x19_1 << 0x10)) s% 0x3e5
            int32_t* x9_10 = *(&data_1838a20 + (sx.q(x8_6) << 3))
            void* x0_8
            
            if (x9_10 != 0)
                while (*x9_10 != x20_1 || x9_10[1] != x19_1)
                    x9_10 = *(x9_10 + 0x10)
                    
                    if (x9_10 == 0)
                        goto label_bf4234
                
                x0_8 = *(x9_10 + 8)
            else
            label_bf4234:
                DomDefGetSlow(zx.q(x20_1), zx.q(x19_1))
                int32_t* x0_6 = malloc(0x18)
                int64_t x8_7 = sx.q(x8_6) << 3
                int64_t x9_11 = *(&data_1838a20 + x8_7)
                *x0_6 = x20_1
                x0_6[1] = x19_1
                *(&data_1838a20 + x8_7) = x0_6
                *(x0_6 + 0x10) = x9_11
                x0_8 = DomDefGetSlow(zx.q(x20_1), zx.q(x19_1))
                *(x0_6 + 8) = x0_8
            
            return zx.q((zx.d(*(x0_8 + 0xc8)) & 0x20) == 0 ? 1 : 0)
        case 3
            int32_t x8_10 = (x20_1 + (x19_1 << 0x10)) s% 0x3e5
            int32_t* x9_16 = *(&data_1838a20 + (sx.q(x8_10) << 3))
            int64_t x8_12
            
            if (x9_16 != 0)
                while (*x9_16 != x20_1 || x9_16[1] != x19_1)
                    x9_16 = *(x9_16 + 0x10)
                    
                    if (x9_16 == 0)
                        goto label_bf42f0
                
                x8_12 = *(*(x9_16 + 8) + 0x18)
                
                if (x8_12 != 0x100000000)
                    goto label_bf437c
            else
            label_bf42f0:
                DomDefGetSlow(zx.q(x20_1), zx.q(x19_1))
                int32_t* x0_11 = malloc(0x18)
                int64_t x8_11 = sx.q(x8_10) << 3
                int64_t x9_17 = *(&data_1838a20 + x8_11)
                *x0_11 = x20_1
                x0_11[1] = x19_1
                *(&data_1838a20 + x8_11) = x0_11
                *(x0_11 + 0x10) = x9_17
                void* x0_13 = DomDefGetSlow(zx.q(x20_1), zx.q(x19_1))
                *(x0_11 + 8) = x0_13
                x8_12 = *(x0_13 + 0x18)
                
                if (x8_12 != 0x100000000)
                label_bf437c:
                    
                    if ((x8_12 & 0x8000000200000000) == 0x200000000)
                        return 1
            return CardIsAttackReaction(zx.q(x19_1), zx.q(x20_1)) __tailcall
        case 7
            int32_t x8_15 = (x20_1 + (x19_1 << 0x10)) s% 0x3e5
            int32_t* x9_22 = *(&data_1838a20 + (sx.q(x8_15) << 3))
            void* x0_19
            
            if (x9_22 != 0)
                while (*x9_22 != x20_1 || x9_22[1] != x19_1)
                    x9_22 = *(x9_22 + 0x10)
                    
                    if (x9_22 == 0)
                        goto label_bf43dc
                
                x0_19 = *(x9_22 + 8)
            else
            label_bf43dc:
                DomDefGetSlow(zx.q(x20_1), zx.q(x19_1))
                int32_t* x0_17 = malloc(0x18)
                int64_t x8_16 = sx.q(x8_15) << 3
                int64_t x9_23 = *(&data_1838a20 + x8_16)
                *x0_17 = x20_1
                x0_17[1] = x19_1
                *(&data_1838a20 + x8_16) = x0_17
                *(x0_17 + 0x10) = x9_23
                x0_19 = DomDefGetSlow(zx.q(x20_1), zx.q(x19_1))
                *(x0_17 + 8) = x0_19
            
            int64_t x8_17 = *(x0_19 + 0x18)
            
            if (x8_17 != 0x100000000 && (x8_17 & 0xffffffff80000000) == 0)
                return x8_17 u>> 2 & 1
            
            return 0
        case 0xf
            int32_t x8_19 = (x20_1 + (x19_1 << 0x10)) s% 0x3e5
            int32_t* x9_28 = *(&data_1838a20 + (sx.q(x8_19) << 3))
            void* x0_24
            
            if (x9_28 != 0)
                while (*x9_28 != x20_1 || x9_28[1] != x19_1)
                    x9_28 = *(x9_28 + 0x10)
                    
                    if (x9_28 == 0)
                        goto label_bf44a8
                
                x0_24 = *(x9_28 + 8)
            else
            label_bf44a8:
                DomDefGetSlow(zx.q(x20_1), zx.q(x19_1))
                int32_t* x0_22 = malloc(0x18)
                int64_t x8_20 = sx.q(x8_19) << 3
                int64_t x9_29 = *(&data_1838a20 + x8_20)
                *x0_22 = x20_1
                x0_22[1] = x19_1
                *(&data_1838a20 + x8_20) = x0_22
                *(x0_22 + 0x10) = x9_29
                x0_24 = DomDefGetSlow(zx.q(x20_1), zx.q(x19_1))
                *(x0_22 + 8) = x0_24
            
            int64_t x8_21 = *(x0_24 + 0x18)
            
            if (x8_21 != 0x100000000 && (x8_21 & 0xffffffff80000000) == 0)
                return x8_21 u>> 4 & 1
            
            return 0
        case 0x1f
            int32_t x8_23 = (x20_1 + (x19_1 << 0x10)) s% 0x3e5
            int32_t* x9_34 = *(&data_1838a20 + (sx.q(x8_23) << 3))
            void* x0_29
            
            if (x9_34 != 0)
                while (*x9_34 != x20_1 || x9_34[1] != x19_1)
                    x9_34 = *(x9_34 + 0x10)
                    
                    if (x9_34 == 0)
                        goto label_bf4574
                
                x0_29 = *(x9_34 + 8)
            else
            label_bf4574:
                DomDefGetSlow(zx.q(x20_1), zx.q(x19_1))
                int32_t* x0_27 = malloc(0x18)
                int64_t x8_24 = sx.q(x8_23) << 3
                int64_t x9_35 = *(&data_1838a20 + x8_24)
                *x0_27 = x20_1
                x0_27[1] = x19_1
                *(&data_1838a20 + x8_24) = x0_27
                *(x0_27 + 0x10) = x9_35
                x0_29 = DomDefGetSlow(zx.q(x20_1), zx.q(x19_1))
                *(x0_27 + 8) = x0_29
            
            int64_t x8_25 = *(x0_29 + 0x18)
            
            if (x8_25 != 0x100000000 && (x8_25 & 0xffffffff80000000) == 0)
                return x8_25 u>> 5 & 1
            
            return 0
        case 0x3f
            int32_t x8_27 = (x20_1 + (x19_1 << 0x10)) s% 0x3e5
            int32_t* x9_40 = *(&data_1838a20 + (sx.q(x8_27) << 3))
            void* x0_34
            
            if (x9_40 != 0)
                while (*x9_40 != x20_1 || x9_40[1] != x19_1)
                    x9_40 = *(x9_40 + 0x10)
                    
                    if (x9_40 == 0)
                        goto label_bf4640
                
                x0_34 = *(x9_40 + 8)
            else
            label_bf4640:
                DomDefGetSlow(zx.q(x20_1), zx.q(x19_1))
                int32_t* x0_32 = malloc(0x18)
                int64_t x8_28 = sx.q(x8_27) << 3
                int64_t x9_41 = *(&data_1838a20 + x8_28)
                *x0_32 = x20_1
                x0_32[1] = x19_1
                *(&data_1838a20 + x8_28) = x0_32
                *(x0_32 + 0x10) = x9_41
                x0_34 = DomDefGetSlow(zx.q(x20_1), zx.q(x19_1))
                *(x0_32 + 8) = x0_34
            
            int64_t x8_29 = *(x0_34 + 0x18)
            
            if (x8_29 != 0x100000000 && (x8_29 & 0xffffffff80000000) == 0)
                return x8_29 u>> 0xd & 1
            
            return 0

pthread_kill(pthread_self(), 6)
uint64_t x0_39
int64_t x1_16
int64_t x2_1
x0_39, x1_16, x2_1 = XNoReturn()
return PregameCardIs(x0_39, x1_16, x2_1) __tailcall
