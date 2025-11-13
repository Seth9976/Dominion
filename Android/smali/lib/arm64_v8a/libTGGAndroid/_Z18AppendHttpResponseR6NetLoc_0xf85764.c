// 函数: _Z18AppendHttpResponseR6NetLoc
// 地址: 0xf85764
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* i = *(arg1 + 0x50)

if (i == 0)
    return 

int32_t x8_1 = 0

do
    void* x11_1 = *i
    i = i[1]
    x8_1 += *(x11_1 + 0xfdec)
while (i != 0)

if (x8_1 == 0)
    return 

int32_t x23_1 = *(arg1 + 0x34)
int32_t x8_2 = *(arg1 + 0x30) + x8_1

if (x23_1 s<= x8_2)
    int64_t x0_1 = XPooledCalloc(x8_2 + 1)
    
    if (x23_1 != 0)
        uint64_t x2_1 = zx.q(*(arg1 + 0x30))
        
        if (x2_1.d s>= 1)
            memcpy(x0_1, *(arg1 + 0x28), x2_1)
        
        XPooledFree(*(arg1 + 0x28), *(arg1 + 0x34))
    
    *(arg1 + 0x28) = x0_1
    *(arg1 + 0x34) = x8_2 + 1

for (int32_t i_1 = *(arg1 + 0x60); i_1 != 0; i_1 = *(arg1 + 0x60))
    void* x0_6 = *(arg1 + 0x50)
    void* x9_5 = *(x0_6 + 8)
    *(arg1 + 0x50) = x9_5
    
    if (x9_5 == 0)
        *(arg1 + 0x58) = 0
    else
        *(x9_5 + 0x10) = 0
        i_1 = *(arg1 + 0x60)
    
    void* x23_2 = *x0_6
    *(arg1 + 0x60) = i_1 - 1
    XPooledFree(x0_6, 0x18)
    int64_t x8_4 = sx.q(*(arg1 + 0x30))
    int64_t x10_1 = *(arg1 + 0x28)
    *(arg1 + 0x30) = *(x23_2 + 0xfdec) + x8_4.d
    memcpy(x10_1 + x8_4, x23_2 + *(x23_2 + 0xfde8), *(x23_2 + 0xfdec))
    uint64_t x24_2 = *gNetwork
    void** x0_5 = XPooledCalloc(0x18)
    *x0_5 = x23_2
    x0_5[1] = 0
    x0_5[2] = *(x24_2 + 0x70)
    void* x8_6 = *(x24_2 + 0x70)
    void*** x8_7
    
    if (x8_6 == 0)
        x8_7 = x24_2 + 0x68
    else
        x8_7 = x8_6 + 8
    
    *x8_7 = x0_5
    int32_t x8_8 = *(x24_2 + 0x78)
    *(x24_2 + 0x70) = x0_5
    *(x24_2 + 0x78) = x8_8 + 1

(*(arg1 + 0x28))[sx.q(*(arg1 + 0x30))] = 0
XString::XString()
XString::XString()
XString var_50
XString var_48
int32_t var_34
int32_t x0_8 = HttpParseResponse(arg1 + 0x28, &var_34, &var_48, &var_50)

if (x0_8 != 1)
    if (x0_8 != 2)
        int32_t x1_6 = *(arg1 + 0x34)
        
        if (x1_6 s>= 1)
            XPooledFree(*(arg1 + 0x28), x1_6)
            *(arg1 + 0x28) = 0
            *(arg1 + 0x30) = 0
        
        uint64_t x8_11 = *gNetwork
        int32_t x9_7 = *(x8_11 + 0x90)
        int32_t* x20_2
        int128_t v1_1
        int128_t v0_1
        
        if (x9_7 == 0)
            int32_t* x0_12
            x0_12, v0_1, v1_1 = XCalloc(0xed70)
            x20_2 = x0_12
        else
            void* x0_11 = *(x8_11 + 0x88)
            void* x10_3 = *(x0_11 + 0x10)
            *(x8_11 + 0x88) = x10_3
            
            if (x10_3 == 0)
                *(x8_11 + 0x80) = 0
            else
                *(x10_3 + 8) = 0
                x9_7 = *(x8_11 + 0x90)
            
            x20_2 = *x0_11
            *(x8_11 + 0x90) = x9_7 - 1
            v0_1, v1_1 = XPooledFree(x0_11, 0x18)
        x20_2[1] = 0xfa0
        *x20_2 = *(arg1 + 0x88)
        x20_2[0x3b4f] = var_34
        x20_2[2] = 0
        v1_1 = *(arg1 + 0x10)
        *(x20_2 + 0xed48) = *arg1
        *(x20_2 + 0xed58) = v1_1
        XString::operator=(&x20_2[0x3b50])
        void* x19_2 = *gNetwork
        void** x0_14 = XPooledCalloc(0x18)
        *x0_14 = x20_2
        x0_14[1] = 0
        x0_14[2] = *(x19_2 + 0x58)
        void* x8_16 = *(x19_2 + 0x58)
        void* x8_17
        
        if (x8_16 == 0)
            x8_17 = x19_2 + 0x50
        else
            x8_17 = x8_16 + 8
        
        *x8_17 = x0_14
        int32_t x8_18 = *(x19_2 + 0x60)
        *(x19_2 + 0x58) = x0_14
        *(x19_2 + 0x60) = x8_18 + 1
    else
        int32_t x1_5 = *(arg1 + 0x34)
        
        if (x1_5 s>= 1)
            XPooledFree(*(arg1 + 0x28), x1_5)
            *(arg1 + 0x28) = 0
            *(arg1 + 0x30) = 0

XString::~XString()
XString::~XString()
