// 函数: sub_10bff9c
// 地址: 0x10bff9c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0 = *arg1
int32_t x21 = arg5

if (x0 == 0)
    goto label_10c0020

int32_t* x8_1 = x0[3]

if (x8_1 != x0[4])
    if (*x8_1 == 0xffffffff)
        goto label_10c001c
    
    goto label_10bfff4

int32_t x24

if ((*(*x0 + 0x48))() != 0xffffffff)
label_10bfff4:
    x24 = *arg1 == 0 ? 1 : 0
    
    if (arg2 != 0)
        goto label_10c0028
    
    goto label_10bfffc

label_10c001c:
*arg1 = 0
label_10c0020:
x24 = 1
int32_t x8_12
int32_t x24_2
int64_t* x23_1

if (arg2 == 0)
label_10bfffc:
    
    if ((x24 & 1) != 0)
        x24_2 = 0
        x8_12 = *arg3 | 6
    else
        x23_1 = nullptr
    label_10c0060:
        int64_t* x0_5 = *arg1
        int32_t* x8_10 = x0_5[3]
        int32_t x24_1
        
        if (x8_10 == x0_5[4])
            x24_1 = (*(*x0_5 + 0x48))()
        else
            x24_1 = *x8_10
        
        if (((*(*arg4 + 0x18))(arg4, 0x40, zx.q(x24_1)) & 1) != 0)
            char x0_10 = (*(*arg4 + 0x68))(arg4, zx.q(x24_1), 0)
            int64_t* x0_11 = *arg1
            uint32_t x24_3 = zx.d(x0_10)
            int64_t x9_4 = x0_11[3]
            
            if (x9_4 == x0_11[4])
                (*(*x0_11 + 0x50))()
            else
                x0_11[3] = x9_4 + 4
            
            int64_t* x0_12 = *arg1
            
            if (x0_12 != 0)
                goto label_10c012c
            
        label_10c0178:
            int32_t x25_1 = 1
            x24_2 = x24_3 - 0x30
            int32_t x8_32
            
            if (x23_1 != 0)
                while (true)
                    int32_t* x8_29 = x23_1[3]
                    int32_t x0_15
                    
                    if (x8_29 == x23_1[4])
                        x0_15 = (*(*x23_1 + 0x48))(x23_1)
                    else
                        x0_15 = *x8_29
                    
                    x8_32 = x0_15 == 0xffffffff ? 1 : 0
                    
                    if (x0_15 == 0xffffffff)
                        x23_1 = nullptr
                    
                label_10c01b4:
                    int64_t* x0_17 = *arg1
                    
                    if (x21 s< 2 || x25_1 == x8_32)
                        if (x0_17 == 0)
                            goto label_10c02a4
                        
                        int32_t* x8_44 = x0_17[3]
                        
                        if (x8_44 != x0_17[4])
                            if (*x8_44 == 0xffffffff)
                                goto label_10c02a0
                            
                            goto label_10c027c
                        
                        int32_t x20_1
                        
                        if ((*(*x0_17 + 0x48))() != 0xffffffff)
                        label_10c027c:
                            x20_1 = *arg1 == 0 ? 1 : 0
                            
                            if (x23_1 != 0)
                                goto label_10c02ac
                            
                            goto label_10c0284
                        
                    label_10c02a0:
                        *arg1 = 0
                    label_10c02a4:
                        x20_1 = 1
                        
                        if (x23_1 == 0)
                        label_10c0284:
                            
                            if ((x20_1 & 1) == 0)
                                return zx.q(x24_2)
                        else
                        label_10c02ac:
                            int32_t* x8_48 = x23_1[3]
                            int32_t x0_26
                            
                            if (x8_48 == x23_1[4])
                                x0_26 = (*(*x23_1 + 0x48))(x23_1)
                            else
                                x0_26 = *x8_48
                            
                            if (((x20_1 ^ (x0_26 == 0xffffffff ? 1 : 0)) & 1) != 0)
                                return zx.q(x24_2)
                        
                        x8_12 = *arg3 | 2
                        goto label_10c02e8
                    
                    int32_t* x8_34 = x0_17[3]
                    int32_t x25_2
                    
                    if (x8_34 == x0_17[4])
                        x25_2 = (*(*x0_17 + 0x48))()
                    else
                        x25_2 = *x8_34
                    
                    if (((*(*arg4 + 0x18))(arg4, 0x40, zx.q(x25_2)) & 1) == 0)
                        return zx.q(x24_2)
                    
                    x21 -= 1
                    char x0_22 = (*(*arg4 + 0x68))(arg4, zx.q(x25_2), 0)
                    int64_t* x0_23 = *arg1
                    x24_3 = x24_2 * 0xa + zx.d(x0_22)
                    int64_t x9_8 = x0_23[3]
                    
                    if (x9_8 != x0_23[4])
                        x0_23[3] = x9_8 + 4
                        x0_12 = *arg1
                        
                        if (x0_12 == 0)
                            goto label_10c0178
                    else
                        (*(*x0_23 + 0x50))()
                        x0_12 = *arg1
                        
                        if (x0_12 == 0)
                            goto label_10c0178
                    
                label_10c012c:
                    int32_t* x8_25 = x0_12[3]
                    
                    if (x8_25 == x0_12[4])
                        if ((*(*x0_12 + 0x48))() == 0xffffffff)
                            *arg1 = 0
                            goto label_10c0178
                    else if (*x8_25 == 0xffffffff)
                        *arg1 = 0
                        goto label_10c0178
                    
                    x25_1 = *arg1 == 0 ? 1 : 0
                    x24_2 = x24_3 - 0x30
                    
                    if (x23_1 == 0)
                        break
                    
                    continue
            
            x8_32 = 1
            goto label_10c01b4
        
        x24_2 = 0
        x8_12 = *arg3 | 4
else
label_10c0028:
    int32_t* x8_5 = arg2[3]
    int32_t x0_3
    
    if (x8_5 == arg2[4])
        x0_3 = (*(*arg2 + 0x48))(arg2)
    else
        x0_3 = *x8_5
    
    x23_1 = x0_3 == 0xffffffff ? nullptr : arg2
    
    if (((x24 ^ (x0_3 == 0xffffffff ? 1 : 0)) & 1) != 0)
        goto label_10c0060
    
    x24_2 = 0
    x8_12 = *arg3 | 6
label_10c02e8:
*arg3 = x8_12
return zx.q(x24_2)
