// 函数: sub_566c60
// 地址: 0x566c60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
uint32_t esi = *(eax + 0xc)
int32_t* ebx = *(eax + 4)
uint32_t eax_1 = zx.d(arg3.w)
uint32_t var_2c = eax_1

if (eax_1 u>= 0x320)
    sub_591930()
    eax_1 = var_2c

int32_t var_1c = ebx[eax_1 * 0x19 + 0x695]
uint32_t eax_5 = zx.d(arg4.w)
int32_t var_20 = arg3
var_2c = eax_5

if (eax_5 u>= 0x320)
    sub_591930()
    eax_5 = var_2c

var_2c = arg4
int32_t eax_7 = ebx[eax_5 * 0x19 + 0x695]
int32_t var_28 = eax_7
sub_5862a0(eax_7, arg3, ebx, arg2)
int64_t var_18 = 0
int64_t var_10 = 0
sub_586320(&var_20, esi, ebx, &var_20, &var_10, &var_18, arg5 | 8)
void* result = arg2

if (result s> 1)
    void* i_1 = result - 1
    var_10 = 0
    void* i
    
    do
        result = sub_586320(&var_20, esi, ebx, &var_20, &var_2c, &var_10, arg5 | 0xc)
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
