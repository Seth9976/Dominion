// 函数: _Z10UI2Disposev
// 地址: 0x10111d4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x19 = *gUI2

if (x19 != 0)
    uint64_t x8_1 = zx.q(*(gUI2 + 8))
    void* x0_1
    
    if (x8_1.d == 0)
        x0_1 = x19
    else
        int64_t x8_2 = x19 + x8_1 * 0x19a8
        x0_1 = x19
        
        while (true)
            if (zx.d(*(x19 + 0x19a2)) != 0)
                UI2::~UI2()
                int32_t x9_2 = *(gUI2 + 0x10)
                *(gUI2 + 0x10) = zx.d(*(x19 + 0x19a0))
                *(x19 + 0x19a0) = x9_2
                x0_1 = *gUI2
                uint64_t x9_3 = zx.q(*(gUI2 + 8))
                x19 += 0x19a8
                *(gUI2 + 0x14) -= 1
                x8_2 = x0_1 + x9_3 * 0x19a8
                
                if (x8_2 u<= x19)
                    break
            else
                x19 += 0x19a8
                
                if (x19 u>= x8_2)
                    break
    
    *(gUI2 + 8) = 0
    *(gUI2 + 0x10) = 0
    XFree(x0_1)
    *(gUI2 + 0x20) = 0
    *(gUI2 + 8) = 0
    *(gUI2 + 0x10) = 0
    *gUI2 = 0

void* x19_1 = *(gUI2 + 0x28)

if (x19_1 == 0)
    return 

uint64_t x8_5 = zx.q(*(gUI2 + 0x30))
void* x0_3

if (x8_5.d == 0)
    x0_3 = x19_1
else
    int64_t x8_6 = x19_1 + x8_5 * 0x438
    x0_3 = x19_1
    
    do
        x19_1 += 0x438
        
        while (zx.d(*(x19_1 - 6)) == 0)
            bool cond:0_1 = x19_1 u< x8_6
            x19_1 += 0x438
            
            if (not(cond:0_1))
                goto label_101130c
        
        XString::~XString()
        XString::~XString()
        XString::~XString()
        XString::~XString()
        int32_t x9_5 = *(gUI2 + 0x38)
        *(gUI2 + 0x38) = zx.d(*(x19_1 - 8))
        *(x19_1 - 8) = x9_5
        x0_3 = *(gUI2 + 0x28)
        uint64_t x9_6 = zx.q(*(gUI2 + 0x30))
        *(gUI2 + 0x3c) -= 1
        x8_6 = x0_3 + x9_6 * 0x438
    while (x8_6 u> x19_1)

label_101130c:
*(gUI2 + 0x30) = 0
*(gUI2 + 0x38) = 0
XFree(x0_3)
*(gUI2 + 0x48) = 0
*(gUI2 + 0x30) = 0
*(gUI2 + 0x38) = 0
*(gUI2 + 0x28) = 0
