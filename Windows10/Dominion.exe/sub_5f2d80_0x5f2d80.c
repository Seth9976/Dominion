// 函数: sub_5f2d80
// 地址: 0x5f2d80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
uint32_t var_c9c = arg5
int32_t var_c90[0x321]
uint32_t i = sub_590990(&var_c90, 0xffffffff, 0xb80ad8, 5, &var_c90)

if (i != 0)
    if (i != 1)
        sub_591930()
    
    i = var_c90[0]

int32_t var_cb0_1
char const* const var_cac_1
char* ecx

if (arg2 != i)
    int32_t ebx_1 = 0
    i = data_b809e0
    int32_t ecx_2 = data_b809e4 * 0x1c30 + i
    
    if (i u>= ecx_2)
    label_5f2e31:
        CookieCheckFunction(i)
        return i
    
    while ((*(i + 0x1c28) & 0xffff0000) == 0)
        i += 0x1c30
        
        if (i u>= ecx_2)
            goto label_5f2e31
    
    while (i != 0xffffffff)
        if (*(i + 0x2c) == 0 && *(i + 0x98) == arg2)
            var_c90[ebx_1] = i
            ebx_1 += 1
        
        i += 0x1c30
        
        if (i u>= ecx_2)
            break
        
        while ((*(i + 0x1c28) & 0xffff0000) == 0)
            i += 0x1c30
            
            if (i u>= ecx_2)
                goto label_5f2e7c
    
label_5f2e7c:
    int32_t edi_1 = 0
    
    if (ebx_1 s<= 0)
        goto label_5f2e31
    
    while (true)
        void* esi_1 = var_c90[edi_1]
        
        if (*(esi_1 + 0x168) == 0)
            int32_t var_cac_2 = arg9
            i = sub_5f2290(i, esi_1, arg3, arg4, var_c9c, arg6, arg7, arg8)
        else
            if (*(esi_1 + 0x2c) != 0)
                var_cac_1 = "CardGetPile"
                var_cb0_1 = 0x76a2
                ecx = "gfx.type == DOMGFX_CARD"
                break
            
            uint32_t eax_5 = sub_5cba00(*(esi_1 + 0x9c))
            sub_5ce1b0(eax_5, eax_5, esi_1, 1, 0)
            i = sub_5cb5a0(esi_1)
        
        edi_1 += 1
        
        if (edi_1 s>= ebx_1)
            CookieCheckFunction(i)
            return i
else
    var_cac_1 = "DomMoveCard"
    var_cb0_1 = 0x78a5
    ecx = "which != MouseCard(gDomClient.domState.g)"

sub_63b870(i, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", var_cb0_1, 
    var_cac_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
