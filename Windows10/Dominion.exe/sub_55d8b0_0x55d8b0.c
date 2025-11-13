// 函数: sub_55d8b0
// 地址: 0x55d8b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4_1 = ebp
void* ecx = __chkstk(0x1914)
__security_cookie
int32_t* arg_4
int16_t edi = (*arg_4).w
void* eax_3 = sub_573400()
int32_t eax_5 = sub_590990(&arg_4, *(eax_3 + 0xc), *(eax_3 + 4), 0x3e9, &arg_4)
int32_t arg_c84[0x321]
int32_t eax_7 = sub_593ca0(&arg_4, &arg_c84, *(eax_3 + 4), &arg_4, eax_5)
uint32_t edi_1 = zx.d(edi)
void* eax_9 = *(sub_573400() + 4)
void* var_8 = eax_9

if (edi_1 u>= 0x320)
    sub_591930()
    eax_9 = var_8

int32_t ebx = edi_1 * 0x64
uint32_t result

if (sub_5754f0(eax_9, *(ebx + eax_9 + 0x1a4c), eax_9, 4, 0).b == 0)
label_55d9ee:
    result.b = 0
    CookieCheckFunction(result)
    return result

void* eax_11 = *(sub_573400() + 4)
var_8 = eax_11

if (edi_1 u>= 0x320)
    sub_591930()
    eax_11 = var_8

int32_t ecx_4 = **(ecx + 8)
result = 0

if (ecx_4 s> 0)
    do
        if (*(*(ecx + 4) + (result << 2)) == *(ebx + eax_11 + 0x1a4c))
            goto label_55d9ee
        
        result += 1
    while (result s< ecx_4)

int32_t edi_4 = *(sub_573400() + 4)

if (edi_1 u>= 0x320)
    sub_591930()

result = 0

if (eax_7 s> 0)
    do
        if (arg_c84[result] == *(ebx + edi_4 + 0x1a4c))
            goto label_55d9ee
        
        result += 1
    while (result s< eax_7)

result.b = 1
CookieCheckFunction(result)
return result
