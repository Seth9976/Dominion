// 函数: sub_4f4440
// 地址: 0x4f4440
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg1
int32_t esi = *(arg2 + 0x50)
void* ecx_2 = (esi << 0x11) + &data_1779fb0
void* var_8_1 = ecx_2
int32_t eax = *((esi << 2) + &data_1839fb0)
int32_t var_1c_2
char const* const var_18_2
int32_t eax_3
char const* const ecx_3
uint32_t result

if (eax s>= *((esi << 2) + &data_1839fe0))
    eax_3 = *(arg1 + 0x1504)
    
    if (eax_3 == 3 || eax_3 == 5)
        if (*(arg1 + 0x151c) == 0)
            sub_4ec6a0(arg1, *(arg1 + 0x1518))
        
        sub_4f1fb0(arg1, arg2)
        eax_3 = sub_4ede20(*(arg1 + 0x1518), 0)
        void** ecx_11 = eax_3 + 8
        void** var_8_2 = ecx_11
        
        if (data_1779f88 != 0)
            var_8_2 = ecx_11
        label_4f45eb:
            void* edx_7 = *ecx_11
            
            if (edx_7 != 0)
                void* var_18_3 = arg2
                uint32_t eax_14 = sub_4f3ab0(eax_3, edx_7, arg1)
                
                if (eax_14.b != 0)
                    result = sub_4f3d60(eax_14, *var_8_2, arg1, arg2)
                    
                    if (result.b != 0)
                        return result
            
            sub_5939a0(0x1839ff8, arg2)
            eax_3 = longjmp(&data_18f8e20, 1)
        else
            eax_3 = *ecx_11
            
            if (eax_3 == *((esi << 2) + &data_1779f8c))
                goto label_4f45eb
        
        var_18_2 = "MCTS_MakeDecision"
        var_1c_2 = 0x158b
        ecx_3 = "entry->node == root[who]"
    else
        var_18_2 = "MCTS_MakeDecision"
        var_1c_2 = 0x157e
        ecx_3 = "g.simStyle == SIM_SIMULATION || g.simStyle == SIM_PUZZLE_SEARCH"
else
    int32_t edx = *(ecx_2 + (eax << 2))
    *((esi << 2) + &data_1839fb0) = eax + 1
    int32_t eax_2 = *(arg2 + 4)
    
    if (eax_2 == edx || eax_2 == 1 || edx == 9)
        *(arg2 + 4) = edx
        int32_t eax_4 = *((esi << 2) + &data_1839fb0)
        int32_t edx_1 = *(ecx_2 + (eax_4 << 2))
        *((esi << 2) + &data_1839fb0) = eax_4 + 1
        int32_t eax_6 = edx_1
        int32_t ebx_1 = *(arg2 + 4)
        *(arg2 + 0x6c) = edx_1
        
        if (ebx_1 != 5 && ebx_1 != 9)
            int32_t ebx_2 = 0
            
            if (edx_1 s> 0)
                void* edx_2 = arg2 + 0x70
                
                do
                    int32_t eax_7 = *((esi << 2) + &data_1839fb0)
                    edx_2 += 4
                    ebx_2 += 1
                    int32_t ecx_4 = *(ecx_2 + (eax_7 << 2))
                    *((esi << 2) + &data_1839fb0) = eax_7 + 1
                    *(edx_2 - 4) = ecx_4
                    eax_6 = *(arg2 + 0x6c)
                    ecx_2 = var_8_1
                while (ebx_2 s< eax_6)
        
        if (*(arg2 + 0xd10) != 0)
            int32_t i = 0
            
            if (eax_6 s> 0)
                void* ebx_3 = arg2 + 0xd00
                
                do
                    int32_t eax_9 = *((esi << 2) + &data_1839fb0)
                    ebx_3 += 4
                    i += 1
                    int32_t ecx_5 = *(ecx_2 + (eax_9 << 2))
                    *((esi << 2) + &data_1839fb0) = eax_9 + 1
                    *(ebx_3 - 4) = ecx_5
                    ecx_2 = var_8_1
                while (i s< *(arg2 + 0x6c))
        
        int32_t eax_11 = *((esi << 2) + &data_1839fb0)
        int32_t ecx_6 = *(var_8_1 + (eax_11 << 2))
        *((esi << 2) + &data_1839fb0) = eax_11 + 1
        *(arg2 + 0x40) = ecx_6
        int32_t eax_13 = *((esi << 2) + &data_1839fb0)
        int32_t ecx_7 = *(var_8_1 + (eax_13 << 2))
        result = eax_13 + 1
        *((esi << 2) + &data_1839fb0) = result
        *(arg2 + 0x68) = ecx_7
        return result
    
    int32_t var_18_1 = edx
    int32_t var_1c_1 = eax_2
    eax_3 = sub_4f7f30("choice mismatch %d %d\n")
    ecx_3 = "Halt"
    var_18_2 = "LogReadAction"
    var_1c_2 = 0x317
sub_63b870(eax_3, &data_801800, ecx_3, "C:\x\ax2017\Jams\Dominion\code\DomAIMCTS.cpp", var_1c_2, 
    var_18_2)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
