// 函数: sub_616150
// 地址: 0x616150
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t var_3c[0xc]
int32_t (* edx)[0xc] = &var_3c
int32_t edi

if (data_b80980 == *(arg1 + 0x98))
    sub_6883d0(data_171e6cc, edx)
    uint32_t eax_3 = sub_688660(&var_3c, arg1, edi)
    data_b80980 = 0
    CookieCheckFunction(eax_3)
    return eax_3

sub_6883d0(data_171e6c8, edx)
sub_688660(&var_3c, arg1, edi)
data_b80980 = *(arg1 + 0x98)
void* eax_6 = sub_5cb4f0(0x10, sub_5cbb20(arg1))
CookieCheckFunction(eax_6)
return eax_6
