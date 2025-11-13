// 函数: _Z19Start_MakeSplitPilev
// 地址: 0xa384a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
int32_t x0_1 = ThisWhat()
int32_t x19 = *(x0 + 0x54)
int32_t x0_3 = BoardPileWhere(*(x0 + 8), zx.q(x0_1))
DomGame* x23 = *(x0 + 8)
uint64_t x1_2 = zx.q(*GetPileHead(x23, zx.q(x0_3), 0xffffffff))
int64_t x26

if (x1_2.d == 0)
    x26 = 0
label_a3853c:
    int32_t i_1 = x26.d - 0xa
    int32_t i
    
    do
        CreateCard(zx.q(x19), zx.q(x0_3))
        i = i_1
        i_1 += 1
    while (i u< 0xffffffff)
    x26 = 0xa
    goto label_a38560

x26 = 0
int32_t var_ce0[0x320]

do
    var_ce0[x26] = x1_2.d
    x26 += 1
    x1_2 = zx.q(*(CardGet(x23, x1_2) + 0x60))
while (x1_2.d != 0)

if (x26.d s< 0xa)
    goto label_a3853c

if (x26.d s> x26.d u>> 1)
label_a38560:
    uint64_t x27_1 = zx.q(x26.d u>> 1)
    
    do
        DomGame* x23_1 = *(x0 + 8)
        int32_t x24_1 = var_ce0[x27_1]
        int64_t* x0_10 = CardGet(x23_1, zx.q(x24_1))
        x0_10[1].d = x19
        *x0_10 = DomDefGet(zx.q(x19), zx.q(*(x23_1 + 0xd50)))
        int64_t var_ce8_1 = 0
        int32_t var_cf0_1 = 0
        int32_t var_cf8_1 = 0
        int32_t var_d00_1 = 0
        NotifyEffect(x23_1, 0x2d, 0xffffffff, zx.q(x24_1), zx.q(x19), 0, 0, 0)
        x27_1 += 1
    while (x26.d s> x27_1.d)

*(DomBoardPile(*(x0 + 8), x0_3) + 4) = x19
RunPileSetup(*(x0 + 8), zx.q(x19), *(x0 + 0x90), 0)
UpdateSplitPileInfo(*(x0 + 8), zx.q(x0_3))
int32_t var_cf8_2 = 0
int32_t var_d00_2 = 0
return NotifyLog(*(x0 + 8), 0x4f, 0xffffffff, 0, nullptr, 0, zx.q(x0_1), zx.q(x19))
