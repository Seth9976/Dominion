// 函数: _Z9TakeState11DomCardEnum
// 地址: 0xae2254
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg1
void* x0 = DomGetContext()
uint64_t x21_1

if (x20 == 0xd4a)
    void* x9 = *(DomGetContext() + 8)
    uint64_t x8 = zx.q(*(x9 + 0x1528))
    
    if (x8.d s< 1)
        goto label_ae2320
    
    x21_1 = 0
    void* x9_1 = x9 + 0x1a70
    
    while (*x9_1 != 0xd4a)
        x21_1 += 1
        x9_1 += 0x68
        
        if (x8 == x21_1)
            goto label_ae2320
    
    goto label_ae2308

int32_t x22_1 = *(x0 + 0x18)
void* x9_2 = *(DomGetContext() + 8)
uint64_t x8_1 = zx.q(*(x9_2 + 0x1528))

if (x8_1.d s< 1)
label_ae2320:
    DomCard* x0_4 = CardCreate(*(x0 + 8), zx.q(x20), 6, 0xffffffff, 0)
    x21_1 = zx.q(GetId(*(x0 + 8), x0_4))
else
    x21_1 = 0
    void* x9_3 = x9_2 + 0x1a94
    
    while (*(x9_3 - 0x24) != x20 || *x9_3 != x22_1)
        x21_1 += 1
        x9_3 += 0x68
        
        if (x8_1 == x21_1)
            goto label_ae2320
    
label_ae2308:
    
    if (x21_1.d == 0)
        goto label_ae2320

int32_t x20_1 = *(CardGet(*(DomGetContext() + 8), zx.q(x21_1.d)) + 0xc)
int32_t x19_1 = *(x0 + 0x18)
void* x0_10 = DomGetContext()
int32_t var_38 = 0
int64_t var_40 = 0
int32_t var_48 = 0
int32_t var_50 = 0
int32_t var_58 = 0
int64_t var_60 = 0
MoveCardTo(*(x0_10 + 8), zx.q(x19_1), zx.q(x21_1.d), zx.q(x20_1), 0xb, 0x3f1, 0, 0)
return CalcScores(*(x0_10 + 8)) __tailcall
