// 函数: _Z16Start_SameRewardv
// 地址: 0xa31558
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
int32_t x0_2 = BoardPileWhere(*(x0 + 8), 0x718)
void* x0_4 = DomBoardPile(*(x0 + 8), x0_2)
DomGame* x21 = *(x0 + 8)
uint64_t x1_2 = zx.q(*GetPileHead(x21, zx.q(x0_2), 0xffffffff))
int32_t var_70[0xc]
int64_t x22_1

if (x1_2.d == 0)
    x22_1 = 0
else
    x22_1 = 0
    
    do
        var_70[x22_1] = x1_2.d
        x22_1 += 1
        x1_2 = zx.q(*(CardGet(x21, x1_2) + 0x60))
    while (x1_2.d != 0)

int32_t x0_10 = RandomInt(*(x0 + 8), x22_1.d)
int32_t x0_12 = CardWhat(*(x0 + 8), zx.q(var_70[sx.q(x0_10)]))
int32_t i = *(x0_4 + 8)

if (i != 0)
    do
        void* x0_16 = CardGet(*(x0 + 8), zx.q(i))
        
        if (*(x0_16 + 8) != x0_12)
            DomGame* x23_1 = *(x0 + 8)
            int64_t* x0_18 = CardGet(x23_1, zx.q(i))
            x0_18[1].d = x0_12
            *x0_18 = DomDefGet(zx.q(x0_12), zx.q(*(x23_1 + 0xd50)))
            int64_t var_78_1 = 0
            int32_t var_80_1 = 0
            int32_t var_88_2 = 0
            int32_t var_90_2 = 0
            NotifyEffect(x23_1, 0x2d, 0xffffffff, zx.q(i), zx.q(x0_12), 0, 0, 0)
        
        i = *(x0_16 + 0x60)
    while (i != 0)

int32_t var_88_1 = 0
int32_t var_90_1 = 0
return NotifyLog(*(x0 + 8), 0x4d, 0xffffffff, 0, nullptr, 0, zx.q(x0_12), 0)
