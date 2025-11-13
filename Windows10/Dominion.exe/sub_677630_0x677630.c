// 函数: sub_677630
// 地址: 0x677630
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_8 = arg1
int32_t i = 0
int32_t eax

if (arg1[2] s> 0)
    int32_t edi_1 = 0
    
    do
        eax = _stricmp(sub_6dd140(eax, *arg1 + edi_1, &data_8cae70, 0x64), arg2)
        
        if (eax == 0)
            return *arg1 + i * 0x18
        
        i += 1
        edi_1 += 0x18
    while (i s< arg1[2])

sub_63b870(eax, &data_801800, "Halt", "C:\x\ax2017\Engine\UI2.cpp", 0x539e, "FindElement")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
