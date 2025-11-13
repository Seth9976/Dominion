// 函数: _Z12HasExtraPileR7DomGame11DomCardEnumPS1_Rib
// 地址: 0xbbc4f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x23 = *(arg1 + 0xd50)
int32_t x8_4 = (arg2 + (x23 << 0x10)) s% 0x3e5
int32_t* x9_1 = *(&data_1838a20 + (sx.q(x8_4) << 3))
int32_t x21 = arg5.d
int32_t x22 = arg2
void* x0_3
int32_t x8_6

if (x9_1 != 0)
    while (*x9_1 != x22 || x9_1[1] != x23)
        x9_1 = *(x9_1 + 0x10)
        
        if (x9_1 == 0)
            goto label_bbc55c
    
    x0_3 = *(x9_1 + 8)
    *arg4 = 0
    x8_6 = *(x0_3 + 0xe0)
    
    if ((x21 & 1) != 0)
        goto label_bbc59c
    
    goto label_bbc710

label_bbc55c:
DomDefGetSlow(zx.q(x22), zx.q(x23))
int32_t* x0_1 = malloc(0x18)
int64_t x8_5 = sx.q(x8_4) << 3
int64_t x9_2 = *(&data_1838a20 + x8_5)
*x0_1 = x22
x0_1[1] = x23
*(&data_1838a20 + x8_5) = x0_1
*(x0_1 + 0x10) = x9_2
x0_3 = DomDefGetSlow(zx.q(x22), zx.q(x23))
*(x0_1 + 8) = x0_3
*arg4 = 0
x8_6 = *(x0_3 + 0xe0)

if ((x21 & 1) == 0)
label_bbc710:
    
    if (x8_6 != 0)
        if (x8_6 == 0xc)
            int32_t x8_29 = *(x0_3 + 0xf8)
            *arg4 = 1
            *arg3 = x8_29
        
        int32_t x8_30 = *(x0_3 + 0x1a0)
        int32_t x8_31
        
        if (x8_30 == 0xc)
            int64_t x8_32 = sx.q(*arg4)
            int32_t x9_9 = *(x0_3 + 0x1b8)
            *arg4 = x8_32.d + 1
            *(arg3 + (x8_32 << 2)) = x9_9
            x8_31 = *(x0_3 + 0x260)
            
            if (x8_31 != 0)
            label_bbc768:
                
                if (x8_31 == 0xc)
                    int64_t x8_33 = sx.q(*arg4)
                    int32_t x9_10 = *(x0_3 + 0x278)
                    *arg4 = x8_33.d + 1
                    *(arg3 + (x8_33 << 2)) = x9_10
                
                int32_t x8_34 = *(x0_3 + 0x320)
                
                if (x8_34 != 0)
                    if (x8_34 == 0xc)
                        int64_t x8_35 = sx.q(*arg4)
                        int32_t x9_11 = *(x0_3 + 0x338)
                        *arg4 = x8_35.d + 1
                        *(arg3 + (x8_35 << 2)) = x9_11
                    
                    int32_t x8_36 = *(x0_3 + 0x3e0)
                    
                    if (x8_36 != 0)
                        if (x8_36 == 0xc)
                            int64_t x8_37 = sx.q(*arg4)
                            int32_t x9_12 = *(x0_3 + 0x3f8)
                            *arg4 = x8_37.d + 1
                            *(arg3 + (x8_37 << 2)) = x9_12
                        
                        int32_t x8_38 = *(x0_3 + 0x4a0)
                        
                        if (x8_38 != 0)
                            if (x8_38 == 0xc)
                                int64_t x8_39 = sx.q(*arg4)
                                int32_t x9_13 = *(x0_3 + 0x4b8)
                                *arg4 = x8_39.d + 1
                                *(arg3 + (x8_39 << 2)) = x9_13
                            
                            int32_t x8_40 = *(x0_3 + 0x560)
                            
                            if (x8_40 != 0)
                                if (x8_40 == 0xc)
                                    int64_t x8_41 = sx.q(*arg4)
                                    int32_t x9_14 = *(x0_3 + 0x578)
                                    *arg4 = x8_41.d + 1
                                    *(arg3 + (x8_41 << 2)) = x9_14
                                
                                if (*(x0_3 + 0x620) == 0xc)
                                label_bbc81c:
                                    int64_t x8_43 = sx.q(*arg4)
                                    int32_t x9_15 = *(x0_3 + 0x638)
                                    *arg4 = x8_43.d + 1
                                    *(arg3 + (x8_43 << 2)) = x9_15
        else if (x8_30 != 0)
            x8_31 = *(x0_3 + 0x260)
            
            if (x8_31 != 0)
                goto label_bbc768
