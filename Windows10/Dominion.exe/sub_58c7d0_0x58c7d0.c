// 函数: sub_58c7d0
// 地址: 0x58c7d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t eax_2 = arg1[0x541]

if (eax_2 != 3 && eax_2 != 5)
    sub_5ca1d0(arg1)

int32_t i_2 = 0
void* ebx = &arg1[0x35d]
TEB* fsbase
int32_t i

do
    int32_t ecx = *ebx
    
    if (ecx == 0)
        break
    
    void* eax_3 = sub_571b30(ecx, arg1[0x352])
    int32_t j = 0
    void* edx_2 = eax_3 + 0xa8
    
    do
        int32_t esi_1 = *edx_2
        
        if (esi_1 == 0)
            break
        
        if (esi_1 == 2)
            int32_t esi_3 = *(j * 0xb4 + eax_3 + 0xb8)
            void var_5c
            memset(&var_5c, 0, 0x50)
            sub_572f80(&var_5c, *ebx, arg1, &var_5c, 0xffffffff)
            esi_3()
            void* ecx_2 = *fsbase->ThreadLocalStoragePointer
            int32_t eax_7 = *(ecx_2 + 0xf010)
            
            if (eax_7 s> 0)
                *(ecx_2 + 0xf010) = eax_7 - 1
                break
            
            sub_63b870(eax_7, &data_801800, "cs.numContexts > 0", 
                "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0x792, "DomPopContext")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        j += 1
        edx_2 += 0xb4
    while (j s< 8)
    
    ebx += 0x3c
    i = i_2 + 1
    i_2 = i
while (i s< 4)
int32_t i_1 = 0
int64_t var_68

if (arg1[0x34e] s> 0)
    void* ThreadLocalStoragePointer = fsbase->ThreadLocalStoragePointer
    var_68 = 0
    void* ebx_1 = *ThreadLocalStoragePointer
    
    do
        sub_573050(&var_68, i_1, arg1, &var_68)
        int32_t var_78_2 = sub_588340(arg1, i_1)
        sub_588ee0(arg1, i_1)
        int32_t eax_11 = *(ebx_1 + 0xf010)
        
        if (eax_11 s<= 0)
            sub_63b870(eax_11, &data_801800, "cs.numContexts > 0", 
                "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0x792, "DomPopContext")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        i_1 += 1
        *(ebx_1 + 0xf010) = eax_11 - 1
    while (i_1 s< arg1[0x34e])

int32_t eax_13 = arg1[0x541]

if (eax_13 != 3 && eax_13 != 5 && eax_13 != 4 && eax_13 != 6 && arg1[0x540].b == 0)
    int32_t eax_14 = 0xffffffff
    
    if (arg1[0x673] == 0xffffffff)
        eax_14 = arg1[0x674]
    
    sub_59f9b0(eax_14, 0xffffffff, arg1, eax_14, 3, 0, nullptr, 0, 0, 0, 0, 0)

void var_54
memset(&var_54, 0, 0x48)
int32_t var_64_2 = 0x1d
int32_t result = sub_580700(i_1, &var_68:4, 1, &var_54, 0, nullptr, 0, nullptr)
arg1[0x677] = 1
CookieCheckFunction(result)
return result
