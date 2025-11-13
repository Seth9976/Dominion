// 函数: _Z8NextTime17TriggerRegisteredPFvvEPFb6CardIDERK10AssocCards12AbilityIndex11AbilityFlag
// 地址: 0xadecd4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x0 = DomGetContext()
int32_t x8 = *x0
int64_t x26

if (x8 == 3)
    x26 = AbilitySourceCardRef(*(x0 + 8), zx.q(x0[7]))
else
    if (x8 != 2)
        pthread_kill(pthread_self(), 6)
        void (* x0_8)()
        bool (* x1_4)(CardID)
        AssocCards* x2_3
        int64_t x3_2
        int64_t x4_2
        x0_8, x1_4, x2_3, x3_2, x4_2 = XNoReturn()
        return StartOfNextTurn(x0_8, x1_4, x2_3, x3_2, x4_2) __tailcall
    
    x26 = *(x0 + 0x1c)

int64_t* x0_4 = AbilityAllocRegistered(*(x0 + 8))
int32_t x8_1 = x0[6]
*(x0_4 + 0x1c) = x26
*(x0_4 + 0x14) = x8_1
x0_4[3].d = 0xffffffff
*(x0_4 + 0x44) = *(x0 + 0x30)
int32_t x8_3 = x0[0xe]
*x0_4 = 0x100000003
x0_4[5].d = x8_3
int32_t x8_4 = x0[0x14]
*(x0_4 + 0x4c) = 2
x0_4[0xa].d = arg1
x0_4[0xb] = arg2
x0_4[0xc] = arg3
x0_4[0xe].d = arg6
x0_4[2].d = x8_4
*(x0_4 + 0x74) = *(*(x0 + 8) + 0x19ec)
int64_t x8_7 = *(x0 + 0x40)
*(x0_4 + 0x84) = 0
*(x0_4 + 0x94) = arg5
x0_4[0xf] = x8_7
x0_4[0x10].d = 0
*(x0_4 + 0x8c) = 0
x0_4[7] = *(x0 + 0x40)
return ToAssociatedCards(*(x0 + 8), &x0_4[0x10], x0_4 + 0x84, &x0_4[0x11], arg4) __tailcall
