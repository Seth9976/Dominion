// 函数: sub_50f7a0
// 地址: 0x50f7a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebx = data_cc8de0
int32_t edi = data_cc8de4
int32_t var_10 = 0x92a
int32_t var_c = 0x92b
int32_t var_8 = 0x929
int32_t eax
int32_t edx
eax, edx = __allmul(ebx, edi, 0x4c957f2d, 0x5851f42d)
bool c = eax + data_cc8de8 u< eax
data_cc8de0 = eax + data_cc8de8
data_cc8de4 = adc.d(edx, data_cc8dec, c)
int32_t esi_3 = ror.d(edi u>> 0xd ^ (ebx u>> 0x1b | edi << 5), (edi u>> 0x1b).b)
uint32_t result = esi_3 u/ 3 * 3
int32_t edi_1 = (&var_10)[esi_3 u% 3]
int32_t var_24
char const* const var_20
char* ecx_4

if (edi_1 s> 0x1388)
    var_20 = "Bell_ExoticStart_Shelter"
    var_24 = 0xf14
    ecx_4 = "what <= 5000"
else
    int32_t esi_5 = 0
    
    if (edi_1 s<= 0)
        var_20 = "Bell_ExoticStart_Shelter"
        var_24 = 0xf15
        ecx_4 = "what > 0"
    else
        while (true)
            result = 0
            
            while (true)
                if (result s>= 0x280)
                    var_20 = "CampaignAddExtra"
                    var_24 = 0x242
                    ecx_4 = "Halt"
                    goto label_50f8b4
                
                int32_t* ecx_3 = (data_cca784 << 0xb) + data_cca780 + 0x58c + result
                
                if (*ecx_3 == 0)
                    esi_5 += 1
                    *ecx_3 = 0xdb2
                    ecx_3[1] = edi_1
                    ecx_3[2] = 0xffffffff
                    ecx_3[3] = 0
                    ecx_3[4] = 0
                    
                    if (esi_5 s< 3)
                        break
                    
                    return result
                
                result += 0x14

label_50f8b4:
sub_63b870(result, &data_801800, ecx_4, "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 
    var_24, var_20)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
