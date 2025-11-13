// 函数: sub_1100d2c
// 地址: 0x1100d2c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *(arg2 + 0x10)
void* x24 = arg1

if ((arg6 & 1) != 0)
    if (x24 == x8)
        goto label_1100d84
    
    if (strcmp(*(x24 + 8), *(x8 + 8)).d != 0)
        goto label_1100dd4
    
    goto label_1100d84

if (*(x24 + 8) == *(x8 + 8))
label_1100d84:
    int64_t x9_1 = *(arg2 + 8)
    *(arg2 + 0x4d) = 1
    
    if (x9_1 == arg4)
        int64_t x9_2 = *(arg2 + 0x20)
        *(arg2 + 0x4c) = 1
        
        if (x9_2 == 0)
            *(arg2 + 0x20) = arg3
            *(arg2 + 0x30) = arg5
            *(arg2 + 0x3c) = 1
            
            if (arg5 == 1)
            label_1100f54:
                int32_t x8_12 = *(arg2 + 0x48)
                
                if (x8_12 == 1)
                    *(arg2 + 0x4e) = x8_12.b
        else if (x9_2 == arg3)
            int32_t x8_11 = *(arg2 + 0x30)
            
            if (x8_11 == 2)
                x8_11 = arg5
                *(arg2 + 0x30) = arg5
            
            if (x8_11 == 1)
                goto label_1100f54
        else
            int32_t x8_1 = *(arg2 + 0x3c)
            *(arg2 + 0x4e) = 1
            *(arg2 + 0x3c) = x8_1 + 1
else
label_1100dd4:
    uint32_t x25_1 = zx.d(*(arg2 + 0x4c))
    uint32_t x28_1 = zx.d(*(arg2 + 0x4d))
    uint64_t x27_1 = zx.q(*(x24 + 0x14))
    *(arg2 + 0x4c) = 0
    int64_t x8_4 = *(x24 + 0x20)
    int64_t x9_4 = x8_4 s>> 8
    
    if ((x8_4.d & 1) != 0)
        x9_4 = *(*arg4 + x9_4)
    
    int64_t* x0_1 = *(x24 + 0x18)
    uint64_t x4
    
    if ((x8_4 & 2) == 0)
        x4 = 2
    else
        x4 = zx.q(arg5)
    
    (*(*x0_1 + 0x28))(x0_1, arg2, arg3, arg4 + x9_4, x4, zx.q(arg6) & 1)
    uint32_t x8_5 = zx.d(*(arg2 + 0x4c))
    uint32_t x9_6 = zx.d(*(arg2 + 0x4d))
    uint32_t x26_1 = x8_5 | x25_1
    uint32_t x25_2 = x9_6 | x28_1
    
    if (x27_1.d u>= 2)
        void* x27_2 = x24 + 0x28
        
        while (zx.d(*(arg2 + 0x4e)) == 0)
            if ((x8_5 & 0xff) != 0)
                if (*(arg2 + 0x30) == 1)
                    break
                
                if ((zx.d(*(x24 + 0x10)) & 2) == 0)
                    break
            else if ((x9_6 & 0xff) != 0 && (zx.d(*(x24 + 0x10)) & 1) == 0)
                break
            
            *(arg2 + 0x4c) = 0
            int64_t x8_9 = *(x27_2 + 8)
            int64_t x9_7 = x8_9 s>> 8
            
            if ((x8_9.d & 1) != 0)
                x9_7 = *(*arg4 + x9_7)
            
            int64_t* x0_2 = *x27_2
            x27_2 += 0x10
            uint64_t x4_1
            
            if ((x8_9 & 2) == 0)
                x4_1 = 2
            else
                x4_1 = zx.q(arg5)
            
            (*(*x0_2 + 0x28))(x0_2, arg2, arg3, arg4 + x9_7, x4_1, zx.q(arg6) & 1)
            x8_5 = zx.d(*(arg2 + 0x4c))
            x9_6 = zx.d(*(arg2 + 0x4d))
            x26_1 |= x8_5
            x25_2 |= x9_6
            
            if (x27_2 u>= x24 + (x27_1 << 4) + 0x18)
                break
    
    *(arg2 + 0x4c) = ((x26_1 & 0xff) != 0 ? 1 : 0).b
    *(arg2 + 0x4d) = ((x25_2 & 0xff) != 0 ? 1 : 0).b
