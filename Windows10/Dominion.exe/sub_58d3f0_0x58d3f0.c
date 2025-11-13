// 函数: sub_58d3f0
// 地址: 0x58d3f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
TEB* fsbase
void* eax_3 = *fsbase->ThreadLocalStoragePointer
arg1[0x683] = 0x3e8
*(eax_3 + 0xf010) = 0

if (arg1[0x548] s>= 0x320)
    sub_591930()

int32_t ecx = arg1[0x548]
void* edx_1 = ecx * 0x64 + arg1
arg1[0x548] = ecx + 1
*(edx_1 + 0x1a4c) = 0
*(edx_1 + 0x1a50) = 0
*(edx_1 + 0x1a70) = 0xffffffff
*(edx_1 + 0x1a78) = 0xffffffff
int32_t eax_5 = arg1[0x541]

if (eax_5 != 3 && eax_5 != 5 && eax_5 != 4 && eax_5 != 6)
    ecx.b = eax_5 == 2
    sub_61b1b0(eax_5, 0x1e, ecx.b, 0xffffffff, 0, arg1[0x34e], nullptr, nullptr, nullptr, 0, 0, 0, 
        0, 0)

int32_t eax_6 = arg1[0x541]

if (eax_6 != 3 && eax_6 != 5 && eax_6 != 4 && eax_6 != 6 && arg1[0x540].b == 0)
    int32_t eax_7 = 0xffffffff
    
    if (arg1[0x673] == 0xffffffff)
        eax_7 = arg1[0x674]
    
    sub_59f9b0(eax_7, 0xffffffff, arg1, eax_7, 5, 0, nullptr, 0, 0, 0, 0, 0)

void var_60
memset(&var_60, 0, 0x50)
sub_58ca10(arg1, &var_60)
sub_58d010(arg1, &var_60)
arg1[0x671] = 0xffffffff
arg1[0x34e]
int32_t temp1 = mods.dp.d(1, arg1[0x34e])
arg1[0x672] = 0xffffffff
arg1[0x673] = 0
arg1[0x674] = 0
arg1[0x675] = temp1
arg1[0x677] = 0
arg1[0x66b] = 0x64
sub_58c7d0(arg1)
void* result = sub_58bee0()
CookieCheckFunction(result)
return result
