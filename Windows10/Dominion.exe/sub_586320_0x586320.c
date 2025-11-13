// 函数: sub_586320
// 地址: 0x586320
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t var_c8c
int32_t eax_3 = sub_590990(&var_c8c, 0xffffffff, arg3, 5, &var_c8c)
int32_t edx

if (eax_3 != 0)
    if (eax_3 != 1)
        sub_591930()
    
    edx = var_c8c
else
    edx = 0

int32_t ecx = *arg4
char ebx_1 = arg7
uint32_t eax_4 = zx.d(ecx.w)

if (ecx != edx)
    ebx_1 = arg7

if (eax_4 u>= 0x320)
    edx = sub_591930()

void* ecx_2 = eax_4 * 0x64 + arg3
void* var_c94_1 = ecx_2

if (*(ecx_2 + 0x1a50) == 0x3ea)
    arg3[arg2 * 0x168c + 0x5d4c] += 1

void* eax_6 = arg3[0x541]

if (eax_6 != 3 && eax_6 != 5 && eax_6 != 4 && eax_6 != 6)
    int32_t* ecx_3
    ecx_3.b = eax_6 == 2
    eax_6, edx =
        sub_61b1b0(eax_6, 0x16, ecx_3.b, 0xffffffff, *arg4, 2, 1, *arg6, nullptr, 0, 0, 0, 0, 0)
    ecx_2 = var_c94_1

if ((ebx_1 & 6) == 0)
    if (*(ecx_2 + 0x1a50) == 0x3e9)
        sub_63b870(eax_6, &data_801800, "card.where != CW_PLAYER_IN_PLAY", 
            "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0x30be, "PlayCard")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    void* eax_7
    eax_7.b = arg3[0x673] != arg2
    ecx_2, edx = sub_5822e0(eax_7 + 2, arg2, arg3, *arg4, eax_7 + 2, 0x3e9, nullptr, 0, 0, 0, 0, 0, 
        nullptr, 0, nullptr, nullptr)
    arg4[1] = *(var_c94_1 + 0x1a54)

int32_t eax_11 = *arg4

if ((ebx_1 & 8) == 0)
    int32_t var_ca8_2 = 1
else
    int32_t var_ca8_1 = 0

void* result =
    sub_5858c0(sub_578d90(eax_11, edx, arg3, eax_11, ecx_2, 1), arg2, arg3, arg4, arg5, arg6, ebx_1)
int32_t ecx_8 = arg3[0x541]

if (ecx_8 != 3 && ecx_8 != 5 && ecx_8 != 4 && ecx_8 != 6)
    ecx_8.b = ecx_8 == 2
    sub_61b1b0(result, 0x16, ecx_8.b, 0xffffffff, *arg4, 2, nullptr, nullptr, nullptr, 0, 0, 0, 0, 
        0)

if (ebx_1 s>= 0)
    sub_583350(arg3)

result.b = result.b
CookieCheckFunction(result)
return result
