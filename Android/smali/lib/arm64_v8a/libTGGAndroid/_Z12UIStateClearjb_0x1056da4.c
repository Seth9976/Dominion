// 函数: _Z12UIStateClearjb
// 地址: 0x1056da4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 == 0)
    return 

uint64_t x20_1 = zx.q(arg1) & 0xffff
int32_t x19_1 = arg2.d
int64_t x23_1 = *(gUISystem + 0x28)
UIState* x8_1 = x23_1 + mulu.dp.d(x20_1.d, 0x458)
int64_t* x21_1 = *(x8_1 + 8)
int64_t* x8_2 = *x21_1

if (x8_2 == 0)
    if (x21_1[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x21_1, false, true)
    x8_2 = *x21_1

int64_t* x8_4 = *x8_2

if (x8_4[1].d s< 1)
    return 

int64_t i = 0

do
    if (*(x23_1 + x20_1 * 0x458 + (i << 2) + 0x48) != 0)
        int64_t x8_13 = *(gUISystem + 0x28)
        
        if (*(x8_13 + x20_1 * 0x458 + (i << 2) + 0x48) != 0)
            int32_t* x0_4 = UIStateElementGet(x8_13 + x20_1 * 0x458, i.d, &data_793a18)
            
            if ((x19_1 & 1) == 0)
                *x0_4 += 1
            else
                x0_4[0x10] = 0
        
        arg1 = UIStateElementGet(x8_1, i.d, &data_793a18)
        int64_t x8_17 = *x8_4
        UIElement* x23_2 = x8_17 + i * 0x178
        
        if (*(x23_2 + 4) == 2)
            UIStateElement* x24_1 = arg1
            int64_t x8_19
            uint64_t x25_1
            
            if (*(arg1 + 0x148) s<= *arg1)
                uint64_t x9_7 = zx.q(*(x8_17 + i * 0x178 + 0xac))
                x8_19 = zx.q(*(x9_7 + 0xb0)) | (0xffffffff & x9_7) << 0x20
                x25_1 = x8_19 u>> 0x20
                
                if (x25_1.d s>= 1)
                label_1056f54:
                    
                    if (x8_19.d s>= 1)
                        int64_t x22_1 = 0
                        void* __offset(UIStateElement, 0xc8) x20_2 = x24_1 + 0xc8
                        
                        do
                            int64_t j = 0
                            
                            do
                                int64_t var_68 = x22_1 << 0x20 | j
                                
                                if (*(x20_2 + (j << 2)) != 0)
                                    UIStateClear(*(UIStateSubstate(x23_2, x24_1, &var_68) + 0x450), 
                                        x19_1.b & 1)
                                
                                j += 1
                            while ((x8_19 & 0xffffffff) != j)
                            
                            x22_1 += 1
                            x20_2 += (x8_19 & 0xffffffff) << 0x20 s>> 0x1e
                        while (x22_1 != x25_1)
            else
                XString::operator char const*()
                x8_19 = *(x24_1 + 0x154)
                x25_1 = x8_19 u>> 0x20
                
                if (x25_1.d s>= 1)
                    goto label_1056f54
    
    i += 1
while (i s< sx.q(x8_4[1].d))
