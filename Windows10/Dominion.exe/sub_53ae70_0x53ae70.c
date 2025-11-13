// 函数: sub_53ae70
// 地址: 0x53ae70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
uint32_t esi_1 = zx.d((*arg1).w)
void* edi = *(sub_573400() + 4)

if (esi_1 u>= 0x320)
    sub_591930()

int32_t eax_4 = esi_1 * 0x64
int32_t var_41c = eax_4
uint32_t result

if (sub_5754f0(eax_4, *(eax_4 + edi + 0x1a4c), edi, 4, 0).b != 0)
    void* eax_5 = sub_573400()
    void* eax_6
    int32_t ecx_1
    eax_6, ecx_1 = sub_573400()
    int32_t edi_1 = *(eax_6 + 4)
    
    if (esi_1 u>= 0x320)
        sub_591930()
    
    int32_t var_42c_1 = ecx_1
    void* edi_2 = *(eax_5 + 4)
    void var_418
    result = sub_5846c0(&var_418, sub_576540(&var_418, *(eax_5 + 0xc), edi_2, &var_418), edi_2, 
        &var_418, 0x26, *(var_41c + edi_1 + 0x1a4c))
    int32_t eax_10
    int32_t edx_3
    
    if (result.b != 0)
        edx_3:eax_10 = sx.q(*(edi_2 + 0x19e4))
        *(edi_2 + 0xd38)
    
    if (result.b == 0 || divs.dp.d(edx_3:eax_10, *(edi_2 + 0xd38)) s>= 5)
        result.b = 1
        CookieCheckFunction(result)
        return result

result.b = 0
CookieCheckFunction(result)
return result
