// 函数: _Z21AssetCatalogFreeAssetP6XAsset
// 地址: 0xc76020
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*arg1 != 0)
    DefinitionPurgeAsset(arg1)
    *arg1 = 0

int64_t* x23 = *gpAssetAppData
int32_t x0_2 = XHashKey(arg1 + 0x28)
uint64_t x24 = zx.q(x23[1].d) & zx.q(x0_2)
void* x21 = *(*x23 + (zx.q(x24.d) << 3))

if (x21 != 0)
    if ((XString::operator!=(arg1 + 0x28) & 1) == 0)
        *(*x23 + (x24 << 3)) = *(x21 + 0x10)
    else
        void* x24_1
        int32_t x0_6
        
        do
            x24_1 = x21
            x21 = *(x21 + 0x10)
            
            if (x21 == 0)
                goto label_c760d8
            
            x0_6 = XString::operator!=(arg1 + 0x28)
        while ((x0_6 & 1) != 0)
        *(x24_1 + 0x10) = *(x21 + 0x10)
    
    XString::~XString()
    XPooledFree(x21, 0x18)
    *(x23 + 0xc) -= 1

label_c760d8:
void* x21_1 = *gpAssetAppData
int64_t* x8_6 = *(x21_1 + 0x18)

if (x8_6 != 0)
    while (true)
        int64_t* x12_1 = x8_6
        x8_6 = *x12_1
        
        if (&x12_1[1] u<= arg1 && &x12_1[1 + sx.q(*(x21_1 + 0x20)) * 6] u> arg1)
            if (x8_6 == 0)
                break
            
            if ((arg1 - &x12_1[1]) s% 0x30 == 0)
                break
            
            continue
        
        if (x8_6 == 0)
            break

*(x21_1 + 0x24) -= 1
XString::~XString()
int64_t result = XString::~XString()
*arg1 = *(x21_1 + 0x10)
*(x21_1 + 0x10) = arg1
return result
