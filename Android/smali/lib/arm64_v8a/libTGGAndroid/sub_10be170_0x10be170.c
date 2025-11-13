// 函数: sub_10be170
// 地址: 0x10be170
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x24 = *arg1
int32_t x22 = arg5
int64_t* x20 = arg2

if (x24 == 0 || x24[3] != x24[4])
    goto label_10be1d0

if ((*(*x24 + 0x48))(x24) == 0xffffffff)
    x24 = nullptr
    *arg1 = 0
    
    if (x20 != 0)
        goto label_10be1dc
else
    x24 = *arg1
label_10be1d0:
    
    if (x20 != 0)
    label_10be1dc:
        int32_t x0_3
        
        if (x20[3] == x20[4])
            x0_3 = (*(*x20 + 0x48))(x20)
        
        if (x20[3] != x20[4] || x0_3 != 0xffffffff)
            if (x24 != 0)
                goto label_10be234
            
            goto label_10be214

int32_t x24_1

if (x24 == 0)
label_10be234:
    x24_1 = 0
    *arg3 |= 6
else
    x20 = nullptr
label_10be214:
    int64_t* x0_4 = *arg1
    char* x8_7 = x0_4[3]
    uint32_t x1
    
    if (x8_7 != x0_4[4])
        x1 = zx.d(*x8_7)
        
        if ((x1 & 0x80) == 0 && ((*(arg4[2] + ((zx.q(x1) & 0xff) << 3))).d & 0x40) != 0)
            goto label_10be2a4
        
        goto label_10be268
    
    x1 = (*(*x0_4 + 0x48))()
    
    if ((x1 & 0x80) != 0 || ((*(arg4[2] + ((zx.q(x1) & 0xff) << 3))).d & 0x40) == 0)
    label_10be268:
        x24_1 = 0
        *arg3 |= 4
    else
    label_10be2a4:
        char x0_8 = (*(*arg4 + 0x48))(arg4, x1, 0)
        int64_t* x0_9 = *arg1
        uint32_t x24_2 = zx.d(x0_8)
        int64_t x9_5 = x0_9[3]
        
        if (x9_5 == x0_9[4])
            (*(*x0_9 + 0x50))()
        else
            x0_9[3] = x9_5 + 1
        
        int64_t* x25_1 = *arg1
        
        if (x25_1 == 0)
            goto label_10be32c
        
        int64_t* x25_2
        
        while (true)
            if (x25_1[3] == x25_1[4])
                if ((*(*x25_1 + 0x48))(x25_1) == 0xffffffff)
                    x25_1 = nullptr
                    *arg1 = 0
                else
                    x25_1 = *arg1
            
        label_10be32c:
            x24_1 = x24_2 - 0x30
            
            if (x20 != 0 && x20[3] == x20[4] && (*(*x20 + 0x48))(x20) == 0xffffffff)
                x20 = nullptr
            
            x25_2 = *arg1
            
            if (x22 s< 2)
                break
            
            if ((x25_1 == 0 ? 1 : 0) == (x20 == 0 ? 1 : 0))
                break
            
            char* x8_30 = x25_2[3]
            uint32_t x1_1
            
            if (x8_30 == x25_2[4])
                x1_1 = (*(*x25_2 + 0x48))(x25_2)
                
                if ((x1_1 & 0x80) != 0)
                    return zx.q(x24_1)
            else
                x1_1 = zx.d(*x8_30)
                
                if ((x1_1 & 0x80) != 0)
                    return zx.q(x24_1)
            
            if (((*(arg4[2] + ((zx.q(x1_1) & 0xff) << 3))).d & 0x40) == 0)
                return zx.q(x24_1)
            
            x22 -= 1
            char x0_17 = (*(*arg4 + 0x48))(arg4, x1_1, 0)
            int64_t* x0_18 = *arg1
            x24_2 = x24_1 * 0xa + zx.d(x0_17)
            int64_t x9_11 = x0_18[3]
            
            if (x9_11 != x0_18[4])
                x0_18[3] = x9_11 + 1
                x25_1 = *arg1
                
                if (x25_1 == 0)
                    break
            else
                (*(*x0_18 + 0x50))()
                x25_1 = *arg1
                
                if (x25_1 == 0)
                    break
        
        if (x25_2 != 0 && x25_2[3] == x25_2[4])
            if ((*(*x25_2 + 0x48))(x25_2) == 0xffffffff)
                x25_2 = nullptr
                *arg1 = 0
            else
                x25_2 = *arg1
        
        int32_t x0_22
        
        if (x20 != 0 && x20[3] == x20[4])
            x0_22 = (*(*x20 + 0x48))(x20)
        
        if (x20 == 0 || (x20[3] == x20[4] && x0_22 == 0xffffffff))
            if (x25_2 == 0)
                *arg3 |= 2
        else if (x25_2 != 0)
            *arg3 |= 2

return zx.q(x24_1)
