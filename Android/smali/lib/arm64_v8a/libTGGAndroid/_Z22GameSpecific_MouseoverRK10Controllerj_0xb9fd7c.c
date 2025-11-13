// 函数: _Z22GameSpecific_MouseoverRK10Controllerj
// 地址: 0xb9fd7c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 != 0)
    int32_t x8_1 = arg2 & 0xffff
    
    if (x8_1 u< *(gDomClient + 0x205e8))
        int64_t x21_1 = *(gDomClient + 0x205e0)
        
        if (*(x21_1 + mulu.dp.d(x8_1, 0x21d8) + 0x21d0) == arg2)
            uint64_t x22 = zx.q(x8_1)
            
            if (*(x21_1 + x22 * 0x21d8 + 0x2c) == 8)
                x22 = zx.q(*(x21_1 + x22 * 0x21d8 + 0x240))
            
            DomGfx* x19 = x21_1 + x22 * 0x21d8
            *(gDomClient + 0x1cffc) = *(x19 + 0x21d0)
            int32_t x8_6 = *(x19 + 0x2c)
            int32_t x8_8
            
            if (x8_6 == 0)
                arg1 = IsCardInActiveSet(x19, nullptr, false)
            label_b9fe64:
                x8_8 = 0
                
                if (*(x21_1 + x22 * 0x21d8 + 0x1f78) == 0 && (arg1.d & 1) != 0)
                    x8_8 = *(x19 + 0x21d0)
            else
                if (x8_6 == 3)
                    arg1 = IsPileInActiveSet(x19, nullptr)
                    goto label_b9fe64
                
                x8_8 = 0
            
            *(gDomClient + 0x1cff8) = x8_8
            return 

*(gDomClient + 0x1cff8) = 0
