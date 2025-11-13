// 函数: sub_6c24d0
// 地址: 0x6c24d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* eax_2 = data_147abe8

if (eax_2 == 0)
    sub_63b870(eax_2, &data_801800, "gpGameData", "C:\x\ax2017\Engine\Game.h", 0x45, "GetGameData")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

void* eax_3 = *(eax_2 + 0x10)
*(eax_3 + 0x20) += 1
int64_t var_98
memset(&var_98, 0, 0x88)
bool cond:0 = *(arg1 + 0x75) == 0
uint32_t result = 0x3f800000
var_98 = 0x3f8000003f800000
int32_t var_90 = 0x3f800000
int128_t var_74
__builtin_memcpy(&var_74, 
    "\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x80\x3f\x00\x00\x80\x3f", 
    0x20)
int128_t var_30 = *(arg1 + 0x2c)
int128_t var_20 = *(arg1 + 0x3c)

if (not(cond:0) && *(arg1 + 0x74) != 0)
    result = sub_649cc0(&var_20:4)

void* esi = nullptr

while (true)
    if (esi != 0)
        esi = *(esi + 0x2fc)
    else
        esi = *(arg1 + 8)
    
    if (esi == 0)
        break
    
    result = sub_6c2170(esi, arg2)

if (*(arg1 + 0x75) != 0 && *(arg1 + 0x74) != 0)
    sub_649d30()

CookieCheckFunction(result)
return result
