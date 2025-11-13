// 函数: sub_501630
// 地址: 0x501630
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ebp
int32_t* var_4 = ebp
__chkstk(0x19a8)
__security_cookie
void* eax_2 = sub_573400()
sub_590760(eax_2, *(eax_2 + 0xc), *(eax_2 + 4), 2, 1, 0, 0)
void* eax_3 = sub_573400()
int32_t ecx_1 = *(eax_3 + 0xc)

if (ecx_1 == 0xffffffff)
    sub_63b870(eax_3, &data_801800, "c.activePlayer != PLAYER_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_4 = *(eax_3 + 4)
int32_t ecx_2 = ecx_1 * 0x5a30
*(ecx_2 + eax_4 + 0x17558) |= 8
sub_56a3f0(ecx_2.b, 0)
int32_t var_24 = 0
void arg_80
uint32_t eax_6 = sub_5685f0(&arg_80, 0, 0x3ec, &arg_80, 2)
int32_t arg_18 = 0xe4
int64_t arg_1c
__builtin_memset(&arg_1c, 0, 0x2c)
int128_t arg_48 = arg_18.o
int32_t arg_d08
__builtin_memcpy(&arg_d08, eax_6, 0xc84)
int128_t arg_58 = arg1.o
int128_t arg_68 = arg2.o
__builtin_memcpy(&arg_d08, sub_563960(&arg_80, 0, &arg_d08, &arg_80, 1, 1, &arg_48, 2, 0, 0), 0xc84)

if (arg3 != 0)
    int32_t esi_2 = arg_d08
    
    if (esi_2 != 0)
        void* eax_9 = sub_573400()
        uint32_t edi_1 = zx.d(esi_2.w)
        int32_t* ecx_5 = *(eax_9 + 4)
        uint32_t eax_10 = *(eax_9 + 0xc)
        var_4 = ecx_5
        
        if (edi_1 u>= 0x320)
            sub_591930()
            ecx_5 = var_4
        
        var_4.q = 0
        int64_t arg_10 = 0
        int32_t arg_c = ecx_5[edi_1 * 0x19 + 0x695]
        int32_t arg_8 = esi_2
        sub_586320(&arg_8, eax_10, ecx_5, &arg_8, &arg_10, &var_4, 0)

void* result = sub_4febe0(0x1019)
CookieCheckFunction(result)
return result
