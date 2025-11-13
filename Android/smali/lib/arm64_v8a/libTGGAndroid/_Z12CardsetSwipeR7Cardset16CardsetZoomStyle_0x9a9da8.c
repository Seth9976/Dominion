// 函数: _Z12CardsetSwipeR7Cardset16CardsetZoomStyle
// 地址: 0x9a9da8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x1

if (arg2 == 4)
    x1 = zx.q(*(arg1 + 0x1538))
    
    if (x1.d s>= 0xffffffff)
        do
            x1 = zx.q(x1.d + 1)
            
            if (x1.d s>= *(arg1 + 0x1520))
                goto label_9a9e24
        while (*(arg1 + (zx.q(x1.d) << 5) + 0x260) == 0)
        
        return CardsetZoom(arg1, x1) __tailcall
else
    if (arg2 != 2)
        pthread_kill(pthread_self(), 6)
        Cardset* x0_3
        int64_t x1_3
        x0_3, x1_3 = XNoReturn()
        return CardsetZoom(x0_3, x1_3) __tailcall
    
    x1 = zx.q(*(arg1 + 0x1538))
    
    if (*(arg1 + 0x1520) s>= x1.d)
        do
            int32_t temp0_1 = x1.d
            x1 = zx.q(x1.d - 1)
            
            if (temp0_1 s< 1)
                goto label_9a9e24
        while (*(arg1 + (zx.q(x1.d) << 5) + 0x260) == 0)
        
        return CardsetZoom(arg1, x1) __tailcall
label_9a9e24:
return CardsetZoom(arg1, 0xffffffff) __tailcall
