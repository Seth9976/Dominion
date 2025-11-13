// 函数: sub_1100a58
// 地址: 0x1100a58
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = arg2[2]

if ((arg5 & 1) != 0)
    if (arg1 == x8)
        goto label_1100b88
    
    int64_t x24_1 = *(arg1 + 8)
    
    if (strcmp(x24_1, *(x8 + 8)).d == 0)
        goto label_1100b88
    
    void* x8_1 = *arg2
    
    if (arg1 == x8_1)
        goto label_1100ac8
    
    if (strcmp(x24_1, *(x8_1 + 8)).d != 0)
        jump(*(**(arg1 + 0x10) + 0x30))
    
    goto label_1100ac8

int64_t x9_1 = *(arg1 + 8)

if (x9_1 == *(x8 + 8))
label_1100b88:
    
    if (arg2[1] == arg3 && *(arg2 + 0x34) != 1)
        *(arg2 + 0x34) = arg4
    
    return 

if (x9_1 != *(*arg2 + 8))
    jump(*(**(arg1 + 0x10) + 0x30))

label_1100ac8:

if (arg2[4] != arg3 && arg2[5] != arg3)
    arg2[7].d = arg4
    
    if (*(arg2 + 0x44) == 4)
        goto label_1100bc0
    
    *(arg2 + 0x4c) = 0
    int64_t* x0_2 = *(arg1 + 0x10)
    (*(*x0_2 + 0x28))(x0_2, arg2, arg3, arg3, 1, zx.q(arg5) & 1)
    
    if (zx.d(*(arg2 + 0x4d)) == 0)
        *(arg2 + 0x44) = 4
    label_1100bc0:
        int32_t x9_2 = *(arg2 + 0x3c)
        int32_t x8_15 = arg2[8].d
        arg2[5] = arg3
        arg2[8].d = x8_15 + 1
        
        if (x9_2 == 1 && arg2[6].d == 2)
            *(arg2 + 0x4e) = 1
    else
        uint32_t x8_8 = zx.d(*(arg2 + 0x4c))
        *(arg2 + 0x44) = 3
        
        if (x8_8 == 0)
            goto label_1100bc0
else if (arg4 == 1)
    arg2[7].d = 1
