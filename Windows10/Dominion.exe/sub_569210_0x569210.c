// 函数: sub_569210
// 地址: 0x569210
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ecx
int32_t edx
ecx, edx = __chkstk(0x1978)
void arg_58
__builtin_memcpy(arg1, sub_568780(&arg_58, edx, 0x3ea, &arg_58), 0xc84)
int32_t ecx_1 = *(arg1 + 0xc80)

if (ecx_1 == 0)
    return arg1

int32_t edx_1 = ecx
int32_t var_1c_1 = 0
var_4.q = 0
char var_20_1 = 0

if (edx_1 s> ecx_1)
    edx_1 = ecx_1

int64_t arg_c
__builtin_memset(&arg_c, 0, 0x1c)
int32_t var_24_1 = 0xe
int128_t arg_28
int128_t* var_28_1 = &arg_28
arg_28 = 0x17.o
int128_t arg_38 = edx_1.o
int128_t arg_48 = arg2.o
void arg_ce0
__builtin_memcpy(&arg_58, 
    sub_563960(arg1, edx_1, arg1, &arg_ce0, edx_1, 0xe, var_28_1, var_24_1, var_20_1, var_1c_1), 
    0xc84)
__builtin_memcpy(0, &arg_58, 0xc84)
uint32_t eax_4 = *0xc80

if (eax_4 != 0)
    int32_t i = 0
    
    if (eax_4 s> 0)
        do
            eax_4 = sub_5695c0(eax_4, 0x3ea, *(i << 2), 0xb)
            i += 1
        while (i s< *0xc80)

return nullptr
