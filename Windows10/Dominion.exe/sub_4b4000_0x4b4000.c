// 函数: sub_4b4000
// 地址: 0x4b4000
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* edx = data_cc8d5c
char const* const var_18
int32_t var_14
char const* const var_10
int32_t eax
char* ecx_1

if (edx != 0)
    eax = *(edx + 0x5028)
    
    if (eax s> 0)
        int32_t i_1 = 0
        int32_t i = 1
        
        if (eax s> 1)
            int32_t edi_1 = 0
            int32_t ecx_2 = 0x20
            
            do
                int32_t eax_1 = *(ecx_2 + edx + 0x44)
                int32_t temp0_1 = *(edi_1 + edx + 0x44)
                
                if (eax_1 u>= temp0_1
                        && (eax_1 u> temp0_1 || *(ecx_2 + edx + 0x40) u> *(edi_1 + edx + 0x40)))
                    i_1 = i
                    edi_1 = ecx_2
                
                i += 1
                ecx_2 += 0x20
            while (i s< *(edx + 0x5028))
        
        return edx + 0x28 + (i_1 << 5)
    
    var_10 = "MostRecentFriend"
    var_14 = 0xa7e
    var_18 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameClient.cpp"
    ecx_1 = "c.numFriends > 0"
else
    var_10 = "GetClient"
    var_14 = 0x7b
    var_18 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
    ecx_1 = "gClient"

sub_63b870(eax, &data_801800, ecx_1, var_18, var_14, var_10)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
