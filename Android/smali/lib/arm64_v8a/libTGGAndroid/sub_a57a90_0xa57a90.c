// 函数: sub_a57a90
// 地址: 0xa57a90
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
void var_cb0
int32_t i_2 = SupplyPileTypes(*(x0 + 8), &var_cb0)

if (i_2 s< 1)
    return 

uint64_t i_1 = zx.q(i_2)
void* x22_1 = &var_cb0
uint64_t i

do
    int64_t x0_3 = BoardPileWhere(*(x0 + 8), zx.q(*x22_1))
    
    if ((CanRotate(x0_3) & 1) != 0)
        RotatePile(*(x0 + 8), zx.q(*(x0 + 0x18)), zx.q(x0_3.d))
    
    i = i_1
    i_1 -= 1
    x22_1 += 4
while (i != 1)
