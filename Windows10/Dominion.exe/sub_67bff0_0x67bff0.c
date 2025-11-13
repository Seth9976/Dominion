// 函数: sub_67bff0
// 地址: 0x67bff0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_8 = ecx
int32_t eax
char* edx
uint32_t eax_2 = sub_64e7a0(sub_66b2b0(eax, edx, ecx, 0xffffffff))
void* edx_1 = nullptr

if (arg2 s>= 0)
    edx_1 = arg2

int32_t ecx_3 = *(eax_2 + 0x189c)

if (ecx_3 s< 0)
    sub_63b870(eax_2, &data_801800, "numChildren >= 0", "C:\x\ax2017\Engine\UI2.cpp", 0xba8, 
        "UI2::countChildren")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

if (ecx_3 == 0)
    *arg1 = data_bf21e8
    arg1[1] = data_bf21f8
    return arg1

uint32_t eax_5 = sub_64e7a0(sub_64c870(eax_2, edx_1))
*arg1 = *(eax_5 + 0x1620)
arg1[1] = *(eax_5 + 0x1630)
return arg1
