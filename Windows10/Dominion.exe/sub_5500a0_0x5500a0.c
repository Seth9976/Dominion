// 函数: sub_5500a0
// 地址: 0x5500a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4 = ebp
__chkstk(0x1988)
__security_cookie
uint32_t eax_2
int32_t ecx
eax_2, ecx = sub_56b800()
int32_t var_1c = ecx
void* result = sub_5624a0(eax_2, 0x3e9)

if (result.b != 0)
    void* eax_3 = sub_573400()
    void arg_60
    uint32_t eax_4
    int32_t edx_2
    eax_4, edx_2 = sub_5777b0(eax_3, *(eax_3 + 0xc), *(eax_3 + 4), &arg_60, 4)
    uint32_t arg_ce0 = eax_4
    void arg_ce8
    __builtin_memcpy(&arg_ce8, &arg_60, 0xc84)
    int32_t var_24_1 = 0
    sub_561880(eax_4, edx_2, &arg_ce8, 0x80)
    int32_t arg_4
    __builtin_memset(&arg_4, 0, 0x24)
    var_4.q = 0
    int128_t arg_28 = 0x10b.o
    int128_t arg_38 = arg1.o
    int128_t arg_48 = arg2.o
    result = sub_563c40(&arg_28, 0xc, 0)
    
    if (result != 0)
        void* eax_5 = sub_573400()
        result =
            sub_583720(eax_5, *(eax_5 + 0xc), *(eax_5 + 4), result, 0x476, nullptr, 0x476, 0, 0, 4)

CookieCheckFunction(result)
return result
