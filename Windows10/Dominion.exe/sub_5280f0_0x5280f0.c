// 函数: sub_5280f0
// 地址: 0x5280f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* eax_2 = sub_573400()
int32_t var_c98[0x321]

for (int32_t i = 0; i s< 0x32; i += 1)
    var_c98[i] = *(((i u% 5) << 2) + &data_81880c)

int32_t eax_8 = *(*(sub_573400() + 4) + 0xd38)
void* eax_11 = sub_573400()
int32_t* edx_5 = *(eax_11 + 4)

if (edx_5 == 0)
    sub_63b870(eax_11, &data_801800, "c.g", "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 
        0x1577, "GameRNG")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_12 = edx_5[1]
int32_t ecx = *edx_5
int32_t esi = edx_5[2]
int32_t edi = edx_5[3]
int32_t eax_13
int32_t edx_6
eax_13, edx_6 = __allmul(ecx, eax_12, 0x4c957f2d, 0x5851f42d)
int32_t eax_14 = eax_13 + esi
int32_t edx_7 = adc.d(edx_6, edi, eax_13 + esi u< eax_13)
int32_t eax_15
int32_t edx_8
eax_15, edx_8 = __allmul(eax_14, edx_7, 0x4c957f2d, 0x5851f42d)
int32_t ecx_2 = eax_15 + esi
int32_t eax_17 = adc.d(edx_8, edi, eax_15 + esi u< eax_15)
int32_t eax_18
int32_t edx_9
eax_18, edx_9 = __allmul(ecx_2, eax_17, 0x4c957f2d, 0x5851f42d)
int32_t edi_2 = eax_18 + edx_5[2]
int32_t esi_2 = adc.d(edx_9, edx_5[3], eax_18 + edx_5[2] u< eax_18)
int32_t eax_20
int32_t edx_10
eax_20, edx_10 = __allmul(edi_2, esi_2, 0x4c957f2d, 0x5851f42d)
bool c_3 = eax_20 + edx_5[2] u< eax_20
*edx_5 = eax_20 + edx_5[2]
edx_5[1] = adc.d(edx_10, edx_5[3], c_3)
int32_t edi_4 = ror.d(eax_17 u>> 0xd ^ (ecx_2 u>> 0x1b | eax_17 << 5), (eax_17 u>> 0x1b).b)
int32_t eax_31 = ror.d(esi_2 u>> 0xd ^ (edi_2 u>> 0x1b | esi_2 << 5), (esi_2 u>> 0x1b).b) << 1
    | edi_4 u>> 0xffffffe1
int32_t edi_6 = (edi_4 * 2) | 1
void* edi_8 = *(eax_2 + 4)
int32_t eax_37
int32_t edx_16
eax_37, edx_16 = __allmul(
    ror.d(eax_12 u>> 0xd ^ (ecx u>> 0x1b | eax_12 << 5), (eax_12 u>> 0x1b).b), 
    ror.d(edx_7 u>> 0xd ^ (eax_14 u>> 0x1b | edx_7 << 5), (edx_7 u>> 0x1b).b), 0x4c957f2d, 
    0x5851f42d)
*(edi_8 + 0x10) = eax_37 + edi_6
*(edi_8 + 0x14) = adc.d(edx_16, eax_31, eax_37 + edi_6 u< eax_37)
*(edi_8 + 0x18) = edi_6
*(edi_8 + 0x1c) = eax_31
void* eax_40 = *(eax_2 + 4)
void* i_2 = eax_8 * 0xa + 0xfffffff6
int128_t var_cb0 = *(eax_40 + 0x10)
sub_63eda0(eax_40, &var_c98, &var_cb0, 0x32, i_2)
void* result = sub_573400()
void* result_1 = result

if (i_2 s> 0)
    int32_t __saved_edi
    void* esi_10 = &(&__saved_edi)[i_2 + 0x11]
    void* i_1
    
    do
        sub_5727e0(result, *esi_10, *(result + 4), arg1, 0xffffffff, nullptr)
        result = result_1
        esi_10 -= 4
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

CookieCheckFunction(result)
return result
