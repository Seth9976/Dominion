// 函数: _Z17Start_ShufflePilev
// 地址: 0xa3821c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0 = ThisWhat()
void* x0_1 = DomGetContext()
int32_t x0_3 = BoardPileWhere(*(x0_1 + 8), zx.q(x0))
DomGame* x23 = *(x0_1 + 8)
uint64_t x1_2 = zx.q(*GetPileHead(x23, zx.q(x0_3), 0xffffffff))
int32_t var_cc0[0x320]
int64_t x22

if (x1_2.d == 0)
    x22 = 0
else
    x22 = 0
    
    do
        var_cc0[x22] = x1_2.d
        x22 += 1
        x1_2 = zx.q(*(CardGet(x23, x1_2) + 0x60))
    while (x1_2.d != 0)

ShuffleIntsN(*(x0_1 + 8), &var_cc0, x22.d, x22.d)

if (x22.d s>= 1)
    uint64_t i_1 = zx.q(x22.d)
    int32_t (* x23_1)[0x320] = &var_cc0
    uint64_t i
    
    do
        uint64_t x2_1 = zx.q(*x23_1)
        x23_1 = &(*x23_1)[1]
        int32_t var_cd0_1 = 0
        int64_t var_cd8_1 = 0
        int32_t var_ce0_1 = 0
        int32_t var_ce8_1 = 0
        int32_t var_cf0_1 = 0
        MoveCardToSafe(*(x0_1 + 8), 0xffffffff, x2_1, 0xb, zx.q(x0_3), 0, 0xffffffff, 0)
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t var_ce8_2 = 0
int32_t var_cf0_2 = 0
return NotifyLog(*(x0_1 + 8), 0x48, 0xffffffff, 0, nullptr, 0, zx.q(x0), 0)
