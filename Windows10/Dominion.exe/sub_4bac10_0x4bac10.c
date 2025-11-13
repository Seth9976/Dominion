// 函数: sub_4bac10
// 地址: 0x4bac10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t var_20 = arg2
int32_t eax_2 = sub_4baa40(arg2)
int32_t arg_4
int32_t ebx = arg_4

if (eax_2 == 0)
    for (int32_t* i = *(*(arg3 + 0x429c) + (((arg2 s>> 4 | arg2) & *(arg3 + 0x42a0)) << 2)); 
            i != 0; i = i[6])
        if (arg2 == *i)
            if (i == 0xfffffff8)
                break
            
            sub_63b870(&i[2], &data_801800, "profile.syncedData.entries.GetAt(key) == NULL", 
                "C:\x\ax2017\Jams\Shared\TggGame\code\GameClient.cpp", 0x176a, "SyncedDataSet")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
    
    sub_4bb130(arg3 + 0x4290, &var_20, &arg_4)
    goto label_4bac74

void* result
int32_t ecx_6

if (sub_4baa40(arg2) != 1)
label_4bac74:
    ecx_6 = arg4
label_4bac7a:
    int32_t var_10_1 = ecx_6
    int32_t var_14_1 = ebx
    int64_t var_1c = 0
    sub_4bb1d0(arg3 + 0x429c, &var_20, &var_1c)
    data_cc8dc8
    sub_4d8ad0(arg2)
    result = arg3 + 0x4290
    
    if (result == data_cc8d68)
        var_1c.d = arg2
        int32_t var_14_2 = ebx
        int32_t var_10_2 = arg4
        result = sub_4bb950(&var_1c)
else
    int32_t* eax_8 = *(*(arg3 + 0x429c) + (((arg2 s>> 4 | arg2) & *(arg3 + 0x42a0)) << 2))
    
    if (eax_8 == 0)
        goto label_4bac74
    
    while (arg2 != *eax_8)
        eax_8 = eax_8[6]
        
        if (eax_8 == 0)
            goto label_4bac74
    
    result = &eax_8[2]
    
    if (eax_8 == 0xfffffff8)
        goto label_4bac74
    
    ecx_6 = arg4
    int32_t temp2_1 = *(result + 0xc)
    
    if (ecx_6 u>= temp2_1 && (ecx_6 u> temp2_1 || ebx u> *(result + 8)))
        goto label_4bac7a
CookieCheckFunction(result)
return result
