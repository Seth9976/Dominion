// 函数: sub_64c870
// 地址: 0x64c870
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = *(arg1 + 0x189c)
void* ecx = arg1 + 0x189c
int32_t var_20
char const* const ecx_1

if (eax s>= 0)
    void* ebx_1 = arg2
    
    if (ebx_1 s>= 0)
        if (eax != 0)
            arg2 = ecx
            
            if (ebx_1 s< eax)
                if (*(sub_64e7a0(*(arg1 + (ebx_1 << 2) + 0x179c)) + 0x15e4) == ebx_1)
                    return *(arg1 + (ebx_1 << 2) + 0x179c)
                
                arg2 = arg1 + 0x189c
                ecx = arg1 + 0x189c
            
            int32_t i = 0
            
            if (*ecx s> 0)
                void* edi_1 = arg1 + 0x179c
                
                do
                    if (*(sub_64e7a0(*edi_1) + 0x15e4) == ebx_1)
                        return *(arg1 + (i << 2) + 0x179c)
                    
                    i += 1
                    edi_1 += 4
                while (i s< *arg2)
        
        return 0
    
    char const* const var_1c_1 = "UI2::at"
    var_20 = 0xb75
    ecx_1 = "idx >= 0"
else
    char const* const var_1c = "UI2::at"
    var_20 = 0xb74
    ecx_1 = "numChildren >= 0"

sub_63b870(eax, &data_801800, ecx_1, "C:\x\ax2017\Engine\UI2.cpp", var_20, "UI2::at")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
