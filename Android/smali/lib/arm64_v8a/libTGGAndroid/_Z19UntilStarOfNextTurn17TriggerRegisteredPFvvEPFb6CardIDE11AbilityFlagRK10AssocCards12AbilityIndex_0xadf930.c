// 函数: _Z19UntilStarOfNextTurn17TriggerRegisteredPFvvEPFb6CardIDE11AbilityFlagRK10AssocCards12AbilityIndex
// 地址: 0xadf930
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x0 = DomGetContext()
GameAssert((*x0 == 2 ? 1 : 0).b)
int64_t* x0_3 = AbilityAllocRegistered(*(x0 + 8))
*(x0_3 + 0x14) = x0[6]
x0_3[3].d = 0xffffffff
*(x0_3 + 0x1c) = *(x0 + 0x1c)
*(x0_3 + 0x44) = *(x0 + 0x30)
int32_t x8_4 = x0[0xe]
*(x0_3 + 0x4c) = 2
x0_3[0xa].d = arg1
*x0_3 = 0x200000002
x0_3[0xb] = arg2
x0_3[0xc] = arg3
x0_3[0xe].d = arg4
x0_3[5].d = x8_4
x0_3[0x10].d = 0
*(x0_3 + 0x84) = 0
*(x0_3 + 0x8c) = 0
*(x0_3 + 0x94) = arg6
return ToAssociatedCards(*(x0 + 8), &x0_3[0x10], x0_3 + 0x84, &x0_3[0x11], arg5) __tailcall
