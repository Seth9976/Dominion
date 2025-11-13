// 函数: sub_4b0ca0
// 地址: 0x4b0ca0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
data_8db598 = 2
sub_4d46e0(1, 0)
data_8db5c0 = 0x27
int32_t* eax_2 = sub_4d46e0(5, 0)
void* ebx = data_cc8d5c
char const* const var_58
int32_t var_54
char const* const var_50_2
char* ecx

if (ebx != 0)
    eax_2 = sub_4bb050(ebx + 0x507c, arg1)
    void* ecx_2 = data_cc8d5c
    int32_t* var_20_1 = eax_2
    *(ebx + 0x5068) = 2
    *(ebx + 0x506c) = arg1
    
    if (ecx_2 == 0)
        goto label_4b0cee
    
    *(ecx_2 + 0x7590) = 0xffffffff
    eax_2 = sub_4b9480()
    int32_t* ebx_1 = eax_2
    int32_t edi_1 = 0
    
    if (ebx_1[0x46a] s> 0)
        void* esi_1 = &ebx_1[0x18]
        
        while (true)
            eax_2 = *(esi_1 - 4)
            
            if (eax_2 != 0x3e8 && eax_2 != 0x3e9)
                if (eax_2 != 1)
                label_4b0d81:
                    edi_1 += 1
                    esi_1 += 0x22c
                    
                    if (edi_1 s>= ebx_1[0x46a])
                        goto label_4b0e23
                    
                    continue
                else
                    eax_2 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
                    
                    if (*esi_1 != eax_2[0x1094])
                        goto label_4b0d81
            
            sub_4b0b30(ebx_1[edi_1 * 0x8b + 0x19])
            int32_t var_18 = 2
            *(ebx + 0xc) = 0
            *(ebx + 0x10) = 0
            eax_2 = data_cc8d5c
            
            if (eax_2 == 0)
                break
            
            int32_t eax_4 = eax_2[0x1d64]
            int32_t var_14 = eax_4
            int32_t var_c = 0
            int32_t var_10 = var_20_1[eax_4 * 6 + 0x472]
            void var_3c
            int128_t* eax_8 = sub_624070(&var_3c, &var_18, var_20_1, &var_3c, 0)
            int64_t var_2c = eax_8[1].q
            int32_t result
            result.b = (*eax_8).d != 1
            CookieCheckFunction(result)
            return result
        
        goto label_4b0cee
    
label_4b0e23:
    var_50_2 = "GameSetLocalWho"
    var_54 = 0x542
    var_58 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameClient.cpp"
    ecx = "Halt"
else
label_4b0cee:
    var_50_2 = "GetClient"
    var_54 = 0x7b
    var_58 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
    ecx = "gClient"

sub_63b870(eax_2, &data_801800, ecx, var_58, var_54, var_50_2)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
