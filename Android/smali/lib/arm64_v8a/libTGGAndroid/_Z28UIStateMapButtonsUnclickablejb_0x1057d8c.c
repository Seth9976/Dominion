// 函数: _Z28UIStateMapButtonsUnclickablejb
// 地址: 0x1057d8c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

UIState* x8_1 = *(gUISystem + 0x28) + mulu.dp.d(arg1 & 0xffff, 0x458)
int64_t* x20 = *(x8_1 + 8)
int64_t* x8_2 = *x20
int64_t* x24

if (x8_2 == 0)
    if (x20[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x20, false, true)
    x24 = **x20
    
    if (x24[1].d s>= 1)
        goto label_1057e34
    
    return 

x24 = *x8_2

if (x24[1].d s< 1)
    return 

label_1057e34:
int64_t i = 0

do
    int64_t x19_1 = *x24
    UIElement* x22_1 = x19_1 + i * 0x178
    arg1 = UIStateElementGet(x8_1, i.d, *(x22_1 + 8))
    int32_t x8_9 = *(x22_1 + 4)
    UIStateElement* x23_1 = arg1
    
    if (x8_9 == 2)
        int64_t x8_13
        
        if (*(x23_1 + 0x148) s<= *x23_1)
            uint64_t x9_3 = zx.q(*(x19_1 + i * 0x178 + 0xac))
            x8_13 = zx.q(*(x9_3 + 0xb0)) | (0xffffffff & x9_3) << 0x20
            
            if (x8_13.d s>= 1)
            label_1057ee0:
                uint64_t k_2 = x8_13 u>> 0x20
                
                if (k_2.d s>= 1)
                    int64_t j = 0
                    
                    do
                        int64_t x26_1 = 0
                        uint64_t k_1 = k_2
                        uint64_t k
                        
                        do
                            int64_t var_68 = x26_1 | j
                            UIStateMapButtonsUnclickable(
                                *(UIStateSubstate(x22_1, x23_1, &var_68) + 0x450), arg2 & 1)
                            k = k_1
                            k_1 -= 1
                            x26_1 += 0x100000000
                        while (k != 1)
                        j += 1
                    while (j != (x8_13 & 0xffffffff))
        else
            XString::operator char const*()
            x8_13 = *(x23_1 + 0x154)
            
            if (x8_13.d s>= 1)
                goto label_1057ee0
    else if (x8_9 == 5)
        *(x23_1 + 0x2e) = arg2 & 1
    
    i += 1
while (i s< sx.q(x24[1].d))
