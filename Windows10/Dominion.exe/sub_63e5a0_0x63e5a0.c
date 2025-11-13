// 函数: sub_63e5a0
// 地址: 0x63e5a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* edx = *arg1

if (edx == 0)
    return 

int32_t eax = arg1[1]
int32_t var_c
char const* const var_8

if (eax == 0)
    var_8 = "TrimL"
    var_c = 0x256
label_63e616:
    sub_63b870(eax, &data_801800, "token.len != 0", "C:\x\ax2017\Engine\xString.cpp", var_c, var_8)
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

char* ecx = edx

while (*edx == 0x20)
    edx = &edx[1]
    int32_t temp0_1 = eax
    eax -= 1
    ecx = edx
    *arg1 = edx
    arg1[1] = eax
    
    if (temp0_1 == 1)
        goto label_63e5f5

if (edx == 0)
    return 

if (eax == 0)
    var_8 = "TrimR"
    var_c = 0x26b
    goto label_63e616

if (edx[eax - 1] != 0x20)
    return 

while (true)
    int32_t temp1_1 = eax
    eax -= 1
    arg1[1] = eax
    
    if (temp1_1 == 1)
        break
    
    if (ecx[eax - 1] != 0x20)
        return 

label_63e5f5:
*arg1 = 0
