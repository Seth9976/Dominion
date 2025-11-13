// 函数: sub_728960
// 地址: 0x728960
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg1 == 0)
    return 0xffffffff

uint32_t ecx = arg1 u>> 0x10
bool c = arg1 u< 0x10000

if (c)
    ecx = arg1

int32_t result_2 = (sbb.d(arg2, arg2, c) & 0xfffffff0) + 0x10

if (ecx u>= 0x100)
    result_2 += 8
    ecx u>>= 8

int32_t result_1 = result_2 + 4
uint32_t esi_1 = ecx u>> 4

if (ecx u< 0x10)
    result_1 = result_2

if (ecx u< 0x10)
    esi_1 = ecx

int32_t result = result_1 + 2

if (esi_1 u< 4)
    result = result_1

uint32_t ecx_2 = esi_1 u>> 2

if (esi_1 u< 4)
    ecx_2 = esi_1

if (ecx_2 u< 2)
    return result

return result + 1
