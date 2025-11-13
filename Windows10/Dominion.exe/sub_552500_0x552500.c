// 函数: sub_552500
// 地址: 0x552500
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ebp
int32_t* var_4 = ebp
int32_t esi
int32_t var_14 = esi
int32_t var_1c = __chkstk(0x19a8)
void var_10
sub_561e00(__security_cookie ^ &var_10, 0, 1, 0)
void* eax_2 = sub_573400()
sub_590760(eax_2, *(eax_2 + 0xc), *(eax_2 + 4), 1, 1, 0, 0)
void* eax_3 = sub_573400()
int32_t ecx_2 = *(eax_3 + 0xc)

if (ecx_2 == 0xffffffff)
    sub_63b870(eax_3, &data_801800, "c.activePlayer != PLAYER_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_4 = *(eax_3 + 4)
int32_t ecx_3 = ecx_2 * 0x5a30
*(ecx_3 + eax_4 + 0x17558) |= 2
void arg_80
uint32_t eax_5 = sub_567780(esi, &arg_80)
int32_t arg_d08
__builtin_memcpy(&arg_d08, eax_5, 0xc84)

if (arg3 != 0)
    int64_t arg_1c
    __builtin_memset(&arg_1c, 0, 0x2c)
    int128_t arg_48 = 0xff.o
    int128_t arg_58 = arg1.o
    int128_t arg_68 = arg2.o
    eax_5 = sub_563960(&arg_80, 0, &arg_d08, &arg_80, 1, 1, &arg_48, 0xb, 0, 0)
    __builtin_memcpy(&arg_d08, eax_5, 0xc84)
    
    if (arg3 != 0)
        int32_t esi_3 = arg_d08
        
        if (esi_3 != 0)
            void* eax_7 = sub_573400()
            uint32_t edi_1 = zx.d(esi_3.w)
            int32_t* ecx_6 = *(eax_7 + 4)
            uint32_t eax_8 = *(eax_7 + 0xc)
            var_4 = ecx_6
            
            if (edi_1 u>= 0x320)
                sub_591930()
                ecx_6 = var_4
            
            var_4.q = 0
            int64_t arg_10 = 0
            int32_t arg_c = ecx_6[edi_1 * 0x19 + 0x695]
            int32_t arg_8 = esi_3
            eax_5 = sub_586320(&arg_8, eax_8, ecx_6, &arg_8, &arg_10, &var_4, 0)

void* result = sub_56c1b0(eax_5, sub_4fd120, 0xa, sub_552710, 3, 1)
CookieCheckFunction(result)
return result
