// 函数: _Z14BuyHasNoEffectRK7DomGame9PlayerWho6CardID
// 地址: 0x9f5ad4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomDefGet(arg1, zx.q(arg3))

if ((zx.d(*(x0 + 0xc9)) & 4) != 0)
    int32_t x8_1 = *(x0 + 0x720)
    
    if (x8_1 != 0)
        int64_t x23
        
        if (x8_1 == 0x1d)
            x23 = 0
        label_9f5b64:
            DomPushHintContext(arg1, zx.q(arg2), zx.q(arg3))
            int32_t x0_2 = (*(x0 + x23 * 0x18 + 0x728))()
            DomPopContext()
            return zx.q(x0_2 != 0 ? 1 : 0)
        
        int32_t x8_2 = *(x0 + 0x738)
        
        if (x8_2 != 0)
            if (x8_2 == 0x1d)
                x23 = 1
                goto label_9f5b64
            
            int32_t x8_3 = *(x0 + 0x750)
            
            if (x8_3 != 0)
                if (x8_3 == 0x1d)
                    x23 = 2
                    goto label_9f5b64
                
                if (*(x0 + 0x768) == 0x1d)
                    x23 = 3
                    goto label_9f5b64

return 0
