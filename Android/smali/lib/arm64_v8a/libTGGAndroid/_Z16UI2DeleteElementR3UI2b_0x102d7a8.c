// 函数: _Z16UI2DeleteElementR3UI2b
// 地址: 0x102d7a8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg2.d
int64_t* x21 = *(gUI2Editor + 0x6008)
int64_t* x9 = *x21

if (x9 == 0)
    if (x21[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x21, false, true)
    x9 = *x21

void* x23 = *(arg1 + 0x17d0)
AttribTree* x21_1 = *x9
int32_t x8_2 = *(x23 + 0x1970)

if (x8_2 != 0)
    int64_t x9_1 = *gUI2
    void* x0_3
    int32_t x9_2
    
    if (x9_1 + zx.q(*(x23 + 0x1870)) * 0x19a8 == arg1)
        x0_3 = x23 + 0x1870
        x9_2 = -1
    else
        uint64_t x13_1 = 0
        int32_t x12_1
        void* x14_2
        
        do
            x12_1 = x13_1.d + 1
            
            if (x8_2 == x12_1)
                goto label_102d8a8
            
            x13_1 = zx.q(x12_1)
            x14_2 = x23 + (x13_1 << 0x20 s>> 0x1e)
        while (x9_1 + zx.q(*(x14_2 + 0x1870)) * 0x19a8 != arg1)
        
        x0_3 = x14_2 + 0x1870
        x9_2 = not.d(x12_1)
    
    memmove(x0_3, x0_3 + 4, zx.q(x8_2 + x9_2) << 0x20 s>> 0x1e)
    *(x23 + 0x1970) -= 1

label_102d8a8:

for (int32_t i = *(arg1 + 0x1970); i != 0; i = *(arg1 + 0x1970))
    *(arg1 + 0x1970) = i - 1
    int32_t x8_9 = *(arg1 + ((sx.q(i) - 1) << 2) + 0x1870)
    
    if (x8_9 == 0)
        break
    
    UI2DeleteElement(*gUI2 + zx.q(x8_9.w) * 0x19a8, 
        ((zx.d(*(arg1 + 0x17d8)) != 0 ? 1 : 0).b | x20.b) & 1)

if (zx.d(*(arg1 + 0x17d8)) == 0 && (x20 & 1) == 0)
    AttribTreeDeleteItem(x21_1, *(arg1 + 0x1690))
    uint64_t x10_4 = zx.q(*(gUI2 + 8))
    
    if (x10_4.d != 0)
        void* x8_14 = *gUI2
        int64_t x10_5 = x8_14 + x10_4 * 0x19a8
        
        while (true)
            if (zx.d(*(x8_14 + 0x19a2)) == 0)
                x8_14 += 0x19a8
                
                if (x8_14 u>= x10_5)
                    break
            else
                if (*(x8_14 + 0x1688) == *(arg1 + 0x1688))
                    int32_t x11_3 = *(x8_14 + 0x1690)
                    
                    if (x11_3 s> *(arg1 + 0x1690))
                        *(x8_14 + 0x1690) = x11_3 - 1
                
                x8_14 += 0x19a8
                
                if (x10_5 u<= x8_14)
                    break

int64_t result = UI2::~UI2()
int32_t x8_15 = *(gUI2 + 0x14)
uint32_t x10_6 = zx.d(*(arg1 + 0x19a0))
*(arg1 + 0x19a0) = *(gUI2 + 0x10)
*(gUI2 + 0x10) = x10_6
*(gUI2 + 0x14) = x8_15 - 1
return result
