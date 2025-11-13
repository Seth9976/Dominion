// 函数: sub_5820c0
// 地址: 0x5820c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
uint32_t var_c8c
uint32_t eax_4 = sub_590990(&var_c8c, 0xffffffff, arg3, 5, &var_c8c)

if (eax_4 != 0)
    if (eax_4 != 1)
        sub_591930()
    
    eax_4 = var_c8c

int32_t arg_4

if (arg_4 == eax_4)
    sub_591930()

uint32_t eax_6 = sub_590990(&var_c8c, 0xffffffff, arg3, 5, &var_c8c)

if (eax_6 != 0)
    if (eax_6 != 1)
        sub_591930()
    
    eax_6 = var_c8c

if (arg5 == eax_6)
    eax_6 = sub_591930()

uint32_t eax_7 = sub_582de0(eax_6, arg_4, arg3, arg4)

if (eax_7.b != 0)
    eax_7.b = 0
    CookieCheckFunction(eax_7)
    return eax_7

sub_578d00(
    sub_578d00(sub_5723a0(sub_581bd0(eax_7, arg_4, arg3, arg2, arg7, 0), arg_4, arg3, arg12), arg2, 
        arg3, arg_4, nullptr, nullptr, nullptr), 
    arg2, arg3, arg_4, 7, nullptr, nullptr)
uint32_t eax_11 = zx.d(arg_4.w)

if (eax_11 u>= 0x320)
    sub_591930()

void* edx_6 = eax_11 * 0x64 + arg3
*(edx_6 + 0x1a50) = 0x474
int32_t ecx_8 = arg3[0x66b]
arg3[0x66b] = ecx_8 + 1
*(edx_6 + 0x1a54) = ecx_8
*(edx_6 + 0x1a68) = arg5
*(edx_6 + 0x1aa4) = 0

if (arg2 != 0xffffffff)
    *(edx_6 + 0x1a74) = arg2

*(edx_6 + 0x1a70) = arg2
*(edx_6 + 0x1a78) = arg2
int32_t eax_13 = arg3[0x541]

if (eax_13 != 3 && eax_13 != 5 && eax_13 != 4 && eax_13 != 6)
    ecx_8.b = eax_13 == 2
    sub_61b1b0(eax_13, 0xa, ecx_8.b, arg2, arg_4, arg5, nullptr, nullptr, arg6, 0, 0, 0, arg8, arg9)

if (arg10 != 1)
    uint32_t esi_1 = zx.d(arg5.w)
    
    if (esi_1 u>= 0x320)
        sub_591930()
    
    sub_5716d0(&arg_4, (zx.d(sub_582040(arg7)) ^ 1) + 0x29, arg3, arg2, 0, &arg_4, 1, 
        arg3[esi_1 * 0x19 + 0x693], arg11, 0, 0)

if (arg4 - 1 u<= 0x47)
    sub_56de40(arg3, arg4)

void* eax_17
eax_17.b = 1
CookieCheckFunction(eax_17)
return eax_17
