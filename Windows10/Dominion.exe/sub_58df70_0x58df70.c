// 函数: sub_58df70
// 地址: 0x58df70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edx = 0
int32_t i = 0
int32_t* esi_1 = data_cce9c8 + 0xa0

do
    int32_t ecx = *esi_1
    
    if (ecx == 0)
        break
    
    i += 1
    int32_t eax = edx + 1
    esi_1 = &esi_1[0x12]
    
    if (ecx != 1)
        eax = edx
    
    edx = eax
while (i s< 4)

int32_t esi_4 = arg4
int32_t ebx_1 = arg2 + edx

if (ebx_1 s> 4)
    ebx_1 = 4

int32_t* result
int32_t* result_1
int32_t* result_2

if ((esi_4 | arg5) == 0)
    void* result_3 = nullptr
    result_1 = data_cce9b8
    int32_t eax_8 = *arg3
    
    if (eax_8 - result_1 s>= 0)
        result_3 = eax_8 - result_1
    
    result = ebx_1 - result_1
    result_2 = result_3
    
    if (result_3 s>= result)
        result_2 = result
else
    int32_t esi_3 = sub_58df00(esi_4, arg5) - sub_58de90(arg4, arg5)
    result_1 = nullptr
    int32_t eax_6 = *arg3
    result = eax_6 - esi_3
    esi_4 = arg4
    
    if (eax_6 - esi_3 s>= 0)
        result_1 = result
    
    result_2 = ebx_1 - data_cce9b8
    
    if (result_1 s< result_2)
        result_2 = result_1

if (result_2 s<= 0)
    return result

int32_t var_24_3
char const* const var_20_4
char* ecx_3
void* esi_5

if (esi_4 != 0 || (arg5 != 0x40 && (esi_4 != 0 || arg5 != 0x800)))
    esi_5 = data_cce9c0
label_58e0ea:
    
    while (true)
        if (*(esi_5 + 0x2588) != 0 || *(esi_5 + 0xc80) != 0 || *(esi_5 + 0x1904) != 0)
            int32_t eax_11
            int32_t edx_3
            eax_11, edx_3 = sub_58dcc0(result, data_cce9bc, esi_5, 1)
            void* eax_13 = sub_571b30(edx_3, data_cce9b0)
            
            if (((*(eax_13 + 0x98) & 0x7f000400) | (*(eax_13 + 0x9c) & 0x940)) == 0)
            label_58e16d:
                result = *(esi_5 + 0x3e8c)
                
                if (result s>= 0x320)
                    break
                
                *(esi_5 + (result << 3) + 0x258c) = eax_11
                *(esi_5 + (result << 3) + 0x2590) = edx_3
                *(esi_5 + 0x3e8c) += 1
            else if ((arg4 | arg5) == 0)
                result = sub_58f080(edx_3, 0)
                result_2 -= 1
            else
                void* eax_16 = sub_571b30(edx_3, data_cce9b0)
                
                if (((arg4 & *(eax_16 + 0x98)) | (*(eax_16 + 0x9c) & arg5)) == 0)
                    goto label_58e16d
                
                result = sub_58f080(edx_3, 0)
                result_2 -= 1
            
            if (result_2 != 0)
                continue
        
        return sub_58dd90(esi_5)
    
    var_20_4 = "RandomizerDeck_Reject"
    var_24_3 = 0x4140
    ecx_3 = "deck.numRejects < MAX_CARDS"
else
    data_1a86e30 = 0
    data_1a87ab4 = 0
    data_1a88738 = 0
    data_1a8a03c = 0
    
    if (esi_4 == 0)
        int32_t edx_1
        
        if (arg5 != 0x40)
            if (esi_4 != 0 || arg5 != 0x800)
                goto label_58e0b7
            
            int32_t var_20_3 = 2
            edx_1 = esi_4 + 0x12
        else
            int32_t var_20_2 = 1
            edx_1 = esi_4 + 0x10
        
        result = sub_58d7a0(result, edx_1, data_cce9c8, &data_1a861b0, &data_1a86e30, 1, 1, 
            result_1, data_cce9b0, esi_4, arg5.b)
        esi_5 = &data_1a861b0
        goto label_58e0ea
    
label_58e0b7:
    var_20_4 = "MakeSpecificLandscapeDeck"
    var_24_3 = 0x420f
    ecx_3 = "Halt"
sub_63b870(result, &data_801800, ecx_3, "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", var_24_3, 
    var_20_4)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
