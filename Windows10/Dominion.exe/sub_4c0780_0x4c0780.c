// 函数: sub_4c0780
// 地址: 0x4c0780
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t i = data_8dbc50
int32_t var_10
char const* const var_c_1
void* eax
char* ecx

if (i s>= 0)
    eax = data_cc8dc8
    int32_t ecx_1 = *(eax + 0x1e1a0)
    
    if (i s>= ecx_1)
        var_c_1 = "DeleteProfileBySlot"
        var_10 = 0x665
        ecx = "slot < gGameSettings.profileSettings->numProfiles"
    else if (ecx_1 != 1)
        void* edi_1 = i * 0x7868
        char** ecx_2 = edi_1 + eax
        
        if (ecx_2 != 0)
            eax = *(eax + 0x1e1a4)
            
            if (eax != ecx_2[0x10ac])
                sub_4d6d10(ecx_2)
                void* ecx_3 = data_cc8dc8
                
                while (i s< *(ecx_3 + 0x1e1a0) - 1)
                    void* ecx_4 = ecx_3 + edi_1
                    sub_4d9890(ecx_4, ecx_4 + 0x7868)
                    ecx_3 = data_cc8dc8
                    i += 1
                    edi_1 += 0x7868
                
                *(ecx_3 + 0x1e1a0) -= 1
                data_cc8dc8
                return sub_4d8ad0(arg1) __tailcall
            
            var_c_1 = "DeleteProfileBySlot"
            var_10 = 0x667
            ecx = "gGameSettings.profileSettings->activeProfileIndex != GetProfileBySlot(slot).profileIndex"
        else
            var_c_1 = "GetProfileBySlot"
            var_10 = 0x544
            ecx = "retval"
    else
        var_c_1 = "DeleteProfileBySlot"
        var_10 = 0x666
        ecx = "gGameSettings.profileSettings->numProfiles != 1"
else
    var_c_1 = "DeleteProfileBySlot"
    var_10 = 0x664
    ecx = "slot >= 0"

sub_63b870(eax, &data_801800, ecx, "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp", var_10, 
    var_c_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
