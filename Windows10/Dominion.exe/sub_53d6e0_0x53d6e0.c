// 函数: sub_53d6e0
// 地址: 0x53d6e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__chkstk(0x1958)
__security_cookie
int32_t var_1c = 0
void arg_30
void arg_cb8
__builtin_memcpy(&arg_30, sub_5685f0(&arg_cb8, 0, 0x3ea, &arg_cb8, 4), 0xc84)
void* eax_4 = sub_573400()
int32_t edi = *(*(eax_4 + 0xc) * 0x5a30 + *(eax_4 + 4) + 0x174f4)
void* eax_6 = sub_573400()
int32_t edi_1 = edi + sub_583fc0(eax_6, *(eax_6 + 0xc), *(eax_6 + 4), 0xa00)
int16_t eax_8 = sub_56b800()
void* eax_9 = sub_573400()
uint32_t esi_2 = zx.d(eax_8)
int32_t var_10 = *(eax_9 + 0xc)
void* ecx_3 = *(eax_9 + 4)

if (esi_2 u>= 0x320)
    sub_591930()

int32_t eax_10 = esi_2 * 0x64
sub_576e90(eax_10, ecx_3, &var_10, var_10, *(eax_10 + ecx_3 + 0x1a4c), 0)
uint32_t arg_18[0x6]
uint32_t* eax_11
int32_t ecx_5
eax_11, ecx_5 = sub_576c00(&arg_18, var_10)
uint128_t xmm0 = *eax_11
int32_t var_8 = xmm0.d
int32_t xmm0_1 = _mm_bsrli_si128(xmm0, 8)
int32_t var_20_3
char const* const var_1c_4
char* ecx_6

if (xmm0_1 == 0)
    if (arg1 == 0)
        uint32_t result
        
        if (edi_1 s>= var_8)
            int32_t var_1c_6 = 7
            result = sub_56a740(xmm0_1, 0x3ea, &arg_30, ecx_5)
        else
            int32_t var_1c_5 = ecx_5
            result = sub_56ab80(xmm0_1, 0x3ea, &arg_30, 0x12, 7)
        
        result.b = result != 0
        CookieCheckFunction(result)
        return result
    
    var_1c_4 = "AnimalFair_OnPayCost"
    var_20_3 = 0x265
    ecx_6 = "costParsed.potions == 0"
else
    var_1c_4 = "AnimalFair_OnPayCost"
    var_20_3 = 0x264
    ecx_6 = "costParsed.debt == 0"

sub_63b870(xmm0_1, &data_801800, ecx_6, "C:\x\ax2017\Jams\Dominion\code\DomCards_Menagerie.cpp", 
    var_20_3, var_1c_4)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
