// 函数: sub_4aea20
// 地址: 0x4aea20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_8 = ecx
void* edi = data_cc8dc4
char const* const var_20
int32_t var_1c
char const* const var_18
void* result
char* ecx_1

if (edi != 0)
    result = data_cc8d5c
    
    if (result != 0)
        int32_t eax = *(result + 0x14)
        void* edx = data_147abf4
        
        if (eax != 0)
            uint32_t ecx_2 = zx.d(eax.w)
            
            if (ecx_2 u< *(edx + 4))
                int128_t* ecx_4 = ecx_2 * 0x64 + *edx
                
                if (ecx_4[6].d == eax && ecx_4 != 0)
                    sub_6892c0(ecx_4)
        
        int16_t esi = (*(edi + 8)).w
        char* edi_1 = *(edi + 0x10)
        int32_t* eax_1 = sub_689090()
        
        if (sub_688df0(eax_1, edi_1, eax_1, esi) == 0)
            sub_6892c0(eax_1)
            *(result + 0x14) = 0
            *(result + 0x18) = 1
            return result
        
        if (eax_1 == 0)
            *(result + 0x14) = 0
            *(result + 0x18) = 1
            return result
        
        int32_t ecx_7 = eax_1[0x18]
        eax_1[9] = 1
        eax_1[0xe] = 1
        eax_1[0xf] = 2
        *(result + 0x14) = ecx_7
        *(result + 0x18) = 1
        return result
    
    var_18 = "GetClient"
    var_1c = 0x7b
    var_20 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
    ecx_1 = "gClient"
else
    var_18 = "GetChannelSettings"
    var_1c = 0x601
    var_20 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp"
    ecx_1 = "gGameSettings.channelSettings"

sub_63b870(result, &data_801800, ecx_1, var_20, var_1c, var_18)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
