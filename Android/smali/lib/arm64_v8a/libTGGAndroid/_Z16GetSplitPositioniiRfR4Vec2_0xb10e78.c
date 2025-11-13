// 函数: _Z16GetSplitPositioniiRfR4Vec2
// 地址: 0xb10e78
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(arg2 - 1)

if (x8.d u> 3)
label_b10ef0:
    pthread_kill(pthread_self(), 6)
    arg1, arg3, arg4 = XNoReturn()
label_b10f04:
    *arg3 = 0.649999976f
    
    if (arg1 == 2)
        *arg4 = 0x429e000042a60000
        return 
    
    if (arg1 == 1)
        *arg4 = 0x431e000043260000
        return 
    
    if (arg1 == 0)
        *arg4 = 0x436d000043790000
        return 
else
    switch (x8)
        case 0
            *arg3 = 1f
        case 1
            *arg3 = 0.850000024f
            
            if (arg1 != 1)
                if (arg1 != 0)
                    goto label_b10ef0
                
                *arg4 = 0x429e000042a60000
                return 
        case 2
            *arg3 = 0.725000024f
            
            if (arg1 != 2)
                if (arg1 == 1)
                    *arg4 = 0x429e000042a60000
                    return 
                
                if (arg1 != 0)
                    goto label_b10ef0
                
                *arg4 = 0x431e000043260000
                return 
        case 3
            goto label_b10f04

*arg4 = *V20
