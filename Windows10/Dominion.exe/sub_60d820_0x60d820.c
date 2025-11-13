// 函数: sub_60d820
// 地址: 0x60d820
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ebp
void* var_4 = ebp
void* eax
int32_t ecx
int32_t edx
eax, ecx, edx = __chkstk(0x332c)

if (edx u> 7)
    sub_63b870(eax, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 0xb020, 
        "ExpIsSelected")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

switch (edx)
    case 0
        void* eax_3 = sub_4bbdb0()
        *(eax_3 + 0x28)
        *(eax_3 + 0x30)
        int32_t* arg_4
        void arg_1994
        memcpy(&arg_4, sub_4deeb0(&arg_1994), 0x1990)
        void arg_9cc
        eax = &arg_9cc
        
        for (int32_t i = 0; i s< 0x20; )
            if (*eax == ecx)
                int32_t* ecx_6 = arg_4
                
                if (ecx_6 != 0)
                    int32_t arg_9d0[0x3f1]
                    
                    if (ecx == 0x13)
                        *ecx_6 = 0
                    else
                        *ecx_6 = arg_9d0[i * 4]
                
                int32_t edx_3 = i * 2
                ecx_6.b = 0x20
                arg_9d4
                arg_9d8
                
                if (__aullshr(*(&arg_9d4 + (edx_3 << 3)), *(&arg_9d8 + (edx_3 << 3)), ecx_6.b)
                        != 0xa)
                    break
                
                eax.b = 1
                return eax
            
            i += 1
            eax += 0x10
        
        eax.b = 0
        return eax
    case 1, 2
        eax.b = data_ccf6f0 == ecx
        return eax
    case 3
        eax.b = data_ccf6a8 == ecx
        return eax
    case 4
        eax.b = data_ccf6cc == ecx
        return eax
    case 5
        return sub_60eae0(*(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x71e8), ecx)
    case 6
        eax.b = 0
        return eax
    case 7
        if (ecx != 2)
            if (ecx != 0x13)
                eax = sub_4daf40(&var_4, &__return_addr)
                int32_t esi_1 = 0
                
                if (eax s> 0)
                    while (true)
                        char eax_13 = sub_4db700(*(var_4 + (esi_1 << 2)), ecx)
                        
                        if (eax_13 != 0)
                            break
                        
                        esi_1 += 1
                        
                        if (esi_1 s>= eax)
                            return eax_13
                    
                    return sub_60eae0(*(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x423c), ecx) ^ 1
            else if (sub_4dada0().b != 0)
                return sub_60eae0(*(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x423c), ecx) ^ 1
        
        eax.b = 0
        return eax
