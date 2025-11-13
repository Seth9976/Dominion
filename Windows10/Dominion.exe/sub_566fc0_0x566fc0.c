// 函数: sub_566fc0
// 地址: 0x566fc0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4 = ebp
void* ecx
int32_t edx
ecx, edx = __chkstk(0x1988)
__security_cookie
void* esi = ecx
int32_t edi = edx

if (*(esi + 0xc80) != 0)
    if (edi s<= 0)
        sub_591930()
    
    int32_t eax_2 = *(esi + 0xc80)
    var_4.q = 0
    
    if (edi s> eax_2)
        edi = eax_2
    
    int64_t arg_c = 0
    int32_t var_24_1 = arg2
    int64_t arg_20 = 0
    arg2.q = 0
    arg1 = 0
    int128_t arg_28 = 0.o
    int128_t arg_38 = edi.o
    int128_t arg_48 = arg2.o
    void arg_60
    void arg_ce8
    __builtin_memcpy(&arg_ce8, 
        sub_563960(&arg_60, edi, esi, &arg_60, edi, 0x17, &arg_28, var_24_1, 0, 0), 0xc84)
    void* eax_5 = sub_573400()
    *(eax_5 + 0xc)
    *(eax_5 + 4)
    sub_582eb0(&arg_ce8, arg3, edi, 0xb, 0, 0, 0, 0, nullptr, nullptr)
    esi = &arg_ce8

__builtin_memcpy(arg1, esi, 0xc84)
CookieCheckFunction(arg1)
return arg1
