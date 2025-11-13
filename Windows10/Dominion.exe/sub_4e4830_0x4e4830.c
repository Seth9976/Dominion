// 函数: sub_4e4830
// 地址: 0x4e4830
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char** result
int32_t* edx
result, edx = __chkstk(0x3330)
__security_cookie
char** result_1 = result
result_1 = result
int32_t eax_2 = *edx

if (eax_2 == 1)
    void* eax_8 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
    int32_t ecx_7 = edx[1]
    
    if (ecx_7 s< 0 || ecx_7 s>= *(eax_8 + 0x71dc))
        sub_63d720(result, &data_801800)
    else
        char* eax_10 = *(eax_8 + ecx_7 * 0xc + 0x6ee0)
        *result = eax_10
        
        if (eax_10 != 0 && *eax_10 != 0)
            char* eax_11 = sub_63d4e0(result)
            *(eax_11 + 4) += 1
            CookieCheckFunction(result)
            return result
    
    CookieCheckFunction(result)
    return result

if (eax_2 != 2)
    sub_63b870(eax_2 - 2, &data_801800, "Halt", 
        "C:\x\ax2017\Jams\Shared\TggGame\code\GameShared.cpp", 0x1467, "ToKingdomString")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_5 = edx[1]

if (eax_5 s< 0)
    eax_5 = 1
else if (eax_5 s> 0x1b5)
    eax_5 = 1

if (*(eax_5 * 0x64 + &data_783370) == eax_5)
    void arg_1990
    memcpy(&arg_1990, sub_60fbd0(result, &__return_addr), 0x1990)
    __vcasan::DumpThisThreadExceptionFilter(result, &arg_1990)
    CookieCheckFunction(result)
    return result

sub_63b870(eax_5, &data_801800, "EXP_BASE_SETS[idx - 1].id == idx", 
    "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0xb1, "DomSetGet")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
