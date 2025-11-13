// 函数: _Z25AssetCatalogDisposeForAppv
// 地址: 0xc762cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x19 = *gpAssetAppData

if (x19 == 0)
    return 

void* x8_1 = *x19
int32_t x9_1 = 0

while (true)
    XString* i_3 = *(x8_1 + (zx.q(x9_1) << 3))
    
    if (i_3 != 0)
        XString* i
        
        do
            i = *(i_3 + 0x10)
            
            if (i == 0)
                int32_t x0_2 = XHashKey(i_3)
                int32_t x8_2 = x19[1].d
                int32_t x9_3 = (x8_2 & x0_2) + 1
                
                do
                    if (x9_3 u> x8_2)
                        i = nullptr
                        break
                    
                    i = *(*x19 + (zx.q(x9_3) << 3))
                    x9_3 += 1
                while (i == 0)
            
            AssetCatalogFreeAsset(*(i_3 + 8))
            x19 = *gpAssetAppData
            i_3 = i
        while (i != 0)
        x8_1 = *x19
        
        if (x8_1 == 0)
            break
    else
        x9_1 += 1
        
        if (x9_1 u<= x19[1].d)
            continue
    
    void* x20_1 = *x8_1
    uint64_t x22_1 = 0
    
    if (x20_1 == 0)
        goto label_c76398
    
    int32_t x8_3
    
    while (true)
        void* x23_1 = *(x20_1 + 0x10)
        XString::~XString()
        XPooledFree(x20_1, 0x18)
        x20_1 = x23_1
        
        if (x23_1 == 0)
            x8_1 = *x19
        label_c76398:
            *(x8_1 + (x22_1 << 3)) = 0
            x8_3 = x19[1].d
            
            if (x22_1.d + 1 u> x8_3)
                break
            
            x20_1 = *(*x19 + (zx.q(x22_1.d + 1) << 3))
            x22_1 = zx.q(x22_1.d + 1)
            
            if (x20_1 == 0)
                break
    
    void* x0_5 = *x19
    *(x19 + 0xc) = 0
    XPooledFree(x0_5, (x8_3 << 3) + 8)
    *x19 = 0
    x19 = *gpAssetAppData
    break

int64_t* i_2 = x19[3]
void* x8_6

if (i_2 != 0)
    int64_t* i_1
    
    do
        i_1 = *i_2
        XFree(i_2)
        i_2 = i_1
    while (i_1 != 0)
    int64_t* x8_5 = *gpAssetAppData
    *(x19 + 0x24) = 0
    x19[2] = 0
    x19[3] = 0
    x19 = x8_5
    
    if (x8_5 != 0)
        x8_6 = *x19
        
        if (x8_6 != 0)
            goto label_c76428
        
        XPooledFree(x19, 0x40)
        *gpAssetAppData = 0
    
    return 

*(x19 + 0x24) = 0
x19[2] = 0
x19[3] = 0
x8_6 = *x19

if (x8_6 == 0)
    XPooledFree(x19, 0x40)
    *gpAssetAppData = 0
    return 

label_c76428:
int32_t x22_2 = 0
void* x23_2 = *x8_6

if (x23_2 == 0)
    goto label_c76458

int32_t x8_7

while (true)
    void* x20_3 = x23_2
    x23_2 = *(x23_2 + 0x10)
    XString::~XString()
    XPooledFree(x20_3, 0x18)
    
    if (x23_2 == 0)
        x8_6 = *x19
    label_c76458:
        uint64_t x9_5 = zx.q(x22_2)
        *(x8_6 + (x9_5 << 3)) = 0
        x8_7 = x19[1].d
        x22_2 = x9_5.d + 1
        
        if (x22_2 u> x8_7)
            break
        
        x23_2 = *(*x19 + (zx.q(x22_2) << 3))
        
        if (x23_2 == 0)
            break

void* x0_8 = *x19
*(x19 + 0xc) = 0
XPooledFree(x0_8, (x8_7 << 3) + 8)
*x19 = 0
XPooledFree(*gpAssetAppData, 0x40)
*gpAssetAppData = 0
