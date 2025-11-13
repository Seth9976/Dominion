// 函数: _Z31DefinitionVariableArrayMoveItemPvPK8DefFieldii
// 地址: 0x104da18
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x23 + 0x28)
DefinitionGetFieldDataAux(arg1, arg2)
int64_t x22_1 = *DefinitionGetFieldData(arg1, arg2)
int32_t x0_3 = DefinitionGetSize(*(arg2 + 0x30))
int64_t x21_1 = sx.q(x0_3)
int32_t x24 = muls.dp.d(x0_3, arg3)
int64_t x20_1 = x22_1 + muls.dp.d(x0_3, arg3)
int32_t x25 = muls.dp.d(x0_3, arg4)
int64_t x19_1 = x22_1 + muls.dp.d(x0_3, arg4)
void var_60
void* x22_2 = &var_60 - ((x21_1 + 0xf) & 0xfffffffffffffff0)
memcpy(x22_2, x20_1, x21_1)
int32_t x8_4

if (x24 s> x25)
    x8_4 = x20_1.d - x19_1.d
else
    x8_4 = x19_1.d - x20_1.d

int64_t x1_2

if (x24 s> x25)
    x1_2 = x19_1
else
    x1_2 = x20_1 + x21_1

int64_t x0_5

if (x24 s> x25)
    x0_5 = x19_1 + x21_1
else
    x0_5 = x20_1

memcpy(x0_5, x1_2, sx.q(x8_4))
int64_t result = memcpy(x19_1, x22_2, x21_1)

if (*(x23 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
