// 函数: _Z12TakeArtifact11DomCardEnum
// 地址: 0xae2430
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
void* x9 = *(DomGetContext() + 8)
uint64_t x8 = zx.q(*(x9 + 0x1528))
int64_t x19_1

if (x8.d s< 1)
label_ae2488:
    x19_1 = 0
else
    x19_1 = 0
    void* x9_1 = x9 + 0x1a70
    
    while (*x9_1 != arg1)
        x19_1 += 1
        x9_1 += 0x68
        
        if (x8 == x19_1)
            goto label_ae2488

void* result = CardGet(*(DomGetContext() + 8), zx.q(x19_1.d))

if (*(result + 0x2c) == *(x0 + 0x18))
    return result

int32_t x21_1 = *(CardGet(*(DomGetContext() + 8), zx.q(x19_1.d)) + 0xc)
int32_t x20_1 = *(x0 + 0x18)
void* x0_7 = DomGetContext()
int32_t var_38 = 0
int64_t var_40 = 0
int32_t var_48 = 0
int32_t var_50 = 0
int32_t var_58 = 0
int64_t var_60 = 0
MoveCardTo(*(x0_7 + 8), zx.q(x20_1), zx.q(x19_1.d), zx.q(x21_1), 0xb, 0x3f1, 0, 0)
return CalcScores(*(x0_7 + 8)) __tailcall
