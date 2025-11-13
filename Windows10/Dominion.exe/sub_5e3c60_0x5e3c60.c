// 函数: sub_5e3c60
// 地址: 0x5e3c60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char const* const var_430_1
int32_t var_42c_1
char const* const var_428_1
void* eax
char* ecx_2

if (arg1 == 0)
    eax = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
    int32_t ecx_6 = *(eax + 0x58e8)
    
    if (ecx_6 s>= 0)
        if (ecx_6 == 0)
            void var_414
            void* eax_4 = sub_4b1150(&var_414)
            void var_20c
            __builtin_memcpy(&var_20c, eax_4, 0x204)
            int32_t var_c
            *(eax + 0x58e8) = var_c
            
            if (var_c s< 0)
                sub_63b870(eax_4, &data_801800, "source.numSmartplays >= 0", 
                    "C:\x\ax2017\Jams\Shared\TggGame\code\GameClient.cpp", 0x640, "CopySmartplays")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            memcpy(eax + 0x56e8, &var_20c, var_c << 3)
        
        return eax + 0x56e8
    
    var_428_1 = "GetSmartplays"
    var_42c_1 = 0x4bd1
    ecx_2 = "profile.smartplays.numSmartplays >= 0"
    var_430_1 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
else if (arg1 == 1)
    void* esi_1 = data_cc8d5c
    
    if (esi_1 != 0)
        return sub_4b9680(&sub_4b9480()[2], *(esi_1 + 0x7590)) + 0x28
    
    var_428_1 = "GetClient"
    var_42c_1 = 0x7b
    var_430_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
    ecx_2 = "gClient"
else
    var_428_1 = "GetSmartplays"
    var_42c_1 = 0x4be1
    ecx_2 = "Halt"
    var_430_1 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"

sub_63b870(eax, &data_801800, ecx_2, var_430_1, var_42c_1, var_428_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
