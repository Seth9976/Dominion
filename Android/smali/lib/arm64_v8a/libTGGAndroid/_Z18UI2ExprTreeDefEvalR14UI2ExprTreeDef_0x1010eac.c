// 函数: _Z18UI2ExprTreeDefEvalR14UI2ExprTreeDef
// 地址: 0x1010eac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 8)
void* result

if (x8 == 0)
label_1010f08:
    int32_t x8_6
    uint64_t x24_1
    
    if (*(gUI2 + 0x3c) == *(gUI2 + 0x34))
        uint64_t x8_2 = zx.q(*(gUI2 + 0x30))
        
        if (x8_2.d != 0)
            void* x20_1 = *(gUI2 + 0x28)
            int64_t x8_3 = x20_1 + x8_2 * 0x438
            
            do
                x20_1 += 0x438
                
                while (zx.d(*(x20_1 - 6)) == 0)
                    bool cond:1_1 = x20_1 u< x8_3
                    x20_1 += 0x438
                    
                    if (not(cond:1_1))
                        goto label_1010f90
                
                XString::~XString()
                XString::~XString()
                XString::~XString()
                XString::~XString()
                int32_t x9_5 = *(gUI2 + 0x38)
                *(gUI2 + 0x38) = zx.d(*(x20_1 - 8))
                *(x20_1 - 8) = x9_5
                int64_t x9_6 = *(gUI2 + 0x28)
                uint64_t x10_3 = zx.q(*(gUI2 + 0x30))
                *(gUI2 + 0x3c) -= 1
                x8_3 = x9_6 + x10_3 * 0x438
            while (x8_3 u> x20_1)
        
    label_1010f90:
        x24_1 = 0
        x8_6 = 0
        *(gUI2 + 0x30) = 0
        *(gUI2 + 0x38) = 0
        goto label_1010fb4
    
    x24_1 = zx.q(*(gUI2 + 0x38))
    x8_6 = *(gUI2 + 0x30)
    int32_t x9_7
    int64_t x23_1
    uint64_t x25_1
    
    if (x24_1.d != x8_6)
        x23_1 = *(gUI2 + 0x28)
        x25_1 = x24_1
        x9_7 = *(x23_1 + x24_1 * 0x438 + 0x430)
    else
    label_1010fb4:
        x23_1 = *(gUI2 + 0x28)
        x9_7 = x8_6 + 1
        *(gUI2 + 0x30) = x9_7
        x25_1 = zx.q(x8_6)
    
    result = x23_1 + x25_1 * 0x438
    *(gUI2 + 0x38) = x9_7
    memset(result, 0, 0x430)
    XString::XString()
    XString::XString()
    XString::XString()
    XString::XString()
    *(x23_1 + x25_1 * 0x438 + 0x430) = x24_1.d | *(gUI2 + 0x40) << 0x10
    int32_t x8_13 = *(gUI2 + 0x40)
    int32_t x8_14
    
    if (x8_13 == 0xffff)
        x8_14 = 1
    else
        x8_14 = x8_13 + 1
    
    *(gUI2 + 0x3c) += 1
    *(gUI2 + 0x40) = x8_14
    *(arg1 + 8) = *(result + 0x430)
else
    uint64_t x9_1 = zx.q(x8.w)
    
    if (x9_1.d u>= *(gUI2 + 0x30))
        goto label_1010f08
    
    result = *(gUI2 + 0x28) + x9_1 * 0x438
    
    if (*(result + 0x430) != x8)
        goto label_1010f08

*(result + 0x98) = *arg1
return result
