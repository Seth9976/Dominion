// 函数: sub_4b4e70
// 地址: 0x4b4e70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t var_18 = *(arg2 + 0x10)
int32_t eax_3 = *(arg2 + 0x14)
int32_t var_20 = arg1
int32_t ecx = *(arg2 + 0xc)
int32_t var_14 = eax_3
void* eax_4 = *(arg2 + 8)
int32_t var_c = ecx
void* var_10 = eax_4
char const* const var_30
int32_t var_2c
char const* const var_28_1
char* ecx_1

if (ecx != 0xffffffff)
    eax_4 = data_cc8d5c
    
    if (eax_4 != 0)
        void* result = *(eax_4 + 0x14)
        void* ecx_2 = data_147abf4
        
        if (result != 0)
            uint32_t edx = zx.d(result.w)
            
            if (edx u< *(ecx_2 + 4))
                void* esi_2 = edx * 0x64 + *ecx_2
                
                if (*(esi_2 + 0x60) == result && esi_2 != 0)
                    int32_t var_28_2 = 0xf42b1
                    sub_689e00(result, 0x18, esi_2 + 0x50)
                    result = sub_689be0(&var_20, 0x18, esi_2 + 0x50, &var_20)
        
        CookieCheckFunction(result)
        return result
    
    var_28_1 = "GetClient"
    var_2c = 0x7b
    var_30 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
    ecx_1 = "gClient"
else
    var_28_1 = "ClientSendWaitingMessage"
    var_2c = 0xbce
    var_30 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameClient.cpp"
    ecx_1 = "info.whoActive != PLAYER_NONE"

sub_63b870(eax_4, &data_801800, ecx_1, var_30, var_2c, var_28_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
