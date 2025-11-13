// 函数: _ZN4XMapI11DomCardEnum18DomCardTranslationE7DisposeEv
// 地址: 0xb91dc8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
void* x8 = *entry_x0

if (x8 == 0)
    return 

void* x20_1 = *x8
uint64_t x22_1 = 0

if (x20_1 == 0)
    goto label_b91e28

int32_t x8_1

while (true)
    void* x23_1 = *(x20_1 + 0x28)
    XString::~XString()
    XString::~XString()
    XString::~XString()
    XPooledFree(x20_1, 0x30)
    x20_1 = x23_1
    
    if (x23_1 == 0)
        x8 = *entry_x0
    label_b91e28:
        *(x8 + (x22_1 << 3)) = 0
        x8_1 = entry_x0[1].d
        
        if (x22_1.d + 1 u> x8_1)
            break
        
        x20_1 = *(*entry_x0 + (zx.q(x22_1.d + 1) << 3))
        x22_1 = zx.q(x22_1.d + 1)
        
        if (x20_1 == 0)
            break

void* x0_4 = *entry_x0
*(entry_x0 + 0xc) = 0
XPooledFree(x0_4, (x8_1 << 3) + 8)
*entry_x0 = 0
