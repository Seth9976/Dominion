// 函数: sub_525790
// 地址: 0x525790
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4 = ebp
__chkstk(0x1988)
__security_cookie
int32_t esi
int32_t var_14 = esi
void arg_60
uint32_t eax_2 = sub_5678e0(esi, &arg_60, 4, 0, 0x80, 0)
int32_t arg_4
__builtin_memset(&arg_4, 0, 0x24)
var_4.q = 0
int128_t arg_28 = 0x70.o
int32_t arg_ce8
__builtin_memcpy(&arg_ce8, eax_2, 0xc84)
int128_t arg_38 = arg1.o
int128_t arg_48 = arg2.o
int32_t* result = sub_563960(&arg_60, 0, &arg_ce8, &arg_60, 1, 1, &arg_28, 0x36, 0, 0)
int32_t ecx_1 = __builtin_memcpy(&arg_ce8, result, 0xc84)

if (arg3 != 0)
    int32_t esi_3 = arg_ce8
    
    if (esi_3 != 0)
        int32_t var_20_1 = ecx_1
        uint32_t eax_4 = sub_56b800()
        sub_566c60(eax_4, 2, esi_3, eax_4, 0)
        sub_5624a0(esi_3, 0x3e9)
        void* eax_5 = sub_573400()
        uint32_t esi_4 = zx.d(esi_3.w)
        int32_t ecx_4 = *(eax_5 + 0xc)
        void* edi_1 = *(eax_5 + 4)
        int32_t var_c = ecx_4
        
        if (esi_4 u>= 0x320)
            sub_591930()
            ecx_4 = var_c
        
        int32_t eax_6 = esi_4 * 0x64
        sub_576e90(eax_6, edi_1, &var_c, ecx_4, *(eax_6 + edi_1 + 0x1a4c), 0)
        int32_t var_24_2 = var_c + 1
        result = sub_565aa0(esi_4)

CookieCheckFunction(result)
return result
