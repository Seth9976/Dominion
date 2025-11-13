// 函数: sub_5e9670
// 地址: 0x5e9670
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_8 = arg1
int32_t* edx = arg1[5]

if (edx s>= arg1[4])
    int32_t eax
    eax.b = 0
    return eax

void* eax_2 = *(edx + *arg1)
*(arg2 + 4) = eax_2
int32_t* edx_2 = arg1[5] + 4
arg1[5] = edx_2

if (edx_2 s< arg1[4])
    *(arg2 + 0x6c) = *(edx_2 + *arg1)
    void** edi_2 = arg1[5] + 4
    arg1[5] = edi_2
    void** edx_3 = edi_2
    eax_2 = *(arg2 + 4)
    
    if (eax_2 != 5 && eax_2 != 9)
        int32_t i = 0
        
        if (*(arg2 + 0x6c) s> 0)
            eax_2 = arg2 + 0x70
            void* var_8_1 = eax_2
            
            do
                if (edi_2 s>= arg1[4])
                    goto label_5e9782
                
                i += 1
                eax_2 = *(edi_2 + *arg1)
                void** edi_3 = var_8_1
                *edi_3 = eax_2
                edx_3 = arg1[5] + 4
                var_8_1 = &edi_3[1]
                arg1[5] = edx_3
                edi_2 = edx_3
            while (i s< *(arg2 + 0x6c))
    
    void** edi_5 = edx_3
    
    if (*(arg2 + 0xd10) != 0)
        int32_t i_1 = 0
        
        if (*(arg2 + 0x6c) s> 0)
            eax_2 = arg2 + 0xd00
            void* var_8_2 = eax_2
            
            do
                if (edx_3 s>= arg1[4])
                    goto label_5e9782
                
                i_1 += 1
                eax_2 = *(edx_3 + *arg1)
                void** edx_5 = var_8_2
                *edx_5 = eax_2
                edi_5 = arg1[5] + 4
                var_8_2 = &edx_5[1]
                arg1[5] = edi_5
                edx_3 = edi_5
            while (i_1 s< *(arg2 + 0x6c))
    
    if (edi_5 s< arg1[4])
        eax_2 = *(edi_5 + *arg1)
        *(arg2 + 0x40) = eax_2
        int32_t* edx_8 = arg1[5] + 4
        arg1[5] = edx_8
        
        if (edx_8 s< arg1[4])
            *(arg2 + 0x68) = *(edx_8 + *arg1)
            int32_t eax_9
            eax_9.b = 1
            arg1[5] += 4
            return eax_9

label_5e9782:
sub_63b870(eax_2, &data_801800, "Halt", "C:\x\ax2017\Jams\Shared\TggGame\code\GameSave.cpp", 0x30, 
    "LogReadInt")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
