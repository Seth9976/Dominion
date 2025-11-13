// 函数: _Z17IsFirstCardPlayed6CardID
// 地址: 0xae51b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
void* x9_1 = *(x0 + 8) + sx.q(*(x0 + 0x18)) * 0x5a30
int64_t x8_1 = sx.q(*(x9_1 + 0x181cc))
int64_t x10_1
bool cond:0_1

do
    x10_1 = x8_1 - 1
    
    if (x8_1 s< 1)
        return 0
    
    cond:0_1 = *(x9_1 + 0x19b14 + (x8_1 << 2)) != arg1
    x8_1 = x10_1
while (cond:0_1)
return zx.q(x10_1.d == 0 ? 1 : 0)
