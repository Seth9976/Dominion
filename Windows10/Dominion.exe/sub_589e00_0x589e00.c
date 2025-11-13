// 函数: sub_589e00
// 地址: 0x589e00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
uint32_t edi_1 = zx.d((*arg4).w)

if (edi_1 u>= 0x320)
    sub_591930()

int32_t edx_1 = 0xd30

if (sub_5754f0(edi_1 * 0x64, arg3[edi_1 * 0x19 + 0x693], arg3, 0x2000000, 0) != 0)
    edx_1 = 0xd3d

int32_t* eax_4 = sub_589700(arg3, edx_1)
void* ecx_2 = *arg4
uint32_t edi_2 = zx.d(ecx_2.w)
void* var_c9c = ecx_2

if (edi_2 u>= 0x320)
    sub_591930()
    ecx_2 = var_c9c

arg3[edi_2 * 0x19 + 0x69b] |= 1
int32_t eax_6 = arg3[0x541]

if (eax_6 != 3 && eax_6 != 5 && eax_6 != 4 && eax_6 != 6)
    void* var_cd0_1 = ecx_2
    ecx_2.b = eax_6 == 2
    sub_61b1b0(eax_6, 0x21, ecx_2.b, 0xffffffff, var_cd0_1, 1, nullptr, nullptr, nullptr, 0, 0, 0, 
        0, 0)

int32_t edi_3 = *arg4
void* var_c98 = nullptr
var_c9c = nullptr
void* result = sub_582de0(0, edi_3, arg3, arg5)

if (result.b == 0)
    uint32_t var_c90
    uint32_t eax_8 = sub_590990(&var_c90, 0xffffffff, arg3, 5, &var_c90)
    
    if (eax_8 != 0)
        if (eax_8 != 1)
            sub_591930()
        
        eax_8 = var_c90
    
    if (edi_3 == eax_8)
        eax_8 = sub_591930()
    
    result = sub_5822e0(eax_8, 0xffffffff, arg3, edi_3, arg6, eax_4, nullptr, 0, 0, 0, 0, 0, 
        nullptr, 0, var_c98, var_c9c)

CookieCheckFunction(result)
return result
