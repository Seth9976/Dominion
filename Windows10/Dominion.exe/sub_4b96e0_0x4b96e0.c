// 函数: sub_4b96e0
// 地址: 0x4b96e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = data_cc8d5c
char const* const var_1c
int32_t var_18
char const* const var_14
char* ecx

if (eax != 0)
    if (*(eax + 0x5068) != 2 || *(arg3 + 0x28) == 3)
        eax.b = 0
        return eax
    
    int32_t edx = *(arg3 + 0x11a8)
    eax = nullptr
    
    if (edx s> 0)
        void* ecx_1 = arg3 + 0x64
        
        do
            if (*ecx_1 == arg2)
                int32_t esi_1 = eax * 0x22c
                int32_t eax_1 = 0
                
                if (*(esi_1 + arg3 + 0x68) == 4)
                    int32_t eax_3
                    int32_t edx_1
                    edx_1:eax_3 = muls.dp.d(0x10624dd3, sub_64b4d0(arg3 + 8))
                    int32_t edx_2 = edx_1 s>> 6
                    eax_1 = (edx_2 u>> 0x1f) + edx_2
                
                *arg4 = *(esi_1 + arg3 + 0x6c) - eax_1
                int32_t* eax_6
                
                if (*(esi_1 + arg3 + 0x68) == 4)
                    eax_6.b = 1
                    return eax_6
                
                eax_6.b = *(arg3 + 0x28) != 5
                return eax_6
            
            eax += 1
            ecx_1 += 0x22c
        while (eax s< edx)
    
    var_14 = "GameGetPlayer_2b"
    var_18 = 0x1312
    var_1c = "C:\x\ax2017\Jams\Shared\TggGame\code\GameClient.cpp"
    ecx = "Halt"
else
    var_14 = "GetClient"
    var_18 = 0x7b
    var_1c = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
    ecx = "gClient"

sub_63b870(eax, &data_801800, ecx, var_1c, var_18, var_14)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
