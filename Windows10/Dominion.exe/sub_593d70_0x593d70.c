// 函数: sub_593d70
// 地址: 0x593d70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void var_6c
uint32_t result = __security_cookie ^ &var_6c
uint32_t result_1 = result
int32_t i = 0

if (*(arg1 + 0x1a40) s> 0)
    TEB* fsbase
    void* esi_1 = *fsbase->ThreadLocalStoragePointer
    void* var_68_1 = esi_1
    void* var_64_1 = arg1 + 0x1a2c
    
    do
        void var_60
        memset(&var_60, 0, 0x50)
        
        if (*(esi_1 + 0xf010) s>= 0x200)
            sub_591930()
        
        int32_t ecx = *(esi_1 + 0xf010)
        int32_t eax_6 = ecx * 0x78
        void* edx_1
        
        if (ecx != 0)
            edx_1 = esi_1 - 0x68 + eax_6
        else
            edx_1 = nullptr
        
        void* esi_3 = esi_1 + 0x10 + eax_6
        *(var_68_1 + 0xf010) = ecx + 1
        *(esi_3 + 8) = edx_1
        *esi_3 = 4
        *(esi_3 + 4) = arg1
        *(esi_3 + 0x10) = 0
        *(esi_3 + 0xc) = 0xffffffff
        *(esi_3 + 0x1c) = 0
        *(esi_3 + 0x20) = 0
        int32_t eax_8 = *(arg1 + 0x1a0c)
        int32_t eax_9
        int32_t edx_3
        edx_3:eax_9 = sx.q(eax_8)
        *(arg1 + 0x1a0c) = eax_8 + 1
        *(esi_3 + 0x28) = eax_9
        *(esi_3 + 0x2c) = edx_3
        *(esi_3 + 0x44) = 0
        *(esi_3 + 0x24) = 0
        *(esi_3 + 0x34) = 0
        *(esi_3 + 0x70) = &var_60
        *(esi_3 + 0x38) = 0
        (*var_64_1)()
        int32_t eax_11 = *(var_68_1 + 0xf010)
        
        if (eax_11 s<= 0)
            sub_63b870(eax_11, &data_801800, "cs.numContexts > 0", 
                "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0x792, "DomPopContext")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        result = eax_11 - 1
        i += 1
        *(var_68_1 + 0xf010) = result
        var_64_1 += 4
        esi_1 = var_68_1
    while (i s< *(arg1 + 0x1a40))

*(arg1 + 0x1a40) = 0
CookieCheckFunction(result)
return result
