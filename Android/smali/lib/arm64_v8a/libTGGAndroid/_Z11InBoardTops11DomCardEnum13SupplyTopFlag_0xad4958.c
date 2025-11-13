// 函数: _Z11InBoardTops11DomCardEnum13SupplyTopFlag
// 地址: 0xad4958
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
void* x0 = DomGetContext()
int32_t var_cc0[0x320]
int32_t x0_2 = CardsBoardTops(*(x0 + 8), zx.q(*(x0 + 0x18)), &var_cc0, zx.q(arg2))

if (x0_2 s< 1)
    return 0

if (CardWhat(*(x0 + 8), zx.q(var_cc0[0])) == x19)
    return 1

uint64_t x21_2 = zx.q(x0_2)
int64_t x8_1 = 1
int64_t x23_1
bool cond:0_1

do
    x23_1 = x8_1
    
    if (x21_2 == x8_1)
        break
    
    cond:0_1 = CardWhat(*(x0 + 8), zx.q(var_cc0[x23_1])) != x19
    x8_1 = x23_1 + 1
while (cond:0_1)
return zx.q(x23_1 u< x21_2 ? 1 : 0)
