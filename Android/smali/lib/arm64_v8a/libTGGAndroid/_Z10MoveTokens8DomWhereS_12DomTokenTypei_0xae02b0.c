// 函数: _Z10MoveTokens8DomWhereS_12DomTokenTypei
// 地址: 0xae02b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x23 = arg4
int32_t x19 = arg3
int32_t x20 = arg2
int32_t x21 = arg1
void* x0 = DomGetContext()
bool x24 = true
void* x0_1 = DomGetContext()

if (x19 s> 0xe00)
    if (x19 != 0xe01 && x19 != 0x1200)
        x24 = false
else if (x19 != 0x601 && x19 != 0xc00)
    x24 = false

GameAssert(x24)
int64_t result = CountTokensPile(*(x0_1 + 8), 0xffffffff, zx.q(x19), zx.q(x21))

if (result.d s<= x23)
    bool x23_1 = true
    void* x0_4 = DomGetContext()
    
    if (x19 s> 0xe00)
        if (x19 != 0xe01 && x19 != 0x1200)
            x23_1 = false
    else if (x19 != 0x601 && x19 != 0xc00)
        x23_1 = false
    
    GameAssert(x23_1)
    result = CountTokensPile(*(x0_4 + 8), 0xffffffff, zx.q(x19), zx.q(x21))
    x23 = result.d

if (x23 == 0)
    return result

uint64_t x6 = zx.q(*(x0 + 0x18))
uint64_t x2_2

if (x20 u>= 0x49)
    x2_2 = zx.q(x6.d)
else
    x2_2 = 0xffffffff

return MoveTokens(*(x0 + 8), zx.q(x21), x2_2, zx.q(x20), zx.q(x19), x23, x6) __tailcall
