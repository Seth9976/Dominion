// 函数: sub_511430
// 地址: 0x511430
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg1
void* eax = data_cca780
data_cca790 = arg1
int32_t* eax_2

if (arg1 != 2)
    eax_2 = eax + (arg1 << 3) + 0x5010
else
    eax_2 = eax + 0x540 + (data_cca784 << 0xb)

if (*eax_2 == 0x8fc)
    sub_518ef0()

int32_t eax_5 = sub_516f30(sub_511230(arg1, arg2))
int32_t i = *(eax_5 + 8)
int32_t var_1c
char const* const var_18
char* ecx_5

if (i != 0x325)
    if (i != 0x324)
        var_18 = "ApplyMissionTheme"
        var_1c = 0x1276
    else
        i = 0
        int32_t* ecx_6 = eax_5 + 0xc
        
        do
            if (*ecx_6 == 1)
                return (*(i * 0x26c + eax_5 + 0x10))()
            
            i += 1
            ecx_6 = &ecx_6[0x9b]
        while (i s< 4)
        
    label_511541:
        var_18 = "CampaignPieceDefGetFn"
        var_1c = 0x30a
    
    ecx_5 = "Halt"
else
    int32_t ecx_2 = 0
    int32_t edx_1 = eax_5
    int32_t var_8_1
    int32_t edx_2
    int32_t ebx_1
    int32_t edi_1
    
    while (true)
        if (*(edx_1 + 0xc) == 3)
            i = ecx_2 * 0x26c
            edx_2 = edx_1 + 0x10
            edi_1 = 0
            var_8_1 = edx_2
            ebx_1 = *(i + eax_5 + 0x270)
            
            if (ebx_1 s> 0)
                break
        else
            ecx_2 += 1
            edx_1 += 0x26c
            
            if (ecx_2 s< 4)
                continue
        
        return i
    
    while (true)
        i = sub_516f30(*(edx_2 + (edi_1 << 2)))
        
        if (*(i + 8) != 0x7d0)
            break
        
        int32_t ecx_4 = 0
        int32_t* edx_3 = i + 0xc
        
        while (true)
            if (ecx_4 s>= 4)
                goto label_511541
            
            if (*edx_3 == 1)
                int32_t eax_8 = (*(ecx_4 * 0x26c + i + 0x10))()
                edx_2 = var_8_1
                edi_1 += 1
                
                if (edi_1 s< ebx_1)
                    break
                
                return eax_8
            
            ecx_4 += 1
            edx_3 = &edx_3[0x9b]
    
    var_18 = "ApplyMissionTheme"
    var_1c = 0x1269
    ecx_5 = "def.type == CTHEME_PIECE"

sub_63b870(i, &data_801800, ecx_5, "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", var_1c, 
    var_18)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
