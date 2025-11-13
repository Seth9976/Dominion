// 函数: _Z17MageDomOK_OptionsR10DomOKStateP13DomOKTypeEnumiii
// 地址: 0xb22784
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x25

if (*(gDomClient + 0x207b0) != arg4)
    DomOKSet(arg1, arg1 + 0x30, arg1 + 0x60, 6, 0)
    
    if (*(gDomClient + 0x2056c) s< *(gDomClient + 0x207b0))
        *(arg1 + 0x30) = 3
    
    x25 = 1
    
    if (arg3 s>= 1)
        goto label_b2282c
else
    x25 = 0
    
    if (arg3 s>= 1)
    label_b2282c:
        int64_t i = 0
        x25 = zx.q(x25.d)
        int64_t result
        
        do
            int64_t x28_1 = zx.q(not.d(i.d) + arg3) << 0x20 s>> 0x1e
            DomOKTypeEnum* x0_1 = arg1 + (x25 << 2)
            result = DomOKSet(x0_1, x0_1 + 0x30, x0_1 + 0x60, zx.q(*(arg2 + x28_1)), arg5)
            uint64_t x8_4 = zx.q(*(gDomClient + 0x2056c))
            
            if (x8_4.d s>= 1)
                int32_t j = *(arg2 + x28_1)
                int64_t x11_1
                
                if (*(gDomClient + 0x1f8ec) != j)
                    int64_t x12_1 = 0
                    
                    do
                        x11_1 = x12_1
                        
                        if (x8_4 - 1 == x12_1)
                            break
                        
                        x12_1 = x11_1 + 1
                    while (*(gDomClient + (x11_1 << 2) + 0x1f8f0) != j)
                
                if (*(gDomClient + 0x1f8ec) == j || x11_1 + 1 u< x8_4)
                    *(x0_1 + 0x30) = 2
            
            i += 1
            x25 += 1
        while (i != zx.q(arg3))
        
        if (x25.d u> 0xb)
            return result

return memset(arg1 + (zx.q(x25.d) << 2) + 0x30, 0, (zx.q(0xb - x25.d) << 2) + 4)
