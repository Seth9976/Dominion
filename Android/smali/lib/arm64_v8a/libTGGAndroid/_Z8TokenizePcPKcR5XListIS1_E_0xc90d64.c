// 函数: _Z8TokenizePcPKcR5XListIS1_E
// 地址: 0xc90d64
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t i = zx.d(*arg1)

if (i == 0)
    return 

char* x21_1 = arg1
char* x22_1 = arg2 + strlen(arg2) - 1
void* x23_1 = x21_1

do
    uint32_t x9_1 = zx.d(*arg2)
    char const* x8_2 = arg2
    
    if (x9_1 != 0)
        if ((i & 0xff) != zx.d(x9_1.b))
            goto label_c90e18
        
        uint32_t x9_3
        
        do
            *x21_1 = 0
            
            if (x21_1 == x23_1)
                x23_1 = &x21_1[1]
            else
                arg1 = XPooledCalloc(0x18)
                *arg1 = x23_1
                *(arg1 + 8) = 0
                x23_1 = &x21_1[1]
                *(arg1 + 0x10) = *(arg3 + 8)
                void* x8_4 = *(arg3 + 8)
                XList<char const*>& x8_5
                
                if (x8_4 == 0)
                    x8_5 = arg3
                else
                    x8_5 = x8_4 + 8
                
                *x8_5 = arg1
                int32_t x8_6 = *(arg3 + 0x10)
                *(arg3 + 8) = arg1
                *(arg3 + 0x10) = x8_6 + 1
            
            x21_1 = x23_1
            x8_2 = x22_1
        label_c90e18:
            x9_3 = zx.d(x8_2[1])
            
            if (x9_3 == 0)
                break
        while (zx.d(*x21_1) == zx.d(x9_3.b))
    
    x21_1 = &x21_1[1]
    i = zx.d(*x21_1)
while (i != 0)

if (zx.d(*x23_1) == 0)
    return 

arg1 = XPooledCalloc(0x18)
*arg1 = x23_1
*(arg1 + 8) = 0
*(arg1 + 0x10) = *(arg3 + 8)
void* x8_10 = *(arg3 + 8)
XList<char const*>& x8_11

if (x8_10 == 0)
    x8_11 = arg3
else
    x8_11 = x8_10 + 8

*x8_11 = arg1
int32_t x8_12 = *(arg3 + 0x10)
*(arg3 + 8) = arg1
*(arg3 + 0x10) = x8_12 + 1
