// 函数: sub_515c00
// 地址: 0x515c00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t i_2

if (arg5 s>= 0xa)
    sub_63b870(__security_cookie ^ &i_2, &data_801800, "numRequested < NUM_KINGDOM_PILES", 
        "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 0x1a2b, "RandomStampTargetPiles")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t i_4 = data_cca788
int32_t esi_2 = data_cca780 + 0xc + (data_cca784 << 0xb)
i_2 = i_4
int32_t var_3c = esi_2

if (i_4 != 0)
    int32_t esi_3 = 0
    
    if (arg2 s> 0)
        do
            void* eax_2 = sub_511d80(*(arg3 + (esi_3 << 2)), i_4)
            
            if (eax_2.b == 0)
                sub_63b870(eax_2, &data_801800, "CanDoCardStamp(stamps[i], what)", 
                    "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 0x1a34, 
                    "RandomStampTargetPiles")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            i_4 = i_2
            esi_3 += 1
        while (esi_3 s< arg2)
    
    *arg4 = i_4
    
    if (arg5 != 1)
        uint32_t eax_7 = sub_515c00(&arg4[1], arg5 - 1, &i_2) + 1
        CookieCheckFunction(eax_7)
        return eax_7
    
    CookieCheckFunction(arg5)
    return arg5

uint32_t eax_8 = 0
int32_t i_1 = 0
int32_t i = 0
uint32_t var_48 = 0
i_2 = 0
int32_t i_3 = 0
int32_t var_34[0xa]

do
    int32_t edi_1 = *(esi_2 + (i << 2))
    
    if (edi_1 == 0)
        break
    
    i_2 = i_1 + 1
    
    if (arg6 == 0 || *arg6 != edi_1)
        int32_t esi_4 = 0
        
        if (arg2 s> 0)
            do
                if (sub_511d80(*(arg3 + (esi_4 << 2)), edi_1) == 0)
                    eax_8 = var_48
                    i = i_3
                    goto label_515d26
                
                esi_4 += 1
            while (esi_4 s< arg2)
            
            eax_8 = var_48
            i = i_3
        
        var_34[eax_8] = edi_1
        eax_8 += 1
        var_48 = eax_8
    label_515d26:
        esi_2 = var_3c
    
    i_1 = i_2
    i += 1
    i_3 = i
while (i s< 0xa)

if (eax_8 == 0 && i_1 == 0xa)
    CookieCheckFunction(eax_8)
    return eax_8

uint32_t esi_5 = arg5
bool cond:1 = eax_8 s< esi_5

if (eax_8 s< esi_5)
    while (i_1 s< 0xa)
        int32_t* var_80 = &std::_Func_impl_no_alloc<class <lambda_b31a5b2b521240410850fc6073e679cf>,bool,enum DomCardEnum>::`vftable'{for `std::_Func_base<bool,enum DomCardEnum>'}
        int32_t var_7c_1 = arg2
        int32_t var_78_1 = arg3
        int32_t** var_5c_2 = &var_80
        int32_t eax_12
        int32_t edx_6
        eax_12, edx_6 = sub_50ad20(&var_80, 0, &data_cca794, var_80)
        sub_50a6a0(eax_12, edx_6, eax_12, 0, 0)
        i_1 = i_2 + 1
        i_2 = i_1
        var_34[var_48] = eax_12
        eax_8 = var_48 + 1
        esi_5 = arg5
        var_48 = eax_8
        
        if (eax_8 s>= esi_5)
            break
    
    cond:1 = eax_8 s< esi_5

if (cond:1)
    esi_5 = eax_8

sub_63eda0(eax_8, &var_34, &data_cc8de0, eax_8, esi_5)
memcpy(arg4, &var_34, esi_5 << 2)
CookieCheckFunction(esi_5)
return esi_5
