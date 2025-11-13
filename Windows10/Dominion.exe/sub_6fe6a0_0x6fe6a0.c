// 函数: sub_6fe6a0
// 地址: 0x6fe6a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
__security_cookie
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1
int32_t var_20 = 0
int32_t var_18 = 0
int32_t* var_1c = arg3
int32_t var_30c = 0
int32_t var_310 = 0
void var_2f0

if (ov_open_callbacks(&var_2f0, &var_2f0, 0, 0, data_800a2c.o) s< 0)
    int32_t eax_2
    eax_2.b = 0
    CookieCheckFunction(eax_2)
    return eax_2

int128_t var_308_1
var_308_1:0xc.d = 0xffffffff
var_308_1:8.d = &var_2f0
void* eax_3 = ov_info()
arg3[1] = 0x10
var_308_1:0xc.d = 0xffffffff
int32_t var_2e8
var_308_1:8.d = &var_2e8
arg3[2] = *(eax_3 + 4)
*arg3 = *(eax_3 + 8)
int32_t eax_4 = ov_pcm_total()
void var_2e0
var_308_1:0xc.d = &var_2e0
arg3[3] = *(eax_3 + 4) * eax_4 * 2
ov_clear()
uint32_t eax_5
eax_5.b = 1
CookieCheckFunction(eax_5)
return eax_5
