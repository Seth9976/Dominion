// 函数: sub_4b9970
// 地址: 0x4b9970
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t var_10 = arg4
void* ecx = data_cc8dc8
int32_t ebx = arg2
int32_t var_38 = arg3
int32_t ecx_1 = *(ecx + 0x1e1a4)
int32_t var_18 = arg3
int32_t var_14 = ebx
int32_t var_c = arg5
void* eax_4 = sub_4d8f30(ecx_1)
int32_t* eax_6 = *(*(eax_4 + 0x72f8) + (((arg3 s>> 4 | arg3) & *(eax_4 + 0x72fc)) << 2))
int64_t var_28
void* edi

if (eax_6 == 0)
label_4b99d2:
    edi = nullptr
label_4b99d4:
    void* ecx_6 = data_cc8d5c
    
    if (ecx_6 == 0)
        sub_63b870(eax_6, &data_801800, "gClient", 
            "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 0x7b, "GetClient")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    int32_t var_20_1 = *(ecx_6 + 0x75d8)
    var_28 = *(ecx_6 + 0x75d0)
    void* eax_8 = sub_4badc0(ecx_6 + 0x75b8, &var_28)
    
    if (eax_8 != 0)
        eax_8 = *eax_8
    
    int32_t var_34 = arg3
    int64_t var_30_1 = 0
    var_28 = 0
    
    if (eax_8 == arg3)
        if (edi != 0)
            var_28.d = ebx
        else
            var_30_1:4.d = ebx
        
        ebx = var_28:4.d
    
    var_28:4.d = ebx
    int32_t var_20_2 = 0
    var_34.o = var_34.o
    sub_4bb420(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x72f8, &var_38, &var_34)
else
    while (arg3 != *eax_6)
        eax_6 = eax_6[7]
        
        if (eax_6 == 0)
            goto label_4b99d2
    
    edi = &eax_6[1]
    
    if (edi == 0)
        goto label_4b99d4
    
    int32_t* ecx_7 = *(edi + 8)
    eax_6 = *(edi + 0x10)
    
    if (ecx_7 s<= *(edi + 0xc))
        ecx_7 = *(edi + 0xc)
    
    if (ecx_7 s> eax_6)
        eax_6 = ecx_7
    
    if (eax_6 s< ebx)
        goto label_4b99d4
sub_4bb8b0(&var_18)
void* result = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))

if (*(result + 0x72d4) == 0)
    int32_t var_20_3 = 0
    var_28 = 0
    var_14.q = 0
    int32_t var_c_1 = 0
    sub_4ba480(&var_28, &var_14, 4, &var_28)
    result = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
    *(result + 0x72d4) = 1

CookieCheckFunction(result)
return result
