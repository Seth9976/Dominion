// 函数: sub_4bc380
// 地址: 0x4bc380
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_8 = arg1
int32_t eax = sub_4bc150(arg1, &var_8)

if (eax u> 0x12)
    sub_63b870(eax, &data_801800, "Halt", "C:\x\ax2017\Jams\Shared\TggGame\code\GameDialogs.cpp", 
        0x313, "GameCreateButtonState")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

switch (eax)
    case 0, 5, 0xf, 0x10, 0x11, 0x12
        return 1
    case 1
        return 0
    case 2
        return 2
    case 3
        return 3
    case 4
        if (arg1[0x15] == 1 && arg1[0x16] == var_8[6])
            int32_t ecx_1 = 0
            void* eax_6 = &arg1[0x18]
            
            while (true)
                int32_t edx_1 = *(eax_6 - 0xc)
                
                if (edx_1 != 1)
                    if (edx_1 == 2 && *(eax_6 - 8) == 0)
                        break
                else if (*eax_6 != 2)
                    break
                
                ecx_1 += 1
                eax_6 += 0x22c
                
                if (ecx_1 s>= 8)
                    return 5
        
        return 4
    case 6
        if (var_8 != 0)
            return 6
        
        return 1
    case 7
        if (var_8 == 0)
            return 1
        
        return 6
    case 8, 9, 0xa
        return 8
    case 0xb, 0xc, 0xd, 0xe
        return 7
