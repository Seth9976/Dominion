// 函数: sub_60a950
// 地址: 0x60a950
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t var_8 = eax_1
void* ecx = data_cc8d5c
char const* const var_2ac
int32_t var_2a8
char const* const var_2a4_3
char* ecx_10

if (ecx == 0)
label_60ab19:
    var_2a4_3 = "GetClient"
    var_2a8 = 0x7b
    var_2ac = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
    ecx_10 = "gClient"
else
    void* eax_2 = sub_4badc0(ecx + 0x75b8, arg3)
    
    if (eax_2 == 0)
        CookieCheckFunction(eax_2)
        return eax_2
    
    uint32_t eax_3 = *(eax_2 + 8)
    uint32_t var_28c_1 = eax_3
    
    if (eax_3 == 0)
        uint32_t eax_4 = sub_609770()
        var_28c_1 = eax_4
        *(eax_2 + 8) = eax_4
    
    int32_t eax_5 = *(eax_2 + 0xc)
    void var_288
    int32_t eax_6 = sub_4b9b40(&var_288)
    int32_t var_290
    int32_t eax_8 = sub_4e4260(eax_6, eax_6, &var_288, &var_290) & var_28c_1
    
    if (eax_8 == var_28c_1)
        eax_1 = var_290 & eax_5
    
    if (eax_8 != var_28c_1 || eax_1 != eax_5)
        data_ccf6c0 = *(eax_2 + 8)
        data_ccf6c4 = *(eax_2 + 0xc)
        eax_2 = zx.d(arg4) ^ 1
        data_8db660 = 0x7f5
        data_ccf6c8 = eax_2
        CookieCheckFunction(eax_2)
        return eax_2
    
    if (arg4 != 0)
        void* ecx_5 = data_cc8d5c
        
        if (ecx_5 == 0)
            goto label_60ab19
        
        *(ecx_5 + 0x5044) = 4
        int32_t eax_10 = arg3[1].d
        *(ecx_5 + 0x5048) = *arg3
        *(ecx_5 + 0x5050) = eax_10
        *(ecx_5 + 0x5054) = arg2
        CookieCheckFunction(arg2)
        return arg2
    
    if (sub_6097c0(eax_2) == 0)
        uint32_t eax_14 = sub_4bbd50(arg3)
        CookieCheckFunction(eax_14)
        return eax_14
    
    eax_1 = sub_6097c0(eax_2)
    
    if (eax_1.b != 0)
        eax_1 = sub_609650(*eax_2)
        void* ecx_12 = data_cc8d5c
        
        if (ecx_12 == 0)
            goto label_60ab19
        
        *(ecx_12 + 0x5044) = 5
        *(ecx_12 + 0x5058) = eax_1
        uint32_t eax_13 = arg3[1].d
        *(ecx_12 + 0x5048) = *arg3
        *(ecx_12 + 0x5050) = eax_13
        CookieCheckFunction(eax_13)
        return eax_13
    
    var_2a4_3 = "OpenDailyGame"
    var_2a8 = 0xa7cd
    var_2ac = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
    ecx_10 = "HasGameForDaily(info)"

sub_63b870(eax_1, &data_801800, ecx_10, var_2ac, var_2a8, var_2a4_3)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