else
label_bbc59c:
    
    if (x8_6 != 0)
        if (x8_6 == 0xc && (zx.d(*(x0_3 + 0x194)) & 0x40) == 0)
            int32_t x8_8 = *(x0_3 + 0xf8)
            *arg4 = 1
            *arg3 = x8_8
        
        int32_t x8_9 = *(x0_3 + 0x1a0)
        
        if (x8_9 != 0)
            if (x8_9 == 0xc && (zx.d(*(x0_3 + 0x254)) & 0x40) == 0)
                int64_t x8_11 = sx.q(*arg4)
                int32_t x9_3 = *(x0_3 + 0x1b8)
                *arg4 = x8_11.d + 1
                *(arg3 + (x8_11 << 2)) = x9_3
            
            int32_t x8_12 = *(x0_3 + 0x260)
            
            if (x8_12 != 0)
                if (x8_12 == 0xc && (zx.d(*(x0_3 + 0x314)) & 0x40) == 0)
                    int64_t x8_14 = sx.q(*arg4)
                    int32_t x9_4 = *(x0_3 + 0x278)
                    *arg4 = x8_14.d + 1
                    *(arg3 + (x8_14 << 2)) = x9_4
                
                int32_t x8_15 = *(x0_3 + 0x320)
                
                if (x8_15 != 0)
                    if (x8_15 == 0xc && (zx.d(*(x0_3 + 0x3d4)) & 0x40) == 0)
                        int64_t x8_17 = sx.q(*arg4)
                        int32_t x9_5 = *(x0_3 + 0x338)
                        *arg4 = x8_17.d + 1
                        *(arg3 + (x8_17 << 2)) = x9_5
                    
                    int32_t x8_18 = *(x0_3 + 0x3e0)
                    
                    if (x8_18 != 0)
                        if (x8_18 == 0xc && (zx.d(*(x0_3 + 0x494)) & 0x40) == 0)
                            int64_t x8_20 = sx.q(*arg4)
                            int32_t x9_6 = *(x0_3 + 0x3f8)
                            *arg4 = x8_20.d + 1
                            *(arg3 + (x8_20 << 2)) = x9_6
                        
                        int32_t x8_21 = *(x0_3 + 0x4a0)
                        
                        if (x8_21 != 0)
                            if (x8_21 == 0xc && (zx.d(*(x0_3 + 0x554)) & 0x40) == 0)
                                int64_t x8_23 = sx.q(*arg4)
                                int32_t x9_7 = *(x0_3 + 0x4b8)
                                *arg4 = x8_23.d + 1
                                *(arg3 + (x8_23 << 2)) = x9_7
                            
                            int32_t x8_24 = *(x0_3 + 0x560)
                            
                            if (x8_24 != 0)
                                if (x8_24 == 0xc && (zx.d(*(x0_3 + 0x614)) & 0x40) == 0)
                                    int64_t x8_26 = sx.q(*arg4)
                                    int32_t x9_8 = *(x0_3 + 0x578)
                                    *arg4 = x8_26.d + 1
                                    *(arg3 + (x8_26 << 2)) = x9_8
                                
                                if (*(x0_3 + 0x620) == 0xc && (zx.d(*(x0_3 + 0x6d4)) & 0x40) == 0)
                                    goto label_bbc81c

return zx.q(*arg4 s> 0 ? 1 : 0)
