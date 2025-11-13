// 函数: sub_75e950
// 地址: 0x75e950
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

*(arg1 + 0x1058) = arg5
*(arg1 + 0x1054) = arg2
*(arg1 + 0x106c) = 0x3f800000
*(arg1 + 0x1064) = arg3
int32_t esi_1 = (arg3 + 0xf) & 0xfffffff0
*(arg1 + 0x2c) = esi_1

if (esi_1 u< 0x400 || esi_1 u< 0x1000)
    *(arg1 + 0x2c) = 0x1000
    esi_1 = 0x1000

int32_t esi_2 = esi_1 << 3
sub_7597b9(*(arg1 + 0x24))
*(arg1 + 0x24) = 0
void* var_18 = (esi_2 << 2) + 0x10
*(arg1 + 0x20) = 0
*(arg1 + 0x28) = esi_2
int32_t eax_4 = sub_7597a2()
*(arg1 + 0x24) = eax_4

if (eax_4 != 0)
    *(arg1 + 0x20) = (eax_4 + 0xf) & 0xfffffff0

int32_t esi_4 = *(arg1 + 0x2c) << 3
sub_7597b9(*(arg1 + 0x34))
*(arg1 + 0x34) = 0
void* var_18_1 = (esi_4 << 2) + 0x10
*(arg1 + 0x30) = 0
*(arg1 + 0x38) = esi_4
int32_t eax_8 = sub_7597a2()
*(arg1 + 0x34) = eax_8

if (eax_8 != 0)
    *(arg1 + 0x30) = (eax_8 + 0xf) & 0xfffffff0

int32_t eax_12 = *(arg1 + 0x18) * 2
int32_t ecx
ecx.b = mulu.dp.d(eax_12, 4) u>> 0x20 != 0
int32_t var_14_2 = neg.d(ecx) | (eax_12 * 4)
*(arg1 + 0x3c) = sub_7597a2()
int32_t eax_15 = *(arg1 + 0x18)
int32_t ecx_3
ecx_3.b = mulu.dp.d(eax_15, 4) u>> 0x20 != 0
int32_t var_18_2 = neg.d(ecx_3) | (eax_15 * 4)
int32_t eax_17 = sub_7597a2()
int32_t esi_5 = *(arg1 + 0x18)
*(arg1 + 0x4c) = eax_17
int32_t esi_6 = esi_5 << 0xd
sub_7597b9(*(arg1 + 0x44))
*(arg1 + 0x44) = 0
void* var_20 = (esi_6 << 2) + 0x10
*(arg1 + 0x40) = 0
*(arg1 + 0x48) = esi_6
int32_t eax_19 = sub_7597a2()
*(arg1 + 0x44) = eax_19

if (eax_19 != 0)
    *(arg1 + 0x40) = (eax_19 + 0xf) & 0xfffffff0

int32_t ebx = *(arg1 + 0x18)
int32_t i = 0

if (ebx * 2 != 0)
    int32_t esi_7 = 0
    
    do
        int32_t ecx_7 = *(arg1 + 0x40) + esi_7
        esi_7 += 0x4000
        *(*(arg1 + 0x3c) + (i << 2)) = ecx_7
        i += 1
        ebx = *(arg1 + 0x18)
    while (i u< ebx * 2)

int32_t i_1 = 0

if (ebx != 0)
    do
        *(*(arg1 + 0x4c) + (i_1 << 2)) = 0
        i_1 += 1
    while (i_1 u< *(arg1 + 0x18))

*(arg1 + 0x1068) = arg4
int32_t result = *(arg1 + 0x1058) - 1
__builtin_strncpy(arg1 + 0x1070, "33s?", 4)

switch (result)
    case 0
        *(arg1 + 0x1d54) = 0
        *(arg1 + 0x1d58) = 0
        *(arg1 + 0x1d5c) = 0x3f800000
    case 1
        goto label_75ec02
    case 3
        *(arg1 + 0x1d6c) = 0x40000000
        *(arg1 + 0x1d74) = 0xbf800000
        *(arg1 + 0x1d78) = 0xc0000000
        *(arg1 + 0x1d80) = 0xbf800000
    label_75ebee:
        *(arg1 + 0x1d70) = 0
        *(arg1 + 0x1d7c) = 0
    label_75ec02:
        *(arg1 + 0x1d68) = 0x3f800000
        *(arg1 + 0x1d64) = 0
        *(arg1 + 0x1d60) = 0xc0000000
        *(arg1 + 0x1d54) = 0x40000000
        *(arg1 + 0x1d58) = 0
        *(arg1 + 0x1d5c) = 0x3f800000
    case 5
        *(arg1 + 0x1d8c) = 0xbf800000
        *(arg1 + 0x1d98) = 0xbf800000
    label_75eb9e:
        *(arg1 + 0x1d94) = 0
        *(arg1 + 0x1d90) = 0xc0000000
        *(arg1 + 0x1d88) = 0
        *(arg1 + 0x1d84) = 0x40000000
        *(arg1 + 0x1d80) = 0
        *(arg1 + 0x1d78) = 0
        *(arg1 + 0x1d74) = 0x3f800000
        *(arg1 + 0x1d6c) = 0
        goto label_75ebee
    case 7
        *(arg1 + 0x1d8c) = 0
        *(arg1 + 0x1d98) = 0
        *(arg1 + 0x1d9c) = 0x40000000
        *(arg1 + 0x1da0) = 0
        *(arg1 + 0x1da4) = 0xbf800000
        *(arg1 + 0x1da8) = 0xc0000000
        *(arg1 + 0x1dac) = 0
        *(arg1 + 0x1db0) = 0xbf800000
        goto label_75eb9e

return result
