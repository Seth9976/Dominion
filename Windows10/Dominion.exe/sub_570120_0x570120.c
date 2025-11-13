// 函数: sub_570120
// 地址: 0x570120
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ecx
int32_t edx
ecx, edx = __chkstk(0x1998)
int32_t var_1c = 0
char var_20 = 0
int64_t arg_1c
__builtin_memset(&arg_1c, 0, 0x2c)
int128_t arg_48
int128_t* var_28 = &arg_48
arg_48 = edx.o
int128_t arg_58 = arg2.o
int128_t arg_68 = arg3.o
int32_t result_2
void arg_d00
__builtin_memcpy(&result_2, 
    sub_563960(&arg_d00, 0, ecx, &arg_d00, 1, 1, var_28, arg1, var_20, var_1c), 0xc84)

if (arg4 == 0)
    return 0

if (arg4 != 1)
    sub_591930()

void* eax_3 = sub_573400()
int32_t result = result_2
uint32_t edi = zx.d(result.w)
int32_t* ecx_1 = *(eax_3 + 4)
uint32_t eax_4 = *(eax_3 + 0xc)

if (edi u>= 0x320)
    sub_591930()

char var_1c_1 = 0
int32_t* __saved_ebp_1
__saved_ebp_1.q = 0
int64_t arg_10 = 0
int32_t arg_c = ecx_1[edi * 0x19 + 0x695]
int32_t __saved_ebp
int32_t* var_20_1 = &__saved_ebp
int32_t result_1 = result
sub_586320(&result_1, eax_4, ecx_1, &result_1, &arg_10, var_20_1, var_1c_1)
return result
