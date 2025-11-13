// 函数: _ZN4XMapI11DomCardEnum6XArrayI15DomCardCategoryEE7DisposeEv
// 地址: 0xa54b04
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
void* x8 = *entry_x0

if (x8 == 0)
    return 

void* x22_1 = *x8
uint64_t x21_1 = 0

if (x22_1 != 0)
    goto label_a54b40

int32_t x8_2

while (true)
    *(x8 + (x21_1 << 3)) = 0
    x8_2 = entry_x0[1].d
    
    if (x21_1.d + 1 u> x8_2)
        break
    
    x8 = *entry_x0
    x22_1 = *(x8 + (zx.q(x21_1.d + 1) << 3))
    x21_1 = zx.q(x21_1.d + 1)
    
    if (x22_1 != 0)
    label_a54b40:
        void* x20_1 = x22_1
        x22_1 = *(x22_1 + 0x18)
        
        if ((XPooledShutdown() & 1) == 0)
            void* x0_2 = *(x20_1 + 8)
            
            if (x0_2 != 0)
                int32_t x8_1 = *(x20_1 + 0x14)
                *(x20_1 + 0x10) = 0
                XPooledFree(x0_2, x8_1 << 2)
        
        XPooledFree(x20_1, 0x20)
        
        if (x22_1 != 0)
            break
        
        x8 = *entry_x0

void* x0_3 = *entry_x0
*(entry_x0 + 0xc) = 0
XPooledFree(x0_3, (x8_2 << 3) + 8)
*entry_x0 = 0
