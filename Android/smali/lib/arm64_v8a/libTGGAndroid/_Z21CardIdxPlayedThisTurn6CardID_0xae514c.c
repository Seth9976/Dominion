// 函数: _Z21CardIdxPlayedThisTurn6CardID
// 地址: 0xae514c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
void* x9_1 = *(x0 + 8) + sx.q(*(x0 + 0x18)) * 0x5a30
int64_t x8_1 = sx.q(*(x9_1 + 0x181cc))
uint64_t result = zx.q(x8_1.d + 1)
bool cond:0_1

do
    if (x8_1 s< 1)
        return 0xffffffff
    
    result = zx.q(result.d - 1)
    cond:0_1 = *(x9_1 + 0x19b14 + (x8_1 << 2)) != arg1
    x8_1 -= 1
while (cond:0_1)
return result
