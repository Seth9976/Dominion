// 函数: sub_50ffa0
// 地址: 0x50ffa0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ebp
int32_t* var_4 = ebp
__chkstk(0x1924)
__security_cookie
void* eax_2
int32_t edx
eax_2, edx = sub_573400()

if (*(eax_2 + 0xc) == 0xffffffff)
    sub_63b870(eax_2, &data_801800, "c.activePlayer != PLAYER_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 0x10a4, "Start_DoubleDeck")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

void arg_4
void arg_c8c
__builtin_memcpy(&arg_c8c, sub_568780(&arg_4, edx, 0x3eb, &arg_4), 0xc84)
void* edi = &arg_c8c
void* result = &arg_c8c + (arg1 << 2)
__return_addr = result

if (&arg_c8c != result)
    do
        void* eax_6 = sub_573400()
        uint32_t esi_2 = zx.d((*edi).w)
        int32_t* eax_7 = *(eax_6 + 4)
        
        if (esi_2 u>= 0x320)
            sub_591930()
        
        result = sub_5727e0(eax_7, eax_7[esi_2 * 0x19 + 0x693], *(eax_2 + 4), 0x3eb, 
            *(eax_2 + 0xc), nullptr)
        edi += 4
    while (edi != __return_addr)

CookieCheckFunction(result)
return result
