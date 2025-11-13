// 函数: sub_591e50
// 地址: 0x591e50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4_1 = ebp
void* ecx
int32_t edx
ecx, edx = __chkstk(0x191c)
__security_cookie
int32_t* ecx_1 = arg1
void* const result = nullptr
__return_addr = nullptr
arg1 = nullptr
*ecx_1 = 0
int32_t* var_8 = ecx_1
int32_t arg_c[0x320]
int32_t arg_c8c[0x321]
uint32_t eax_3 = sub_591b80(&arg_c, edx, ecx, &arg_c, &arg_c8c)
uint32_t var_4 = eax_3
int32_t edi = 0

if (eax_3 s> 0)
    uint32_t ecx_3 = eax_3
    
    do
        int32_t* esi_1 = arg_c[edi]
        
        if (esi_1 == 0x101 || esi_1 == 0)
            eax_3 = var_8
        else if (sub_5754f0(eax_3, esi_1, ecx, 4, 0) == 0)
            ecx_3 = var_4
            eax_3 = var_8
        else
            void* eax_5 = arg_c8c[edi]
            
            if (eax_5 s< __return_addr)
                ecx_3 = var_4
                
                if (eax_5 s< result)
                    eax_3 = var_8
                else
                    result = eax_5
                    eax_3 = var_8
                    *eax_3 = esi_1
            else
                int32_t* edx_2 = arg1
                result = __return_addr
                int32_t* ecx_6 = var_8
                __return_addr = eax_5
                eax_3 = ecx_6
                arg1 = esi_1
                *ecx_6 = edx_2
                ecx_3 = var_4
        
        edi += 1
    while (edi s< ecx_3)
    
    if (result != 0 && *eax_3 == 0)
        sub_63b870(eax_3, &data_801800, "secondPile != CARD_NONE", 
            "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0x4ee4, "CalcTriumphalArchPile")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn

CookieCheckFunction(result)
return result
