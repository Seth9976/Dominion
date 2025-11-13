// 函数: sub_63dc00
// 地址: 0x63dc00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* eax

if (arg2 s>= 0)
    eax = *arg1
    
    if (eax != 0 && *eax != 0)
        eax = sub_63d4e0(arg1)
        
        if (arg2 s< *(eax + 8))
            if (*(sub_63d4e0(arg1) + 4) s> 1)
                char* eax_2 = *arg1
                int32_t edx_1
                
                if (eax_2 == 0 || *eax_2 == 0)
                    edx_1 = 0
                else
                    eax_2 = sub_63d4e0(arg1)
                    edx_1 = *(eax_2 + 8)
                
                sub_63d5e0(eax_2, edx_1, arg1, 1)
                char* eax_3 = *arg1
                
                if (eax_3 != 0 && *eax_3 != 0)
                    (*(sub_63d4e0(arg1) + 8))[*arg1] = 0
                    int32_t eax_5
                    eax_5.b = arg3
                    arg2[*arg1] = eax_5.b
                    return eax_5
                
                **arg1 = 0
            
            char* eax_1
            eax_1.b = arg3
            arg2[*arg1] = eax_1.b
            return eax_1

sub_63b870(eax, &data_801800, "index >= 0 && index < Length()", "C:\x\ax2017\Engine\xString.cpp", 
    0x153, "XString::SetAsciiChar")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
