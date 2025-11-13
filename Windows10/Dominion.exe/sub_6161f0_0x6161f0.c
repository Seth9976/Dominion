// 函数: sub_6161f0
// 地址: 0x6161f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
uint32_t result = sub_5e4ca0()
int32_t eax_2
void var_d28
void* ecx_2

if (result == 0)
label_616288:
    
    if (arg4 == 0)
        CookieCheckFunction(result)
        return result
    
    sub_5939a0(&var_d28, arg3)
    eax_2 = sub_5e4ca0()
    ecx_2 = data_cc8d5c
    int32_t var_cb8_2 = eax_2
    int32_t var_cbc_3 = 1
    *arg2 = 0
    
    if (ecx_2 != 0)
    label_616263:
        result = sub_5ee7d0(*(ecx_2 + 0x7590), &var_d28)
        CookieCheckFunction(result)
        return result
else
    result = sub_5efd60(arg3, arg5)
    
    if (result.b == 0)
        goto label_616288
    
    sub_5939a0(&var_d28, arg3)
    int32_t var_cbc_1
    int32_t var_cb8_1
    
    if (arg4 == 0)
        eax_2 = *arg2
        
        if (eax_2 != 0)
            var_cbc_1 = 1
            var_cb8_1 = eax_2
        else
            int32_t var_cbc_2 = eax_2
    else
        eax_2 = sub_5e4ca0()
        var_cbc_1 = 1
        var_cb8_1 = eax_2
    ecx_2 = data_cc8d5c
    *arg2 = 0
    
    if (ecx_2 != 0)
        goto label_616263
sub_63b870(eax_2, &data_801800, "gClient", "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 
    0x7b, "GetClient")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
