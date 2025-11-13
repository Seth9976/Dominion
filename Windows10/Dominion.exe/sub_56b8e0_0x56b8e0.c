// 函数: sub_56b8e0
// 地址: 0x56b8e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

*arg2 = 0
*arg4 = 0
*arg5 = 0
int32_t eax = *arg6
int32_t var_20
char const* const ecx_2

if (eax u> 4)
    char const* const var_1c_3 = "ToAssociatedCards"
    var_20 = 0x10ca
    ecx_2 = "Halt"
else
    switch (eax)
        case 0
            return eax
        case 1
            *arg2 = 0
            
            if (arg6[0x321] == 1)
                int32_t eax_3 = arg6[1]
                *arg4 = eax_3
                return eax_3
            
            char const* const var_1c = "ToAssociatedCards"
            var_20 = 0x10bb
            ecx_2 = "assoc.numCards == 1"
        case 2
            *arg2 = 0
            
            if (arg6[0x321] == 1)
                eax = arg6[1]
                *arg5 = eax
                return eax
            
            char const* const var_1c_1 = "ToAssociatedCards"
            var_20 = 0x10c0
            ecx_2 = "assoc.numCards == 1"
        case 3
            *arg2 = 0
            
            if (arg6[0x321] == 2)
                *arg4 = arg6[1]
                int32_t eax_5 = arg6[2]
                *arg5 = eax_5
                return eax_5
            
            char const* const var_1c_2 = "ToAssociatedCards"
            var_20 = 0x10c5
            ecx_2 = "assoc.numCards == 2"
        case 4
            int32_t i = 0
            *arg4 = 0
            
            if (arg6[0x321] s> 0)
                void* ecx_1 = arg3
                void* edi_1 = &arg6[1]
                
                do
                    int32_t eax_1 = *edi_1
                    *arg2 = eax_1
                    int32_t* eax_2 = zx.d(eax_1.w)
                    
                    if (eax_2 u>= 0x320)
                        sub_591930()
                        ecx_1 = arg3
                    
                    eax = eax_2 * 0x64
                    i += 1
                    edi_1 += 4
                    arg2 = ecx_1 + 0x1aa8 + eax
                while (i s< arg6[0x321])
            
            *arg2 = 0
            return eax

sub_63b870(eax, &data_801800, ecx_2, "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", var_20, 
    "ToAssociatedCards")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
