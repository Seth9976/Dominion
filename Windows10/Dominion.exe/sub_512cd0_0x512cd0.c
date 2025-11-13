// 函数: sub_512cd0
// 地址: 0x512cd0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
int32_t esi = *(eax + 0x58)

if (esi == 0)
    sub_63b870(eax, &data_801800, "which != CARDID_NULL", 
        "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 0x1546, 
        "Twist_FastTrack::<lambda_d57d88747bbce46064280caa59ec9177>::()::"
    "<lambda_7ffc93606fdacb472b6634b785e45b25>::operator ()")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

void* eax_1 = sub_573400()
uint32_t edi = zx.d(esi.w)
int32_t* ebx = *(eax_1 + 4)
uint32_t eax_2 = *(eax_1 + 0xc)

if (edi u>= 0x320)
    sub_591930()

int64_t var_18 = 0
int64_t var_10 = 0
int32_t var_1c = ebx[edi * 0x19 + 0x695]
int32_t var_20 = esi
return sub_586320(&var_20, eax_2, ebx, &var_20, &var_10, &var_18, 0x10)
