// 函数: sub_56e890
// 地址: 0x56e890
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
uint32_t ebx_1 = zx.d(arg3.w)
void* result = *(eax + 4)
void* result_1 = result

if (ebx_1 u>= 0x320)
    result = sub_591930()

void* edx = ebx_1 * 0x64
ebx_1.b = arg4
void* edx_1 = edx + result_1
int32_t ecx = *(edx_1 + 0x1a6c)
void* ecx_1

if (ebx_1.b == 0)
    result = not.d(arg2)
    ecx_1 = ecx & result
else
    ecx_1 = ecx | arg2

*(edx_1 + 0x1a6c) = ecx_1
uint32_t eax_2
int32_t ecx_2

if (arg2 == 0x10)
    result = *(eax + 4)
    ecx_2 = *(result + 0x1504)
    
    if (ecx_2 != 3 && ecx_2 != 5 && ecx_2 != 4 && ecx_2 != 6)
        int32_t var_3c_1
        __builtin_memset(&var_3c_1, 0, 0x1c)
        eax_2 = zx.d(ebx_1.b)
        ecx_2.b = ecx_2 == 2
        return sub_61b1b0(eax_2, 0x16, ecx_2.b, *(eax + 0xc), arg3, 5, eax_2, nullptr, nullptr, 0, 
            0, 0, 0, 0)
else if (arg2 == 0x20)
    result = *(eax + 4)
    ecx_2 = *(result + 0x1504)
    
    if (ecx_2 != 3 && ecx_2 != 5 && ecx_2 != 4 && ecx_2 != 6)
        int32_t var_3c
        __builtin_memset(&var_3c, 0, 0x1c)
        eax_2 = zx.d(ebx_1.b)
        ecx_2.b = ecx_2 == 2
        return sub_61b1b0(eax_2, 0x16, ecx_2.b, *(eax + 0xc), arg3, 6, eax_2, nullptr, nullptr, 0, 
            0, 0, 0, 0)
else if (arg2 != 0x80)
    sub_63b870(result, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 
        0x19ed, "SetCardFlag")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn
return result
