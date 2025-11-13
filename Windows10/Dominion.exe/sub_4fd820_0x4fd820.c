// 函数: sub_4fd820
// 地址: 0x4fd820
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t edi
int32_t var_ca8 = edi
int32_t esi = *(sub_573400() + 0xc)
void* eax_3 = sub_573400()
sub_590760(eax_3, *(eax_3 + 0xc), *(eax_3 + 4), 1, 1, 0, 0)
void* eax_4
int32_t edx_1
eax_4, edx_1 = sub_573400()
int32_t ecx_1 = *(eax_4 + 0xc)

if (ecx_1 == 0xffffffff)
    sub_63b870(eax_4, &data_801800, "c.activePlayer != PLAYER_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_5 = *(eax_4 + 4)
int32_t ecx_2 = ecx_1 * 0x5a30
*(ecx_2 + eax_5 + 0x17558) |= 2
int32_t* var_cd0 = &std::_Func_impl_no_alloc<class <lambda_6504ca0e3a159a0c1745db3fb8c837d1>, void>::`vftable'{for `std::_Func_base<void>'}
int32_t var_ccc = esi
int32_t** var_cac_1 = &var_cd0
sub_569b30(&var_cd0, edx_1, 0, var_cd0)
int32_t var_c98[0x320]
memset(&var_c98, 0, 0xc84)
int32_t i = sub_566920(edi)

if (i != 0)
    int32_t esi_1 = 0
    int32_t eax_8 = 0
    int32_t ebx_1 = 0
    
    do
        if (esi_1 s>= 0x320)
            sub_591930()
            eax_8 = ebx_1
        
        var_c98[eax_8] = i
        int32_t var_18
        esi_1 = var_18 + 1
        var_18 = esi_1
        uint32_t edi_1 = zx.d(i.w)
        void* ebx_2 = *(sub_573400() + 4)
        
        if (edi_1 u>= 0x320)
            sub_591930()
        
        int32_t eax_10 = edi_1 * 0x64
        
        if (sub_5754f0(eax_10, *(eax_10 + ebx_2 + 0x1a4c), ebx_2, 4, 0) == 0)
            break
        
        i = sub_566920(edi_1)
        ebx_1 = esi_1
        eax_8 = esi_1
    while (i != 0)

uint32_t result = sub_569500(&var_c98, 0x3ee)
CookieCheckFunction(result)
return result
