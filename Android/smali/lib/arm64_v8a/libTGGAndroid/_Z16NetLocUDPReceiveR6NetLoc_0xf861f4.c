// 函数: _Z16NetLocUDPReceiveR6NetLoc
// 地址: 0xf861f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x20_1

while (true)
    uint64_t x8_7 = *gNetwork
    int32_t x9_2 = *(x8_7 + 0x90)
    
    if (x9_2 == 0)
        x20_1 = XCalloc(0xed70)
    else
        void* x0_1 = *(x8_7 + 0x88)
        void* x10_2 = *(x0_1 + 0x10)
        *(x8_7 + 0x88) = x10_2
        
        if (x10_2 == 0)
            *(x8_7 + 0x80) = 0
        else
            *(x10_2 + 8) = 0
            x9_2 = *(x8_7 + 0x90)
        
        x20_1 = *x0_1
        *(x8_7 + 0x90) = x9_2 - 1
        XPooledFree(x0_1, 0x18)
    
    int64_t* x0_3 = *gNetworkInterface
    int32_t x0_4 = (*(*x0_3 + 0x28))(x0_3, zx.q(*(arg1 + 0x20)), &x20_1[0x3b52], &x20_1[3], 0xed30)
    
    if (x0_4 + 1 u<= 1)
        break
    
    int32_t x8_11 = *(arg1 + 0x88)
    x20_1[2] = x0_4
    *x20_1 = x8_11
    int32_t x8_1
    
    if (x0_4 u>= 4)
        x8_1 = x20_1[3]
    else
        x8_1 = 0x3e9
    
    x20_1[1] = x8_1
    uint64_t x21_1 = *gNetwork
    void** x0 = XPooledCalloc(0x18)
    *x0 = x20_1
    x0[1] = 0
    x0[2] = *(x21_1 + 0x58)
    void* x8_3 = *(x21_1 + 0x58)
    void*** x8_4
    
    if (x8_3 == 0)
        x8_4 = x21_1 + 0x50
    else
        x8_4 = x8_3 + 8
    
    *x8_4 = x0
    int32_t x8_5 = *(x21_1 + 0x60)
    *(x21_1 + 0x58) = x0
    *(x21_1 + 0x60) = x8_5 + 1

XString::operator=(&x20_1[0x3b50])
void* x19_1 = *gNetwork
int32_t** result = XPooledCalloc(0x18)
*result = x20_1
result[1] = 0
result[2] = *(x19_1 + 0x88)
void* x8_13 = *(x19_1 + 0x88)
void* x8_14

if (x8_13 == 0)
    x8_14 = x19_1 + 0x80
else
    x8_14 = x8_13 + 8

*x8_14 = result
int32_t x8_15 = *(x19_1 + 0x90)
*(x19_1 + 0x88) = result
*(x19_1 + 0x90) = x8_15 + 1
return result
