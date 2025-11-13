// 函数: sub_510640
// 地址: 0x510640
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t var_c8c[0x321]
int32_t i

for (i = 0; i s< 0xa; i += 1)
    void* eax_2 = sub_573400()
    int32_t eax_4
    int32_t edx_1
    edx_1:eax_4 = muls.dp.d(0x51eb851f, 
        sub_5727e0(eax_2, 0x100, *(eax_2 + 4), 2, 0xffffffff, nullptr) - *(eax_2 + 4) - 0x1a48)
    int32_t edx_2 = edx_1 s>> 5
    var_c8c[i] = (edx_2 u>> 0x1f) + edx_2

TEB* fsbase
void* ThreadLocalStoragePointer = fsbase->ThreadLocalStoragePointer
void* ecx_6 = *ThreadLocalStoragePointer + 0x10
int32_t edx_3 = *(ecx_6 + 0xf000)

if (edx_3 s<= 0)
    sub_63b870(ThreadLocalStoragePointer, &data_801800, "cs.numContexts > 0", 
        "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0x7b9, "DomGetContext")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t* ecx_7 = *(ecx_6 + edx_3 * 0x78 - 0x74)
int32_t result = ecx_7[0x541]

if (result != 3 && result != 5 && result != 4 && result != 6 && ecx_7[0x540].b == 0)
    int32_t eax_11 = 0xffffffff
    
    if (ecx_7[0x673] == 0xffffffff)
        eax_11 = ecx_7[0x674]
    
    result = sub_59f9b0(eax_11, 0xffffffff, ecx_7, eax_11, 0x43, 0, &var_c8c, i, 2, 0, 0, 0)

CookieCheckFunction(result)
return result
