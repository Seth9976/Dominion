// 函数: sub_599bd0
// 地址: 0x599bd0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = *arg4
int32_t var_24
char const* const var_20
void* eax_3
char* ecx
char* ecx_1
int32_t edx_1

if (eax == 0)
    int32_t eax_4 = arg4[1]
    
    if (eax_4 == 1)
        edx_1 = 0x93
    label_599c55:
        ecx_1 = arg2
    label_599c57:
        eax_3 = sub_599650(ecx_1, edx_1)
        goto label_599c5e
    
    eax_3 = eax_4 - 2
    
    if (eax_4 == 2)
        edx_1 = 0x94
        goto label_599c55
    
    var_20 = "GetResLikeTranslation"
    var_24 = 0x589
    ecx = "Halt"
else if (eax == 1)
    int32_t edx_2 = arg4[1]
    ecx_1 = arg2
    
    if (edx_2 == 0x1000)
        edx_1 = 0x95
        goto label_599c57
    
    eax_3 = sub_599780(ecx_1, edx_2)
label_599c5e:
    
    if (eax_3 != 0)
        int32_t var_20_1 = arg5
        char* eax_6 = sub_693050(arg2, eax_3)
        char* eax_7 = sub_693100(arg6, arg7, 0)
        sub_598720(eax_7, arg2, arg3, eax_7, arg6, eax_6)
        return arg3
    
    var_20 = "GetResLikeName"
    var_24 = 0x5b7
    ecx = &data_8248d4
else
    eax_3 = eax - 3
    
    if (eax == 3)
        edx_1 = 0x92
        goto label_599c55
    
    var_20 = "GetResLikeTranslation"
    var_24 = 0x58c
    ecx = "Halt"
sub_63b870(eax_3, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\DomLog.cpp", var_24, var_20)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
