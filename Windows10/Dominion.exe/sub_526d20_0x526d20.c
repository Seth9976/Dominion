// 函数: sub_526d20
// 地址: 0x526d20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ecx
int32_t edx
ecx, edx = __chkstk(0x2608)
__security_cookie
int32_t* var_10 = ecx
void arg_58
uint32_t eax_3 = sub_566240(&arg_58, edx, 2, &arg_58, &data_7bf980)
void arg_ce0
__builtin_memcpy(&arg_ce0, eax_3, 0xc84)
void arg_1968
__builtin_memcpy(&arg_1968, eax_3, 0xc84)
sub_561940(&arg_1968)
int32_t eax_6 = *(*(sub_573400() + 4) + 0x1504)

if (eax_6 != 3 && eax_6 != 5 && eax_6 != 4 && eax_6 != 6)
    sub_61b1b0(eax_6, 7, eax_6 == 2, 0xffffffff, 0, 1, nullptr, nullptr, nullptr, 0, 0, 0, 0, 0)

int32_t arg_4
__builtin_memset(&arg_4, 0, 0x24)
var_4.q = 0
int128_t arg_28 = 0x16.o
int128_t arg_38 = arg1.o
int128_t arg_48 = arg2.o
int32_t* eax_7 = sub_563c40(&arg_28, 7, 0)

if (eax_7 != 0)
    int32_t ecx_3 = 0
    
    if (arg3 s> 0)
        do
            if (*(&arg_ce0 + (ecx_3 << 2)) == eax_7)
                void* eax_9 = arg3 - 1
                arg3 = eax_9
                *(&arg_ce0 + (ecx_3 << 2)) = *(&arg_ce0 + (eax_9 << 2))
                break
            
            ecx_3 += 1
        while (ecx_3 s< arg3)
    
    uint32_t edi_1 = zx.d(eax_7.w)
    void* ecx_4 = *(sub_573400() + 4)
    
    if (edi_1 u>= 0x320)
        sub_591930()
    
    int32_t eax_12 = edi_1 * 0x64
    char eax_13 = sub_5754f0(eax_12, *(eax_12 + ecx_4 + 0x1a4c), ecx_4, 0x2000, 0)
    int32_t* ecx_5 = var_10
    
    if (eax_13 != 0)
        **ecx_5 = 1
    
    *ecx_5[1] = 1
    sub_562400(sub_56e9c0(1), 0x3ee, eax_7, 0)

void* eax_17 = sub_573400()
*(eax_17 + 0xc)
*(eax_17 + 4)
uint32_t result = sub_582eb0(&arg_ce0, arg3, 0x3ee, 0xb, 7, 0, 0, 0, nullptr, nullptr)
CookieCheckFunction(result)
return result
