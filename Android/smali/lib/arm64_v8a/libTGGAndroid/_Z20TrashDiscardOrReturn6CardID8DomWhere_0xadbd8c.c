// 函数: _Z20TrashDiscardOrReturn6CardID8DomWhere
// 地址: 0xadbd8c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg2
int32_t var_14 = arg1
int64_t var_30 = 0x3eb000003ec
int32_t var_28 = 2
int32_t* x0 = DomGetContext()
uint64_t x2 = zx.q(x0[6])
int32_t x9 = x0[7]
DomGame* x8 = *(x0 + 8)
int32_t var_38 = *x0
int32_t var_34 = x9
int64_t x9_1 = *(x0 + 0x40)
int128_t var_70
__builtin_memset(&var_70, 0, 0x30)
var_70.d = 0x7b
int128_t var_50
var_50:8.q = x9_1
int64_t var_40 = 0
int128_t var_60
var_60:0xc.d = 0
int32_t var_88 = 0x31
int128_t* var_90 = &var_70
int32_t var_18
QueueChoiceWhere(x8, &var_38, x2, &var_14, &var_18, 1, &var_30, 3)
int32_t x8_1 = var_18

if (x8_1 == 0x3ec)
    int32_t x8_3 = var_14
    var_70.d = x8_3
    
    if (x8_3 != 0)
        void* x0_4 = DomGetContext()
        int32_t var_80_1 = 0
        var_88.q = 0
        var_90.d = 0
        DiscardCards(*(x0_4 + 8), zx.q(*(x0_4 + 0x18)), &var_70, 1, zx.q(x19), 0xb, 7, 0)
else if (x8_1 == 0x3eb)
    MoveToTopDeck(zx.q(var_14), zx.q(x19), 0xb)
else
    if (x8_1 != 2)
        pthread_kill(pthread_self(), 6)
        int64_t x0_9
        DomChoiceUI* x1_4
        int64_t x2_3
        int64_t x3_2
        x0_9, x1_4, x2_3, x3_2 = XNoReturn()
        return ChooseOneFromHand(x0_9, x1_4, x2_3, x3_2) __tailcall
    
    int32_t x20_1 = var_14
    void* x0_2 = DomGetContext()
    TrashCard(*(x0_2 + 8), zx.q(*(x0_2 + 0x18)), zx.q(x20_1), zx.q(x19), 0x12, 0)

return zx.q(var_18)
