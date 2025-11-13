// 函数: sub_512d80
// 地址: 0x512d80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* eax_2 = sub_573400()
void* esi = eax_2

if (*(esi + 0x40) == 0)
    eax_2 = sub_591930()

int32_t esi_1 = *(esi + 0x40)

if (esi_1 == 0)
    sub_63b870(eax_2, &data_801800, "which != CARDID_NULL", 
        "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 0x153e, 
        "Twist_FastTrack::<lambda_d57d88747bbce46064280caa59ec9177>::operator ()")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

void* var_ca0 = nullptr
void* var_ca4 = nullptr
int32_t ecx = *(sub_573400() + 4)
uint32_t eax_4 = zx.d(esi_1.w)
int32_t edi = eax_4 * 0x64
int32_t var_cb0 = ecx
int32_t eax_9
void* edi_1

if (eax_4 u< 0x320)
    var_cb0 = *(edi + ecx + 0x1a58)
    edi_1 = sub_573400()
    eax_9 = *(edi_1 + 4)
else
    sub_591930()
    var_cb0 = *(var_cb0 + edi + 0x1a58)
    edi_1 = sub_573400()
    int32_t eax_8 = *(edi_1 + 4)
    sub_591930()
    eax_9 = eax_8

uint32_t result = sub_582d10(eax_9, *(edi + eax_9 + 0x1a70), *(edi_1 + 4), esi_1, var_cb0, 0xb, 
    0x46d, nullptr, *(edi_1 + 0x28), *(edi_1 + 0x2c), *(edi_1 + 0x30), 0, 0, nullptr, 0, var_ca0, 
    var_ca4)

if (result.b != 0)
    int32_t var_c98 = 1
    int32_t var_c94_1 = esi_1
    int32_t var_14_1 = 1
    result = sub_56ba40(&var_c98, sub_512cd0, 0, 0, &var_c98, 1, 0)

CookieCheckFunction(result)
return result
