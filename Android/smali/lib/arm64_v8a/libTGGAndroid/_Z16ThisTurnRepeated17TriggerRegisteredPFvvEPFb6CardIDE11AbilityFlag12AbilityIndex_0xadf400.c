// 函数: _Z16ThisTurnRepeated17TriggerRegisteredPFvvEPFb6CardIDE11AbilityFlag12AbilityIndex
// 地址: 0xadf400
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x0 = DomGetContext()
GameAssert((*x0 == 2 ? 1 : 0).b)
int32_t* result = AbilityAllocRegistered(*(x0 + 8))
result[5] = x0[6]
result[6] = 0xffffffff
*(result + 0x1c) = *(x0 + 0x1c)
*(result + 0x44) = *(x0 + 0x30)
int32_t x8_4 = x0[0xe]
*result = 1
result[0x13] = 2
result[0x14] = arg1
*(result + 0x58) = arg2
*(result + 0x60) = arg3
result[0x1c] = arg4
*(result + 0x80) = 0
result[0x23] = 0
result[0xa] = x8_4
result[0x25] = arg5
*(result + 0x38) = *(x0 + 0x40)
return result
