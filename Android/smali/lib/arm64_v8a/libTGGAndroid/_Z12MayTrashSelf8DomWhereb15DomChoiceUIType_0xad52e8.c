// 函数: _Z12MayTrashSelf8DomWhereb15DomChoiceUIType
// 地址: 0xad52e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
int32_t* x0 = DomGetContext()
GameAssert((*x0 == 2 ? 1 : 0).b)
int32_t x22 = x0[7]
int32_t var_44 = x22
int32_t x0_4

if ((CheckStopMoving(*(x0 + 8), zx.q(x22), zx.q(x19)) & 1) == 0)
    int32_t x25_1 = x0[6]
    int32_t x8_1 = x0[7]
    DomGame* x24_1 = *(x0 + 8)
    int32_t var_50 = *x0
    int32_t var_4c_1 = x8_1
    ChoiceUI_Lookahead(x24_1, zx.q(x25_1), zx.q(arg3), arg2 & 1, zx.q(x22), *(x0 + 0x40), 0)
    int32_t var_90_1 = 0
    int32_t var_98_1 = 0
    void var_88
    void* var_a8_1 = &var_88
    int32_t var_a0_1 = 7
    int32_t var_b0_1 = 9
    x0_4 = QueueChoiceCards(x24_1, &var_50, zx.q(x25_1), 1, &var_44, 1, 1, 0)
    
    if (x0_4 != 0)
        int32_t x20_1 = var_44
        void* x0_7 = DomGetContext()
        x0_4 = TrashCard(*(x0_7 + 8), zx.q(*(x0_7 + 0x18)), zx.q(x20_1), zx.q(x19), 0x12, 0)
else
    x0_4 = 0

return zx.q(x0_4) & 1
