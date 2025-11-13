// 函数: sub_4d0720
// 地址: 0x4d0720
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t esi
int32_t var_bc = esi
void* const eax_2 = &data_77f084

while (*(eax_2 + 0x10) == 0)
    eax_2 += 0x14
    
    if (eax_2 == &data_77f098)
        sub_63b870(eax_2, &data_801800, "result", 
            "C:\x\ax2017\Jams\Shared\TggGame\code\GameDialogs.cpp", 0x29ec, "TitleBannerClick")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn

int32_t var_b4

if (*(eax_2 + 4) == 1)
    int32_t esi_1 = *eax_2
    int32_t edi = *(eax_2 + 8)
    int32_t var_b8 = esi_1
    var_b4 = edi
    
    if (arg1 == 0)
        void* eax_4 = data_cc8d94
        
        if (eax_4 == 0)
            eax_4 = sub_4acc60()
            data_cc8d94 = eax_4
        
        data_cc8d98 = esi_1
        data_cc8d9c = edi
        data_cc8d90 = 0
        data_cc8da0 = 3
        data_cc8da4 = 0
        uint32_t eax_5 = sub_4add50(eax_4)
        data_8db660 = 0x16
        CookieCheckFunction(eax_5)
        return eax_5
    
    int32_t* eax_3 = sub_4c9d30(&var_b8)
    CookieCheckFunction(eax_3)
    return eax_3

int32_t var_b0[0x29]
int32_t ecx_7 = sub_60f080(&var_b0)
int32_t eax_7 = 0
uint32_t eax_8

if (ecx_7 s> 0)
    do
        if (var_b0[eax_7] == 0x13)
            int32_t eax_9 = (&var_b4)[ecx_7]
            ecx_7 -= 1
            var_b0[eax_7] = eax_9
            goto label_4d081d
        
        eax_7 += 1
    while (eax_7 s< ecx_7)
    
    eax_8 = 0
    goto label_4d082d

label_4d081d:
eax_8 = 0
bool cond:0_1 = ecx_7 != 0

if (ecx_7 s<= 0)
label_4d085f:
    
    if (not(cond:0_1))
        data_cc8d80 = 0
        data_cc8d84 = 3
        data_cc8d88 = 0
        data_8db660 = 0x15
        CookieCheckFunction(eax_8)
        return eax_8
else
label_4d082d:
    
    do
        if (var_b0[eax_8] == 2)
            ecx_7 -= 1
            cond:0_1 = ecx_7 != 0
            goto label_4d085f
        
        eax_8 += 1
    while (eax_8 s< ecx_7)

int32_t ecx_9 = *(data_cc8dc8 + 0x1e1a4)

if (ecx_7 s> 2)
    *(sub_4d8f30(ecx_9) + 0x3508) = 1
else
    *(sub_4d8f30(ecx_9) + 0x3508) = 0
    data_cc8dc8
    sub_4d8ad0(esi)

char* eax_12 = sub_61dce0()
CookieCheckFunction(eax_12)
return eax_12
