// 函数: sub_614ca0
// 地址: 0x614ca0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void var_40
void* result = __security_cookie ^ &var_40
void* result_1 = result

if (data_b7d424 != 0)
    int32_t* ecx_1 = data_171e784
    data_b7d418 = 0
    int32_t var_3c[0xc]
    sub_6883d0(ecx_1, &var_3c)
    int32_t esi
    int32_t edi
    sub_688660(&var_3c, esi, edi)
    
    if (data_b7d424 == 1)
        sub_5cb4f0(0x12, sub_5cbb20(sub_5cba00(data_b7d434)))
    
    result = sub_614a50()

CookieCheckFunction(result)
return result
