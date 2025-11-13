// 函数: _Z30AssetCatalogGetAllAssetsOfType9AssetTypeR5XListIP6XAssetE
// 地址: 0xc774f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg1.d
int32_t i = 0
int64_t* x23 = *gpAssetAppData

do
    XString* x21_1 = *(*x23 + (zx.q(i) << 3))
    
    if (x21_1 != 0)
        while (true)
            XString* x24_1 = *(x21_1 + 0x10)
            void* x21_2
            
            if (x24_1 != 0)
            label_c7758c:
                x21_2 = *(x21_1 + 8)
                
                if (*(x21_2 + 0xc) != 0)
                label_c7759c:
                    
                    if (*(x21_2 + 8) == x20)
                        arg1 = XPooledCalloc(0x18)
                        *arg1 = x21_2
                        *(arg1 + 8) = 0
                        *(arg1 + 0x10) = *(arg2 + 8)
                        void* x8_6 = *(arg2 + 8)
                        XList<XAsset*>& x8_7
                        
                        if (x8_6 == 0)
                            x8_7 = arg2
                        else
                            x8_7 = x8_6 + 8
                        
                        *x8_7 = arg1
                        int32_t x8_8 = *(arg2 + 0x10)
                        *(arg2 + 8) = arg1
                        *(arg2 + 0x10) = x8_8 + 1
            else
                arg1 = XHashKey(x21_1)
                int32_t x8_2 = x23[1].d
                int32_t x9_1 = (x8_2 & arg1.d) + 1
                
                while (x9_1 u<= x8_2)
                    x24_1 = *(*x23 + (zx.q(x9_1) << 3))
                    x9_1 += 1
                    
                    if (x24_1 != 0)
                        goto label_c7758c
                
                x24_1 = nullptr
                x21_2 = *(x21_1 + 8)
                
                if (*(x21_2 + 0xc) != 0)
                    goto label_c7759c
            
            if (x24_1 == 0)
                break
            
            x23 = *gpAssetAppData
            x21_1 = x24_1
        
        break
    
    i += 1
while (i u<= x23[1].d)
